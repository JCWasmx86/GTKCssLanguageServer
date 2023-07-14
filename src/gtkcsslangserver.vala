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
namespace GtkCssLangServer {
    public class Server : Jsonrpc.Server {
        Uri? base_uri;
        MainLoop loop;
        GLib.HashTable<string, ParseContext> ctxs;
        GLib.Mutex mutex;

        internal Server (MainLoop l) {
            this.loop = l;
            this.mutex = Mutex ();
            this.ctxs = new GLib.HashTable<string, ParseContext> (GLib.str_hash, GLib.str_equal);
            critical ("Documentation comes from MDN: Attributions and copyright licensing by Mozilla Contributors is licensed under CC-BY-SA 2.5.");
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
            this.mutex.lock ();
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
            var p = new ParseContext (diags, text, uri);
            var arr = new Json.Array ();
            foreach (var d in diags) {
                arr.add_element (Json.gobject_serialize (d));
            }
            foreach (var d in p.enhanced_diags) {
                arr.add_element (Json.gobject_serialize (d));
            }
            client.send_notification (
                                      "textDocument/publishDiagnostics",
                                      build_dict (
                                                  uri : new Variant.string (uri),
                                                  diagnostics: Json.gvariant_deserialize (new Json.Node.alloc ().init_array (arr), null)
            ));
            this.mutex.unlock ();
            return p;
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
                case "textDocument/documentSymbol":
                    this.symbols (client, id, parameters);
                    break;
                case "textDocument/declaration":
                case "textDocument/definition":
                    this.definition (client, id, parameters);
                    break;
                case "textDocument/completion":
                    this.completion (client, method, id, parameters);
                    break;
                }
            } catch (Error e) {
                client.reply_error_async (id, Jsonrpc.ClientError.INTERNAL_ERROR, "Error: %s".printf (e.message), null);
                return false;
            }
            return true;
        }

        void completion (Jsonrpc.Client client, string method, Variant id, Variant @params) throws Error {
            var p = Util.parse_variant<CompletionParams>(@params);
            var ctx = this.ctxs[p.textDocument.uri];
            if (ctx == null) {
                var json_array = new Json.Array ();
                var variant_array = Json.gvariant_deserialize (new Json.Node.alloc ().init_array (json_array), null);
                client.reply (id, variant_array);
                return;
            }
            info ("Completing at %s:[%u:%u]", p.textDocument.uri, p.position.line, p.position.character);
            var completions = ctx.complete (p);
            var json_array = new Json.Array ();
            foreach (var comp in completions)
                json_array.add_element (Json.gobject_serialize (comp));
            var variant_array = Json.gvariant_deserialize (new Json.Node.alloc ().init_array (json_array), null);
            client.reply (id, variant_array);
        }


        void definition (Jsonrpc.Client client, Variant id, Variant params) throws Error {
            var p = Util.parse_variant<TextDocumentPositionParams> (@params);
            var uri = p.textDocument.uri;
            var ctx = this.ctxs[uri];
            if (ctx == null) {
                client.reply (id, null);
                return;
            }
            var location = ctx.find_declaration (p.position);
            client.reply (id, ((location == null) ? null : Util.object_to_variant (location)));
        }

        void symbols (Jsonrpc.Client client, Variant id, Variant params) throws Error {
            var p = Util.parse_variant<DocumentSymbolParams> (@params);
            var uri = p.textDocument.uri;
            var ctx = this.ctxs[uri];
            var array = new Json.Array ();
            if (ctx != null) {
                foreach (var sym in ctx.symbols ()) {
                    array.add_element (Json.gobject_serialize (sym));
                }
            }
            Variant result = Json.gvariant_deserialize (new Json.Node.alloc ().init_array (array), null);
            client.reply (id, result);
        }

        void hover (Jsonrpc.Client client, Variant id, Variant params) throws Error {
            var p = Util.parse_variant<TextDocumentPositionParams> (@params);
            var uri = p.textDocument.uri;
            var ctx = this.ctxs[uri];
            info ("Hovering at %s:[%u:%u]", uri, p.position.line, p.position.character);
            var response = ctx.hover (p.position.line, p.position.character);
            if (response == null) {
                client.reply (id, null);
                return;
            }
            client.reply (id, Util.object_to_variant (response));
        }

        void initialize (Jsonrpc.Client client, Variant id, Variant @params) throws Error {
            var init = Util.parse_variant<InitializeParams> (@params);
            this.base_uri = Uri.parse (init.rootUri, UriFlags.NONE);
            client.reply (id, build_dict (
                                          capabilities : build_dict (
                                                                     textDocumentSync: new Variant.int32 (1 /* Full*/),
                                                                     diagnosticProvider: new Variant.boolean (true),
                                                                     hoverProvider: new Variant.boolean (true),
                                                                     documentSymbolProvider: new Variant.boolean (true),
                                                                     declarationProvider: new Variant.boolean (true),
                                                                     definitionProvider: new Variant.boolean (true),
                                                                     completionProvider: build_dict (
                                                                                                     triggerCharacters: new Variant.strv (new string[] { "@", ":", "-" })
                                                                     )
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
