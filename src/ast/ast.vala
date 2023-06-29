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
    public static Node to_node (TreeSitter.TSNode node) {
        return null;
    }

    public class Node {
        public Range range;
    }

    public class StyleSheet : Node {
        public Node[] items;
    }

    public class ImportStatement : Node {
        public Node @value;
        public Node[] queries;
    }

    public class MediaStatement : Node {
        public Node @value;
        public Node[] queries;
        public Node block;
    }

    public class CharsetStatement : Node {
        public Node @value;
    }

    public class NamespaceStatement : Node {
        public Node? id;
        public Node value;
    }

    public class DefineColorStatement : Node {
        public Node @identifier;
        public Node[] value;
    }

    public class KeyframesStatement : Node {
        public Node? @value;
        public Node name;
        public Node keyframe_block_list;
    }

    public class KeyFrameBlockList : Node {
        public Node[] blocks;
    }

    public class KeyFrame : Node {
        public Node value;
        public Node block;
    }

    public class From : Node {
    }

    public class To : Node {
    }

    public class SupportsStatement : Node {
        public Node query;
        public Node block;
    }

    public class AtRule : Node {
        public Node[] query;
        public Node? block;
    }

    public class RuleSet : Node {
        public Node selectors;
        public Node block;
    }

    public class Selectors : Node {
        public Node[] selectors;
    }

    public class Block : Node {
        public Node[] block_items;
        public Node? last_declaration;
    }

    public class NestingSelector : Node {
    }

    public class UniversalSelector : Node {
    }

    public class ClassSelector : Node {
        public Node? selector;
        public Node identifier;
    }

    public class PseudoClassSelector : Node {
        public Node? selector;
        public Node identifier;
        public Node? arguments;
    }

    public class PseudoElementSelector : Node {
        public Node? selector;
        public Node identifier;
    }

    public class IdSelector : Node {
        public Node? selector;
        public Node identifier;
    }

    public class AttributeSelector : Node {
        public Node? selector;
        public Node identifier;
        public Node? value;
    }

    public class ChildSelector : Node {
        public Node left;
        public Node right;
    }

    public class DescendantSelector : Node {
        public Node left;
        public Node op;
        public Node right;
    }

    public class SibilingSelector : Node {
        public Node left;
        public Node right;
    }

    public class AdjacentSibilingSelector : Node {
        public Node left;
        public Node right;
    }

    public class PseudoClassArguments : Node {
        public Node[] values;
    }

    public class Declaration : Node {
        public Node id;
        public Node value;
        public Node[] values;
        public Node? important;
    }

    public class LastDeclaration : Node {
        public Node id;
        public Node value;
        public Node[] values;
        public Node? important;
    }

    public class Important : Node {
    }

    public class FeatureQuery : Node {
        public Node id;
        public Node[] values;
    }

    public class ParenthesizedQuery : Node {
        public Node query;
    }

    public class BinaryQuery : Node {
        public Node lhs;
        public Node rhs;
    }

    public class UnaryQuery : Node {
        public Node query;
    }

    public class SelectorQuery : Node {
        public Node selector;
    }

    public class ParenthesizedValue : Node {
        public Node inner;
    }

    public class ColorValue : Node {
    }

    public class StringValue : Node {
    }

    public class IntegerValue : Node {
        public Node? unit;
    }

    public class FloatValue : Node {
        public Node? unit;
    }

    public class CallExpression : Node {
        public Node id;
        public Node arguments;
    }

    public class BinaryExpression : Node {
        public Node left;
        public Node right;
    }

    public class Identifier : Node {
    }

    public class AtKeyword : Node {
    }

    public class PlainKeyword : Node {
    }
}
