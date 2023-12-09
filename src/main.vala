/* main.vala
 *
 * Copyright 2023 JCWasmx86
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

int main (string[] args) {
    if (args.length == 2) {
        var file = args[1];
        string contents;
        FileUtils.get_contents (file, out contents);
        var p = new GtkCssLangServer.ParseContext (new GtkCssLangServer.Diagnostic[0], contents, file);
        var gtkcssprovider = new Gtk.CssProvider ();
        var diags = new GtkCssLangServer.Diagnostic[0];
        gtkcssprovider.parsing_error.connect ((section, error) => {
            var start = section.get_start_location ();
            var s_pos = new GtkCssLangServer.Position () {
                line = (uint) start.lines,
                character = (uint) start.line_bytes
            };
            var end = section.get_end_location ();
            var e_pos = new GtkCssLangServer.Position () {
                line = (uint) end.lines,
                character = (uint) end.line_bytes
            };
            var sev = error.domain == Gtk.CssParserWarning.quark () ? GtkCssLangServer.DiagnosticSeverity.Warning : GtkCssLangServer.DiagnosticSeverity.Error;
            var range = new GtkCssLangServer.Range () {
                start = s_pos,
                end = e_pos
            };
            diags += new GtkCssLangServer.Diagnostic () {
                range = range,
                severity = sev,
                message = error.message,
                file = file,
            };
        });
        gtkcssprovider_load_from_data (gtkcssprovider, contents);
        foreach (var d in p.enhanced_diags) {
            diags += d;
        }
        foreach (var diag in diags) {
            var range = "%u:%u".printf (diag.range.start.line, diag.range.start.character);
            stdout.printf((diag.severity == GtkCssLangServer.DiagnosticSeverity.Error ? "[ERROR] " : "[WARNING] ") + diag.file + ":["+ range + "]: "+ diag.message + "\n");
        }
        return (diags.length == 0 ? 0 : 1);
    } else if (args.length == 1) {
        GLib.Log.writer_default_set_use_stderr (true);
        GLib.Log.set_debug_enabled (true);
        var main_loop = new MainLoop ();
        var s = new GtkCssLangServer.Server (main_loop);
        var new_stdout_fd = Posix.dup (Posix.STDOUT_FILENO);
        Posix.close (Posix.STDOUT_FILENO);
        Posix.dup2 (Posix.STDERR_FILENO, Posix.STDOUT_FILENO);
        var input_stream = new UnixInputStream (Posix.STDIN_FILENO, false);
        var output_stream = new UnixOutputStream (new_stdout_fd, false);
        var b = Unix.set_fd_nonblocking (Posix.STDIN_FILENO, true) && Unix.set_fd_nonblocking (new_stdout_fd, true);
        if (!b) {
            error ("Unable to make pipes non-blocking");
        }
        s.accept_io_stream (new SimpleIOStream (input_stream, output_stream));
        main_loop.run ();
        return 0;
    } else {
        stderr.printf("Error: Run either with one(!) CSS file as argument for linting this file or run gtkcsslanguageserver without args for starting the server!\n");
        return 1;
    }
}
