/* parsecontext.vala
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
    internal class ParseContext {
        Diagnostic[] diags;
        string text;
        string uri;
        string[] lines;

        internal ParseContext (Diagnostic[] diags, string text, string uri) {
            this.diags = diags;
            this.text = text;
            this.uri = uri;
            this.lines = this.text.split ("\n");
            var t = new TreeSitter.TSParser ();
            t.set_language (TreeSitter.tree_sitter_css ());
            var tree = t.parse_string (null, text, text.length);
            if (tree != null) {
                var root = tree.root_node();
            }
        }

        // Used for hovering/completion
        internal IIdentifier? extract_identifier (uint line, uint character) {
            if (line >= this.lines.length)
                return null;
            var l = this.lines[line];
            if (character >= l.length)
                return null;
            var c = l[character];
            // Some other stuff like e.g. numbers
            if (c != '-' && !c.isalpha ())
                return null;
            var lower = character;
            while (lower != 0) {
                var lc = l[lower];
                if (lc != '-' && lc != '@' && !lc.isalpha ()) {
                    lower++;
                    break;
                }
                lower--;
            }
            var higher = character;
            while (higher != 0) {
                var lc = l[higher];
                if (lc != '-' && lc != '@' && !lc.isalpha ()) {
                    break;
                }
                higher++;
            }
            var n = l.substring (lower, higher - lower);
            var r = new Range() {
                start = new Position () {
                    line = line,
                    character = lower
                },
                end = new Position () {
                    line = line,
                    character = higher
                },
            };
            return new IIdentifier (n, r);
        }
    }
}
