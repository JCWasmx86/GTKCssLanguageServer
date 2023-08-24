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
    public class Position : Object {
        public uint line { get; set; default = -1; }
        public uint character { get; set; default = -1; }

        public int compare_to (Position other) {
            return line > other.line ? 1 :
                   (line == other.line ?
                    (character > other.character ? 1 :
                     (character == other.character ? 0 : -1)) : -1);
        }
    }

    class DocumentSymbolParams : Object {
        public TextDocumentIdentifier textDocument { get; set; }
    }

    class DocumentSymbol : Object {
        public string? name { get; set; }
        public string? detail { get; set; }
        public int kind { get; set; }
        public bool deprecated { get; set; }
        public Range range { get; set; }
    }

    [CCode (default_value = "GTK_CSS_LANG_SERVER_SYMBOL_KIND_Variable")]
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
    public class Range : Object {
        public Position start { get; set; }
        public Position end { get; set; }

        public bool contains (Position pos) {
            return start.compare_to (pos) <= 0 && pos.compare_to (end) <= 0;
        }
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
        public string file { get; set; }
    }
    enum DiagnosticSeverity {
        Unset = 0,
        Error = 1,
        Warning = 2,
        Information = 3,
        Hint = 4
    }

    [CCode (default_value = "GTK_CSS_LANG_SERVER_COMPLETION_TRIGGER_KIND_Invoked")]
    enum CompletionTriggerKind {
        Invoked = 1,
        TriggerCharacter = 2,
        TriggerForIncompleteCompletions = 3
    }

    class CompletionContext : Object {
        public CompletionTriggerKind triggerKind { get; set; }
        public string? triggerCharacter { get; set; }
    }

    class CompletionParams : TextDocumentPositionParams {
        public CompletionContext? context { get; set; }
    }

    enum CompletionItemTag {
        Deprecated = 1,
    }

    [CCode (default_value = "GTK_CSS_LANG_SERVER_INSERT_TEXT_FORMAT_PlainText")]
    enum InsertTextFormat {
        PlainText = 1,
        Snippet = 2,
    }

    class CompletionItem : Object {
        public string label { get; set; }
        public CompletionItemKind kind { get; set; }
        public string detail { get; set; }
        public string insertText { get; set; }
        public InsertTextFormat insertTextFormat { get; set; default = InsertTextFormat.PlainText; }

        public CompletionItem (string label, string insert_text) {
            this.label = label;
            this.kind = CompletionItemKind.Keyword;
            this.insertText = insert_text;
            this.insertTextFormat = InsertTextFormat.Snippet;
        }
    }

    class DocumentRangeFormattingParams : Object {
        public TextDocumentIdentifier textDocument { get; set; }
        public Range? range { get; set; }
        public FormattingOptions options { get; set; }
    }


    class FormattingOptions : Object {
        public uint tabSize { get; set; }
        public bool insertSpaces { get; set; }
        public bool trimTrailingWhitespace { get; set; }
        public bool insertFinalNewline { get; set; }
        public bool trimFinalNewlines { get; set; }
    }

    class TextEdit : Object {
        public Range range { get; set; }
        public string newText { get; set; }

        public TextEdit (Range range, string new_text = "") {
            this.range = range;
            this.newText = new_text;
        }
    }

    [CCode (default_value = "GTK_CSS_LANG_SERVER_COMPLETION_ITEM_KIND_Text")]
    enum CompletionItemKind {
        Text = 1,
        Method = 2,
        Function = 3,
        Constructor = 4,
        Field = 5,
        Variable = 6,
        Class = 7,
        Interface = 8,
        Module = 9,
        Property = 10,
        Unit = 11,
        Value = 12,
        Enum = 13,
        Keyword = 14,
        Snippet = 15,
        Color = 16,
        File = 17,
        Reference = 18,
        Folder = 19,
        EnumMember = 20,
        Constant = 21,
        Struct = 22,
        Event = 23,
        Operator = 24,
        TypeParameter = 25
    }
}
