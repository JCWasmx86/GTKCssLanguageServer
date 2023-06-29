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
        return null;
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
    }

    public class CharsetStatement : Node {
        public Node @value;

        public CharsetStatement (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.value = to_node (node.named_child (0), text);
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
    }

    public class DefineColorStatement : Node {
        public Node @identifier;
        public Node value;

        public DefineColorStatement (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.identifier = to_node (node.named_child (0), text);
            this.value = to_node (node.named_child (1), text);
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
    }

    public class KeyFrame : Node {
        public Node value;
        public Node block;

        public KeyFrame (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.value = to_node (node.named_child (0), text);
            this.block = to_node (node.named_child (1), text);
        }
    }

    public class From : Node {
        public From (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }
    }

    public class To : Node {
        public To (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
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
    }

    public class RuleSet : Node {
        public Node selectors;
        public Node block;

        public RuleSet (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.selectors = to_node (node.named_child (0), text);
            this.block = to_node (node.named_child (1), text);
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
    }

    public class NestingSelector : Node {
        public NestingSelector (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }
    }

    public class UniversalSelector : Node {
        public UniversalSelector (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
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
    }

    public class ChildSelector : Node {
        public Node left;
        public Node right;

        public ChildSelector (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.left = to_node (node.named_child (0), text);
            this.right = to_node (node.named_child (1), text);
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
    }

    public class SibilingSelector : Node {
        public Node left;
        public Node right;

        public SibilingSelector (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.left = to_node (node.named_child (0), text);
            this.right = to_node (node.named_child (1), text);
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
    }

    public class Important : Node {
        public Important (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
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
    }

    public class ParenthesizedQuery : Node {
        public Node query;

        public ParenthesizedQuery (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.query = to_node (node.named_child (0), text);
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
    }

    public class UnaryQuery : Node {
        public Node query;

        public UnaryQuery (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.query = to_node (node.named_child (0), text);
        }
    }

    public class SelectorQuery : Node {
        public Node selector;

        public SelectorQuery (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.selector = to_node (node.named_child (0), text);
        }
    }

    public class ParenthesizedValue : Node {
        public Node inner;

        public ParenthesizedValue (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.inner = to_node (node.named_child (0), text);
        }
    }

    public class ColorValue : Node {
        public ColorValue (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }
    }

    public class StringValue : Node {
        public StringValue (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }
    }

    public class IntegerValue : Node {
        public Node? unit;

        public IntegerValue (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.unit = (node.named_child_count () == 1) ? to_node (node.named_child (0), text) : null;
        }
    }

    public class FloatValue : Node {
        public Node? unit;

        public FloatValue (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.unit = (node.named_child_count () == 1) ? to_node (node.named_child (0), text) : null;
        }
    }

    public class Unit : Node {
        public Unit (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
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
    }

    public class BinaryExpression : Node {
        public Node left;
        public Node right;

        public BinaryExpression (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
            this.left = to_node (node.named_child (0), text);
            this.right = to_node (node.named_child (1), text);
        }
    }

    public class Identifier : Node {
        public Identifier (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }
    }

    public class AtKeyword : Node {
        public AtKeyword (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }
    }

    public class PlainKeyword : Node {
        public PlainKeyword (TreeSitter.TSNode node, string text) {
            this.init_from_node (node);
        }
    }
}
