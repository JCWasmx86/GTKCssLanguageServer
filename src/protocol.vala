/* protocol.vala
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
    class InitializeParams : Object {
        public int processId { get; set; }
        public string? rootPath { get; set; }
        public string? rootUri { get; set; }
        public ClientCapabilities capabilities { get; set; default = new ClientCapabilities (); }
    }
    class ClientCapabilities : Object {
        public TextDocumentClientCapabilities textDocument { get; set; default = new TextDocumentClientCapabilities (); }
    }
    class TextDocumentClientCapabilities : Object {
        public DocumentSymbolCapabilities documentSymbol { get; set; default = new DocumentSymbolCapabilities (); }
        public RenameClientCapabilities rename { get; set; default = new RenameClientCapabilities (); }
    }
    class RenameClientCapabilities : Object {
        public bool prepareSupport { get; set; }
    }
    class DocumentSymbolCapabilities : Object {
        public bool hierarchicalDocumentSymbolSupport { get; set; }
    }
    class TextDocumentPositionParams : Object {
        public TextDocumentIdentifier textDocument { get; set; }
        public Position position { get; set; }
    }
    class TextDocumentIdentifier : Object {
        public string uri { get; set; }
    }
    class Position : Object {
        public uint line { get; set; default = -1; }
        public uint character { get; set; default = -1; }
    }

    class DocumentSymbol : Object, Json.Serializable {
        public string? name { get; set; }
        public string? detail { get; set; }
        public int kind { get; set; }
        public bool deprecated { get; set; }
        public Range range { get; set; }
    }
    [CCode (default_value = "GTKCSS_SYMBOL_KIND_Variable")]
    enum SymbolKind {
        File = 1,
        Module = 2,
        Namespace = 3,
        Package = 4,
        Class = 5,
        Method = 6,
        Property = 7,
        Field = 8,
        Constructor = 9,
        Enum = 10,
        Interface = 11,
        Function = 12,
        Variable = 13,
        Constant = 14,
        String = 15,
        Number = 16,
        Boolean = 17,
        Array = 18,
        Object = 19,
        Key = 20,
        Null = 21,
        EnumMember = 22,
        Struct = 23,
        Event = 24,
        Operator = 25,
        TypeParameter = 26
    }
    class Range : Object {
        public Position start { get; set; }
        public Position end { get; set; }
    }

    class Location : Object {
        public string uri { get; set; }
        public Range range { get; set; }
    }

    class TextDocumentContentChangeEvent : Object {
        public Range? range     { get; set; }
        public int rangeLength { get; set; }
        public string text       { get; set; }
    }

    class MarkupContent : Object {
        public string kind { get; set; }
        public string value { get; set; }
    }

    class Hover : Object {
        public MarkupContent contents { get; set; }
        public Range range { get; set; }
    }

    class Diagnostic : Object {
        public Range range { get; set; }
        public DiagnosticSeverity severity { get; set; }
        public string? code { get; set; }
        public string? source { get; set; }
        public string message { get; set; }
        internal string file { get; set; }
    }
    enum DiagnosticSeverity {
        Unset = 0,
        Error = 1,
        Warning = 2,
        Information = 3,
        Hint = 4
    }
}
