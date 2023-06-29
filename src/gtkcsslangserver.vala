/* gtkcsslangserver.vala
 *
 * Copyright 2023 JCWasmx86 <JCWasmx86@t-online.de>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */
[CCode (cname = "load_docs")]
public static extern string load_docs ();

namespace GtkCssLangServer {
    public class Server : Jsonrpc.Server {
        Uri? base_uri;
        MainLoop loop;
        GLib.HashTable<string, ParseContext> ctxs;

        internal Server (MainLoop l) {
            this.loop = l;
            this.ctxs = new GLib.HashTable<string, ParseContext> (GLib.str_hash, GLib.str_equal);
        }

        protected override void notification (Jsonrpc.Client client, string method, Variant parameters) {
            info ("Received notification %s", method);
            try {
                switch (method) {
                case "textDocument/didOpen":
                    this.did_open (client, parameters);
                    break;
                case "textDocument/didChange":
                    this.did_change (client, parameters);
                    break;
                case "textDocument/didSave":
                    this.did_save (client, parameters);
                    break;
                }
            } catch (Error e) {
                critical ("Failed to handle [%s]: %s", method, e.message);
            }
        }

        void did_change (Jsonrpc.Client client, Variant @params) throws Error {
            var document = @params.lookup_value ("textDocument", VariantType.VARDICT);
            var changes = @params.lookup_value ("contentChanges", VariantType.ARRAY);
            var uri = (string) document.lookup_value ("uri", VariantType.STRING);
            var iter = changes.iterator ();
            var elem = iter.next_value ();
            var ce = Util.parse_variant<TextDocumentContentChangeEvent> (elem);
            var text = ce.text;
            this.ctxs[uri] = this.parse (text, uri, client);
        }

        void did_open (Jsonrpc.Client client, Variant @params) throws Error {
            var document = @params.lookup_value ("textDocument", VariantType.VARDICT);
            var uri = (string) document.lookup_value ("uri", VariantType.STRING);
            var path = Uri.parse (uri, UriFlags.NONE).get_path ();
            this.ctxs[uri] = this.parse_path (path, uri, client);
        }

        void did_save (Jsonrpc.Client client, Variant @params) throws Error {
            var document = @params.lookup_value ("textDocument", VariantType.VARDICT);
            var uri = (string) document.lookup_value ("uri", VariantType.STRING);
            var path = Uri.parse (uri, UriFlags.NONE).get_path ();
            this.ctxs[uri] = this.parse_path (path, uri, client);
        }

        ParseContext ? parse (string text, string uri, Jsonrpc.Client client) throws Error {
            client.send_notification (
                                      "textDocument/publishDiagnostics",
                                      build_dict (
                                                  uri: new Variant.string (uri),
                                                  diagnostics: new Variant.array (VariantType.VARIANT, {})
                                      )
            );
            var gtkcssprovider = new Gtk.CssProvider ();
            var diags = new Diagnostic[0];
            gtkcssprovider.parsing_error.connect ((section, error) => {
                var start = section.get_start_location ();
                var s_pos = new Position () {
                    line = (uint) start.lines,
                    character = (uint) start.line_bytes
                };
                var end = section.get_end_location ();
                var e_pos = new Position () {
                    line = (uint) end.lines,
                    character = (uint) end.line_bytes
                };
                var sev = error.domain == Gtk.CssParserWarning.quark () ? DiagnosticSeverity.Warning : DiagnosticSeverity.Error;
                var range = new Range () {
                    start = s_pos,
                    end = e_pos
                };
                diags += new Diagnostic () {
                    range = range,
                    severity = sev,
                    message = error.message,
                    file = uri
                };
            });
            gtkcssprovider.load_from_data (text.data);
            var arr = new Json.Array ();
            foreach (var d in diags) {
                arr.add_element (Json.gobject_serialize (d));
            }
            client.send_notification (
                                      "textDocument/publishDiagnostics",
                                      build_dict (
                                                  uri : new Variant.string (uri),
                                                  diagnostics: Json.gvariant_deserialize (new Json.Node.alloc ().init_array (arr), null)
            ));
            return new ParseContext (diags, text, uri);
        }

        ParseContext ? parse_path (string file, string uri, Jsonrpc.Client client) throws Error {
            string contents;
            size_t len;
            FileUtils.get_contents (file, out contents, out len);
            return this.parse (contents, uri, client);
        }

        protected override bool handle_call (Jsonrpc.Client client, string method, Variant id, Variant parameters) {
            info ("Received call %s", method);
            try {
                switch (method) {
                case "initialize":
                    this.initialize (client, id, parameters);
                    break;
                case "textDocument/hover":
                    this.hover (client, id, parameters);
                    break;
                }
            } catch (Error e) {
                client.reply_error_async (id, Jsonrpc.ClientError.INTERNAL_ERROR, "Error: %s".printf (e.message), null);
                return false;
            }
            return true;
        }

        void hover (Jsonrpc.Client client, Variant id, Variant params) throws Error {
            var p = Util.parse_variant<TextDocumentPositionParams> (@params);
            var uri = p.textDocument.uri;
            var ctx = this.ctxs[uri];
            info ("Hovering at %s:[%u:%u]", uri, p.position.line, p.position.character);
            var identifier = ctx.extract_identifier (p.position.line, p.position.character);
            if (identifier == null) {
                client.reply (id, null);
                return;
            }
            var hover_response = new Hover ();
            hover_response.range = identifier.range;
            hover_response.contents = new MarkupContent ();
            hover_response.contents.kind = "markdown";
            hover_response.contents.value = identifier.name;
            client.reply (id, Util.object_to_variant (hover_response));
        }

        void initialize (Jsonrpc.Client client, Variant id, Variant @params) throws Error {
            var init = Util.parse_variant<InitializeParams> (@params);
            this.base_uri = Uri.parse (init.rootUri, UriFlags.NONE);
            client.reply (id, build_dict (
                                          capabilities: build_dict (
                                                                    textDocumentSync: new Variant.int32 (1 /* Full*/),
                                                                    diagnosticProvider: new Variant.boolean (true),
                                                                    hoverProvider: new Variant.boolean (true)
                                          ),
                                          serverInfo: build_dict (
                                                                  name: new Variant.string ("GTK CSS Language Server"),
                                                                  version: new Variant.string ("0.0.1-alpha")
                                          )
            ));
        }

        private Variant build_dict (...) {
            var builder = new VariantBuilder (new VariantType ("a{sv}"));
            var l = va_list ();
            while (true) {
                string? key = l.arg ();
                if (key == null) {
                    break;
                }
                Variant val = l.arg ();
                builder.add ("{sv}", key, val);
            }
            return builder.end ();
        }
    }
}
