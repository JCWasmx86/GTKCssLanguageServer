/* dataextractor.vala
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
    public class ColorReference {
        public string name;
        public Range range;
    }

    public class CallReference {
        public string name;
        public Range range;
    }

    public class PropertyReference {
        public string name;
        public Range range;
    }

    public class DataExtractor : ASTVisitor {
        // @define-color colors
        internal GLib.HashTable<string, Position> colors;
        internal RuleSet[] sets;
        // Access to colors from e.g. libadwaita
        internal ColorReference[] external_color_references;
        // @foo and there is a @define-color foo #123123
        internal ColorReference[] color_references;
        // E.g. calls to lighter(color) or mix(a,b)
        internal CallReference[] calls;
        // Property-references like min-width: 5px;
        internal PropertyReference[] property_uses;

        internal string[] lines;

        public DataExtractor (string text) {
            this.colors = new GLib.HashTable<string, Position> (GLib.str_hash, GLib.str_equal);
            this.sets = new RuleSet[0];
            this.external_color_references = new ColorReference[0];
            this.color_references = new ColorReference[0];
            this.calls = new CallReference[0];
            this.property_uses = new PropertyReference[0];
            this.lines = text.split ("\n");
        }

        private string extract (Node node) {
            if (node.range.start.line != node.range.end.line)
                return "<<>>";
            var line = node.range.start.line;
            return this.lines[line].substring (node.range.start.character, node.range.end.character - node.range.start.character);
        }

        public void visitStyleSheet (StyleSheet node) { node.visit_children (this); }
        public void visitImportStatement (ImportStatement node) { node.visit_children (this); }
        public void visitMediaStatement (MediaStatement node) { node.visit_children (this); }
        public void visitCharsetStatement (CharsetStatement node) { node.visit_children (this); }
        public void visitNamespaceStatement (NamespaceStatement node) { node.visit_children (this); }
        public void visitDefineColorStatement (DefineColorStatement node) {
            node.visit_children (this);
            if (node.identifier is Identifier) {
                var name = this.extract (node.identifier);
                this.colors[name] = node.identifier.range.start;
                info ("Extracted color %s [%u:%u:%u]", name, node.identifier.range.start.line, node.identifier.range.start.character, node.identifier.range.end.character);
            }
        }

        public void visitKeyframesStatement (KeyframesStatement node) { node.visit_children (this); }
        public void visitKeyFrameBlockList (KeyFrameBlockList node) { node.visit_children (this); }
        public void visitKeyFrame (KeyFrame node) { node.visit_children (this); }
        public void visitFrom (From node) { node.visit_children (this); }
        public void visitTo (To node) { node.visit_children (this); }
        public void visitSupportsStatement (SupportsStatement node) { node.visit_children (this); }
        public void visitAtRule (AtRule node) { node.visit_children (this); }
        public void visitRuleSet (RuleSet node) {
            this.sets += node;
            node.visit_children (this);
        }

        public void visitSelectors (Selectors node) { node.visit_children (this); }
        public void visitBlock (Block node) { node.visit_children (this); }
        public void visitNestingSelector (NestingSelector node) { node.visit_children (this); }
        public void visitUniversalSelector (UniversalSelector node) { node.visit_children (this); }
        public void visitClassSelector (ClassSelector node) { node.visit_children (this); }
        public void visitPseudoClassSelector (PseudoClassSelector node) { node.visit_children (this); }
        public void visitPseudoElementSelector (PseudoElementSelector node) { node.visit_children (this); }
        public void visitIdSelector (IdSelector node) { node.visit_children (this); }
        public void visitAttributeSelector (AttributeSelector node) { node.visit_children (this); }
        public void visitChildSelector (ChildSelector node) { node.visit_children (this); }
        public void visitDescendantSelector (DescendantSelector node) { node.visit_children (this); }
        public void visitSibilingSelector (SibilingSelector node) { node.visit_children (this); }
        public void visitAdjacentSibilingSelector (AdjacentSibilingSelector node) { node.visit_children (this); }
        public void visitPseudoClassArguments (PseudoClassArguments node) { node.visit_children (this); }
        public void visitDeclaration (Declaration node) {
            if (node.id is Identifier) {
                var name = this.extract (node.id);
                this.property_uses += new PropertyReference () {
                    name = name,
                    range = node.id.range
                };
                info ("Extracted property %s [%u:%u:%u]", name, node.id.range.start.line, node.id.range.start.character, node.id.range.end.character);
            }
            node.visit_children (this);
        }

        public void visitLastDeclaration (LastDeclaration node) {
            if (node.id is Identifier) {
                var name = this.extract (node.id);
                this.property_uses += new PropertyReference () {
                    name = name,
                    range = node.id.range
                };
                info ("Extracted property %s [%u:%u:%u]", name, node.id.range.start.line, node.id.range.start.character, node.id.range.end.character);
            }
            node.visit_children (this);
        }

        public void visitImportant (Important node) { node.visit_children (this); }
        public void visitFeatureQuery (FeatureQuery node) { node.visit_children (this); }
        public void visitParenthesizedQuery (ParenthesizedQuery node) { node.visit_children (this); }
        public void visitBinaryQuery (BinaryQuery node) { node.visit_children (this); }
        public void visitUnaryQuery (UnaryQuery node) { node.visit_children (this); }
        public void visitSelectorQuery (SelectorQuery node) { node.visit_children (this); }
        public void visitParenthesizedValue (ParenthesizedValue node) { node.visit_children (this); }
        public void visitColorValue (ColorValue node) { node.visit_children (this); }
        public void visitStringValue (StringValue node) { node.visit_children (this); }
        public void visitIntegerValue (IntegerValue node) { node.visit_children (this); }
        public void visitFloatValue (FloatValue node) { node.visit_children (this); }
        public void visitUnit (Unit node) { node.visit_children (this); }
        public void visitCallExpression (CallExpression node) {
            if (node.id is Identifier) {
                var name = this.extract (node.id);
                this.calls += new CallReference () {
                    name = name,
                    range = node.id.range
                };
                info ("Extracted call %s [%u:%u:%u]", name, node.id.range.start.line, node.id.range.start.character, node.id.range.end.character);
            }
            node.visit_children (this);
        }

        public void visitBinaryExpression (BinaryExpression node) { node.visit_children (this); }
        public void visitArguments (Arguments node) { node.visit_children (this); }
        public void visitIdentifier (Identifier node) { node.visit_children (this); }
        public void visitAtKeyword (AtKeyword node) {
            info ("Found probable color reference: %s", this.extract (node));
            this.color_references += new ColorReference () {
                name = this.extract (node).substring (1),
                range = node.range
            };
            node.visit_children (this);
        }

        public void visitPlainValue (PlainValue node) { node.visit_children (this); }
    }
}
