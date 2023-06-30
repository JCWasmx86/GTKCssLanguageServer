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
        for (var i = 0; i < 1000; i++) {
            new GtkCssLangServer.ParseContext (new GtkCssLangServer.Diagnostic[0], contents, file);
        }
        return 0;
    }
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
}

