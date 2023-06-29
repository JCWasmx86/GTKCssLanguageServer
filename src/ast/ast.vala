/* ast.vala
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
    public static Node to_node (TreeSitter.TSNode node, string text) {
        debug ("Converting node of type '%s'", node.type ());
        switch (node.type ()) {
        case "stylesheet":
            return new StyleSheet (node, text);
        case "import_statement":
            return new ImportStatement (node, text);
        case "media_statement":
            return new MediaStatement (node, text);
        case "charset_statement":
            return new CharsetStatement (node, text);
        case "namespace_statement":
            return new NamespaceStatement (node, text);
        case "define_color_statement":
            return new DefineColorStatement (node, text);
        case "keyframes_statement":
            return new KeyframesStatement (node, text);
        case "keyframe_block_list":
            return new KeyFrameBlockList (node, text);
        case "keyframe_block":
            return new KeyFrame (node, text);
        case "from":
            return new From (node, text);
        case "to":
            return new To (node, text);
        case "supports_statement":
            return new SupportsStatement (node, text);
        case "at_rule":
            return new AtRule (node, text);
        case "rule_set":
            return new RuleSet (node, text);
        case "selectors":
            return new Selectors (node, text);
        case "block":
            return new Block (node, text);
        case "nesting_selector":
            return new NestingSelector (node, text);
        case "universal_selector":
            return new UniversalSelector (node, text);
        case "class_selector":
            return new ClassSelector (node, text);
        case "pseudo_class_selector":
            return new PseudoClassSelector (node, text);
        case "pseudo_element_selector":
            return new PseudoElementSelector (node, text);
        case "id_selector":
            return new IdSelector (node, text);
        case "attribute_selector":
            return new AttributeSelector (node, text);
        case "child_selector":
            return new ChildSelector (node, text);
        case "descendant_selector":
            return new DescendantSelector (node, text);
        case "sibling_selector":
            return new SibilingSelector (node, text);
        case "adjacent_sibling_selector":
            return new AdjacentSibilingSelector (node, text);
        case "pseudo_class_arguments":
            return new PseudoClassArguments (node, text);
        case "declaration":
            return new Declaration (node, text);
        case "last_declaration":
            return new LastDeclaration (node, text);
        case "important":
            return new Important (node, text);
        case "feature_query":
            return new FeatureQuery (node, text);
        case "parenthesized_query":
            return new ParenthesizedQuery (node, text);
        case "binary_query":
            return new BinaryQuery (node, text);
        case "unary_query":
            return new UnaryQuery (node, text);
        case "selector_query":
            return new SelectorQuery (node, text);
        case "parenthesized_value":
            return new ParenthesizedValue (node, text);
        case "color_value":
            return new ColorValue (node, text);
        case "string_value":
            return new StringValue (node, text);
        case "integer_value":
            return new IntegerValue (node, text);
        case "float_value":
            return new FloatValue (node, text);
        case "unit":
            return new Unit (node, text);
        case "call_expression":
            return new CallExpression (node, text);
        case "binary_expression":
            return new BinaryExpression (node, text);
        case "arguments":
            return new Arguments (node, text);
        case "identifier":
            return new Identifier (node, text);
        case "at_keyword":
            return new AtKeyword (node, text);
        case "plain_value":
            return new PlainValue (node, text);
        default:
            return new ErrorNode (node, text);
        }
    }

    public class Node : Object {
        public Range range;
        public uint32 length;

        protected void init_from_node (TreeSitter.TSNode t) {
            this.length = t.end_byte () - t.start_byte ();
            this.range = new Range () {
                start = new Position () {
                    line = t.start_point ().row,
                    character = t.start_point ().column
                },
                end = new Position () {
                    line = t.end_point ().row,
                    character = t.end_point ().column
                },
            };
        }

        public virtual void visit (ASTVisitor v) {
        }

        public virtual void visit_children (ASTVisitor v) {
        }
    }

    public class ErrorNode : Node {
        public ErrorNode (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }
    }

    public class StyleSheet : Node {
        public GenericArray<Node> items;

        public StyleSheet (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.items = new GenericArray<Node> ();
            for (var i = 0; i < node.named_child_count (); i++) {
                this.items.add (to_node (node.named_child (i), text));
            }
        }

        public override void visit (ASTVisitor v) {
            v.visitStyleSheet (this);
        }

        public override void visit_children (ASTVisitor v) {
            foreach (var i in this.items) {
                i.visit (v);
            }
        }
    }

    public class ImportStatement : Node {
        public Node @value;
        public GenericArray<Node> queries;

        public ImportStatement (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.value = to_node (node.named_child (0), text);
            this.queries = new GenericArray<Node> ();
            for (var i = 1; i < node.named_child_count (); i++) {
                this.queries.add (to_node (node.named_child (i), text));
            }
        }

        public override void visit (ASTVisitor v) {
            v.visitImportStatement (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.value.visit (v);
            foreach (var i in this.queries) {
                i.visit (v);
            }
        }
    }

    public class MediaStatement : Node {
        public Node @value;
        public GenericArray<Node> queries;
        public Node block;

        public MediaStatement (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.value = to_node (node.named_child (0), text);
            this.queries = new GenericArray<Node> ();
            for (var i = 1; i < node.named_child_count () - 1; i++) {
                this.queries.add (to_node (node.named_child (i), text));
            }
            this.block = to_node (node.named_child (node.named_child_count () - 1), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitMediaStatement (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.value.visit (v);
            foreach (var i in this.queries) {
                i.visit (v);
            }
            this.block.visit (v);
        }
    }

    public class CharsetStatement : Node {
        public Node @value;

        public CharsetStatement (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.value = to_node (node.named_child (0), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitCharsetStatement (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.value.visit (v);
        }
    }

    public class NamespaceStatement : Node {
        public Node? id;
        public Node value;

        public NamespaceStatement (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            if (node.named_child_count () == 2) {
                this.id = to_node (node.named_child (0), text);
                this.value = to_node (node.named_child (1), text);
            } else {
                this.id = null;
                this.value = to_node (node.named_child (0), text);
            }
        }

        public override void visit (ASTVisitor v) {
            v.visitNamespaceStatement (this);
        }

        public override void visit_children (ASTVisitor v) {
            if (this.id != null)
                this.id.visit (v);
            this.value.visit (v);
        }
    }

    public class DefineColorStatement : Node {
        public Node @identifier;
        public Node value;

        public DefineColorStatement (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.identifier = to_node (node.named_child (0), text);
            this.value = to_node (node.named_child (1), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitDefineColorStatement (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.identifier.visit (v);
            this.value.visit (v);
        }
    }

    public class KeyframesStatement : Node {
        public Node? @value;
        public Node name;
        public Node keyframe_block_list;

        public KeyframesStatement (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            if (node.named_child_count () == 3) {
                this.value = to_node (node.named_child (0), text);
                this.name = to_node (node.named_child (1), text);
                this.keyframe_block_list = to_node (node.named_child (2), text);
            } else {
                this.value = null;
                this.name = to_node (node.named_child (0), text);
                this.keyframe_block_list = to_node (node.named_child (1), text);
            }
        }

        public override void visit (ASTVisitor v) {
            v.visitKeyframesStatement (this);
        }

        public override void visit_children (ASTVisitor v) {
            if (this.value != null)
                this.value.visit (v);
            this.value.visit (v);
            this.keyframe_block_list.visit (v);
        }
    }

    public class KeyFrameBlockList : Node {
        public GenericArray<Node> blocks;

        public KeyFrameBlockList (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.blocks = new GenericArray<Node> ();
            for (var i = 0; i < node.named_child_count (); i++) {
                this.blocks.add (to_node (node.named_child (i), text));
            }
        }

        public override void visit (ASTVisitor v) {
            v.visitKeyFrameBlockList (this);
        }

        public override void visit_children (ASTVisitor v) {
            foreach (var b in this.blocks) {
                b.visit (v);
            }
        }
    }

    public class KeyFrame : Node {
        public Node value;
        public Node block;

        public KeyFrame (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.value = to_node (node.named_child (0), text);
            this.block = to_node (node.named_child (1), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitKeyFrame (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.block.visit (v);
            this.value.visit (v);
        }
    }

    public class From : Node {
        public From (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }

        public override void visit (ASTVisitor v) {
            v.visitFrom (this);
        }
    }

    public class To : Node {
        public To (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }

        public override void visit (ASTVisitor v) {
            v.visitTo (this);
        }
    }

    public class SupportsStatement : Node {
        public Node query;
        public Node block;

        public SupportsStatement (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.query = to_node (node.named_child (0), text);
            this.block = to_node (node.named_child (1), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitSupportsStatement (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.query.visit (v);
            this.block.visit (v);
        }
    }

    public class AtRule : Node {
        public Node keyword;
        public GenericArray<Node> query;
        public Node? block;

        public AtRule (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.keyword = to_node (node.named_child (0), text);
            this.query = new GenericArray<Node> ();
            for (var i = 1; i < node.named_child_count () - 1; i++) {
                this.query.add (to_node (node.named_child (i), text));
            }
            var last = node.named_child_count () - 1;
            var last_node = to_node (node.named_child (last), text);
            if (last_node is Block) {
                this.block = last_node;
            } else {
                this.query.add (last_node);
            }
        }

        public override void visit (ASTVisitor v) {
            v.visitAtRule (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.keyword.visit (v);
            foreach (var q in this.query)
                q.visit (v);
            if (this.block != null)
                this.block.visit (v);
        }
    }

    public class RuleSet : Node {
        public Node selectors;
        public Node block;

        public RuleSet (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.selectors = to_node (node.named_child (0), text);
            this.block = to_node (node.named_child (1), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitRuleSet (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.selectors.visit (v);
            this.block.visit (v);
        }
    }

    public class Selectors : Node {
        public GenericArray<Node> selectors;

        public Selectors (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.selectors = new GenericArray<Node> ();
            for (var i = 0; i < node.named_child_count (); i++) {
                this.selectors.add (to_node (node.named_child (i), text));
            }
        }

        public override void visit (ASTVisitor v) {
            v.visitSelectors (this);
        }

        public override void visit_children (ASTVisitor v) {
            foreach (var q in this.selectors)
                q.visit (v);
        }
    }

    public class Block : Node {
        public GenericArray<Node> block_items;

        public Block (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.block_items = new GenericArray<Node> ();
            for (var i = 0; i < node.named_child_count (); i++) {
                this.block_items.add (to_node (node.named_child (i), text));
            }
        }

        public override void visit (ASTVisitor v) {
            v.visitBlock (this);
        }

        public override void visit_children (ASTVisitor v) {
            foreach (var q in this.block_items)
                q.visit (v);
        }
    }

    public class NestingSelector : Node {
        public NestingSelector (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }

        public override void visit (ASTVisitor v) {
            v.visitNestingSelector (this);
        }
    }

    public class UniversalSelector : Node {
        public UniversalSelector (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }

        public override void visit (ASTVisitor v) {
            v.visitUniversalSelector (this);
        }
    }

    public class ClassSelector : Node {
        public Node? selector;
        public Node identifier;

        public ClassSelector (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            if (node.named_child_count () == 1) {
                this.selector = null;
                this.identifier = to_node (node.named_child (0), text);
                return;
            }
            this.selector = to_node (node.named_child (0), text);
            this.identifier = to_node (node.named_child (1), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitClassSelector (this);
        }

        public override void visit_children (ASTVisitor v) {
            if (this.selector != null)
                this.selector.visit (v);
            this.identifier.visit (v);
        }
    }

    public class PseudoClassSelector : Node {
        public Node? selector;
        public Node identifier;
        public Node? arguments;

        public PseudoClassSelector (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            if (node.named_child_count () == 1) {
                this.selector = null;
                this.identifier = to_node (node.named_child (0), text);
                this.arguments = null;
                return;
            } else if (node.named_child_count () == 2) {
                var middle = node.named_child (1);
                if (middle.type () == "arguments" || middle.type () == "pseudo_class_arguments") {
                    this.selector = null;
                    this.identifier = to_node (node.named_child (0), text);
                    this.arguments = to_node (middle, text);
                } else {
                    this.selector = to_node (node.named_child (0), text);
                    this.identifier = to_node (node.named_child (1), text);
                    this.arguments = null;
                }
                return;
            }
            this.selector = to_node (node.named_child (0), text);
            this.identifier = to_node (node.named_child (1), text);
            this.arguments = to_node (node.named_child (2), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitPseudoClassSelector (this);
        }

        public override void visit_children (ASTVisitor v) {
            if (this.selector != null)
                this.selector.visit (v);
            this.identifier.visit (v);
            if (this.arguments != null)
                this.arguments.visit (v);
        }
    }

    public class PseudoElementSelector : Node {
        public Node? selector;
        public Node identifier;

        public PseudoElementSelector (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            if (node.named_child_count () == 1) {
                this.selector = null;
                this.identifier = to_node (node.named_child (0), text);
                return;
            }
            this.selector = to_node (node.named_child (0), text);
            this.identifier = to_node (node.named_child (1), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitPseudoElementSelector (this);
        }

        public override void visit_children (ASTVisitor v) {
            if (this.selector != null)
                this.selector.visit (v);
            this.identifier.visit (v);
        }
    }

    public class IdSelector : Node {
        public Node? selector;
        public Node identifier;

        public IdSelector (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            if (node.named_child_count () == 1) {
                this.selector = null;
                this.identifier = to_node (node.named_child (0), text);
                return;
            }
            this.selector = to_node (node.named_child (0), text);
            this.identifier = to_node (node.named_child (1), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitIdSelector (this);
        }

        public override void visit_children (ASTVisitor v) {
            if (this.selector != null)
                this.selector.visit (v);
            this.identifier.visit (v);
        }
    }

    public class AttributeSelector : Node {
        public Node? selector;
        public Node identifier;
        public Node? value;

        public AttributeSelector (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            if (node.named_child_count () == 1) {
                this.selector = null;
                this.identifier = to_node (node.named_child (0), text);
                this.value = null;
                return;
            } else if (node.named_child_count () == 2) {
                var middle = node.named_child (0);
                if (middle.type () == "identifier" || middle.type () == "attribute_name") {
                    this.selector = null;
                    this.identifier = to_node (node.named_child (0), text);
                    this.value = to_node (node.named_child (1), text);
                } else {
                    this.selector = to_node (node.named_child (0), text);
                    this.identifier = to_node (node.named_child (1), text);
                    this.value = null;
                }
                return;
            }
            this.selector = to_node (node.named_child (0), text);
            this.identifier = to_node (node.named_child (1), text);
            this.value = to_node (node.named_child (2), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitAttributeSelector (this);
        }

        public override void visit_children (ASTVisitor v) {
            if (this.selector != null)
                this.selector.visit (v);
            this.identifier.visit (v);
            if (this.value != null)
                this.value.visit (v);
        }
    }

    public class ChildSelector : Node {
        public Node left;
        public Node right;

        public ChildSelector (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.left = to_node (node.named_child (0), text);
            this.right = to_node (node.named_child (1), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitChildSelector (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.left.visit (v);
            this.right.visit (v);
        }
    }

    public class DescendantSelector : Node {
        public Node left;
        public Node op;
        public Node right;

        public DescendantSelector (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.left = to_node (node.named_child (0), text);
            this.op = to_node (node.named_child (1), text);
            this.right = to_node (node.named_child (2), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitDescendantSelector (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.left.visit (v);
            this.op.visit (v);
            this.right.visit (v);
        }
    }

    public class SibilingSelector : Node {
        public Node left;
        public Node right;

        public SibilingSelector (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.left = to_node (node.named_child (0), text);
            this.right = to_node (node.named_child (1), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitSibilingSelector (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.left.visit (v);
            this.right.visit (v);
        }
    }

    public class AdjacentSibilingSelector : Node {
        public Node left;
        public Node right;

        public AdjacentSibilingSelector (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.left = to_node (node.named_child (0), text);
            this.right = to_node (node.named_child (1), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitAdjacentSibilingSelector (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.left.visit (v);
            this.right.visit (v);
        }
    }

    public class PseudoClassArguments : Node {
        public GenericArray<Node> values;

        public PseudoClassArguments (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.values = new GenericArray<Node> ();
            for (var i = 0; i < node.named_child_count (); i++) {
                this.values.add (to_node (node.named_child (i), text));
            }
        }

        public override void visit (ASTVisitor v) {
            v.visitPseudoClassArguments (this);
        }

        public override void visit_children (ASTVisitor v) {
            foreach (var b in this.values)
                b.visit (v);
        }
    }

    public class Declaration : Node {
        public Node id;
        public Node value;
        public GenericArray<Node> values;
        public Node? important;

        public Declaration (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.id = to_node (node.named_child (0), text);
            this.value = to_node (node.named_child (1), text);
            this.values = new GenericArray<Node> ();
            for (var i = 2; i < node.named_child_count () - 1; i++) {
                this.values.add (to_node (node.named_child (i), text));
            }
            var last_idx = node.named_child_count () - 1;
            var last_node = to_node (node.named_child (last_idx), text);
            if (last_node is Important)
                important = last_node;
            else
                this.values.add (last_node);
        }

        public override void visit (ASTVisitor v) {
            v.visitDeclaration (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.id.visit (v);
            this.value.visit (v);
            foreach (var b in this.values)
                b.visit (v);
            if (this.important != null)
                this.important.visit (v);
        }
    }

    public class LastDeclaration : Node {
        public Node id;
        public Node value;
        public GenericArray<Node> values;
        public Node? important;

        public LastDeclaration (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.id = to_node (node.named_child (0), text);
            this.value = to_node (node.named_child (1), text);
            this.values = new GenericArray<Node> ();
            for (var i = 2; i < node.named_child_count () - 1; i++) {
                this.values.add (to_node (node.named_child (i), text));
            }
            var last_idx = node.named_child_count () - 1;
            var last_node = to_node (node.named_child (last_idx), text);
            if (last_node is Important)
                important = last_node;
            else
                this.values.add (last_node);
        }

        public override void visit (ASTVisitor v) {
            v.visitLastDeclaration (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.id.visit (v);
            this.value.visit (v);
            foreach (var b in this.values)
                b.visit (v);
            if (this.important != null)
                this.important.visit (v);
        }
    }

    public class Important : Node {
        public Important (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }

        public override void visit (ASTVisitor v) {
            v.visitImportant (this);
        }
    }

    public class FeatureQuery : Node {
        public Node id;
        public GenericArray<Node> values;

        public FeatureQuery (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.id = to_node (node.named_child (0), text);
            this.values = new GenericArray<Node> ();
            for (var i = 1; i < node.named_child_count (); i++) {
                this.values.add (to_node (node.named_child (i), text));
            }
        }

        public override void visit (ASTVisitor v) {
            v.visitFeatureQuery (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.id.visit (v);
            foreach (var b in this.values)
                b.visit (v);
        }
    }

    public class ParenthesizedQuery : Node {
        public Node query;

        public ParenthesizedQuery (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.query = to_node (node.named_child (0), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitParenthesizedQuery (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.query.visit (v);
        }
    }

    public class BinaryQuery : Node {
        public Node lhs;
        public Node rhs;

        public BinaryQuery (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.lhs = to_node (node.named_child (0), text);
            this.rhs = to_node (node.named_child (1), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitBinaryQuery (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.lhs.visit (v);
            this.rhs.visit (v);
        }
    }

    public class UnaryQuery : Node {
        public Node query;

        public UnaryQuery (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.query = to_node (node.named_child (0), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitUnaryQuery (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.query.visit (v);
        }
    }

    public class SelectorQuery : Node {
        public Node selector;

        public SelectorQuery (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.selector = to_node (node.named_child (0), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitSelectorQuery (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.selector.visit (v);
        }
    }

    public class ParenthesizedValue : Node {
        public Node inner;

        public ParenthesizedValue (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.inner = to_node (node.named_child (0), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitParenthesizedValue (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.inner.visit (v);
        }
    }

    public class ColorValue : Node {
        public ColorValue (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }

        public override void visit (ASTVisitor v) {
            v.visitColorValue (this);
        }
    }

    public class StringValue : Node {
        public StringValue (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }

        public override void visit (ASTVisitor v) {
            v.visitStringValue (this);
        }
    }

    public class IntegerValue : Node {
        public Node? unit;

        public IntegerValue (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.unit = (node.named_child_count () == 1) ? to_node (node.named_child (0), text) : null;
        }

        public override void visit (ASTVisitor v) {
            v.visitIntegerValue (this);
        }

        public override void visit_children (ASTVisitor v) {
            if (this.unit != null)
                this.unit.visit (v);
        }
    }

    public class FloatValue : Node {
        public Node? unit;

        public FloatValue (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.unit = (node.named_child_count () == 1) ? to_node (node.named_child (0), text) : null;
        }

        public override void visit (ASTVisitor v) {
            v.visitFloatValue (this);
        }

        public override void visit_children (ASTVisitor v) {
            if (this.unit != null)
                this.unit.visit (v);
        }
    }

    public class Unit : Node {
        public Unit (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }

        public override void visit (ASTVisitor v) {
            v.visitUnit (this);
        }
    }

    public class CallExpression : Node {
        public Node id;
        public Node arguments;

        public CallExpression (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.id = to_node (node.named_child (0), text);
            this.arguments = to_node (node.named_child (1), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitCallExpression (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.id.visit (v);
            this.arguments.visit (v);
        }
    }

    public class BinaryExpression : Node {
        public Node left;
        public Node right;

        public BinaryExpression (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.left = to_node (node.named_child (0), text);
            this.right = to_node (node.named_child (1), text);
        }

        public override void visit (ASTVisitor v) {
            v.visitBinaryExpression (this);
        }

        public override void visit_children (ASTVisitor v) {
            this.left.visit (v);
            this.right.visit (v);
        }
    }

    public class Arguments : Node {
        public GenericArray<Node> values;

        public Arguments (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.values = new GenericArray<Node> ();
            for (var i = 0; i < node.named_child_count (); i++) {
                this.values.add (to_node (node.named_child (i), text));
            }
        }

        public override void visit (ASTVisitor v) {
            v.visitArguments (this);
        }

        public override void visit_children (ASTVisitor v) {
            foreach (var b in this.values)
                b.visit (v);
        }
    }

    public class Identifier : Node {
        public Identifier (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }

        public override void visit (ASTVisitor v) {
            v.visitIdentifier (this);
        }
    }

    public class AtKeyword : Node {
        public AtKeyword (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }

        public override void visit (ASTVisitor v) {
            v.visitAtKeyword (this);
        }
    }

    public class PlainValue : Node {
        public PlainValue (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }

        public override void visit (ASTVisitor v) {
            v.visitPlainValue (this);
        }
    }
}
