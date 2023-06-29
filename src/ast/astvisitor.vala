/* astvisitor.vala
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
    public interface ASTVisitor {
        public abstract void visitStyleSheet (StyleSheet node);
        public abstract void visitImportStatement (ImportStatement node);
        public abstract void visitMediaStatement (MediaStatement node);
        public abstract void visitCharsetStatement (CharsetStatement node);
        public abstract void visitNamespaceStatement (NamespaceStatement node);
        public abstract void visitDefineColorStatement (DefineColorStatement node);
        public abstract void visitKeyframesStatement (KeyframesStatement node);
        public abstract void visitKeyFrameBlockList (KeyFrameBlockList node);
        public abstract void visitKeyFrame (KeyFrame node);
        public abstract void visitFrom (From node);
        public abstract void visitTo (To node);
        public abstract void visitSupportsStatement (SupportsStatement node);
        public abstract void visitAtRule (AtRule node);
        public abstract void visitRuleSet (RuleSet node);
        public abstract void visitSelectors (Selectors node);
        public abstract void visitBlock (Block node);
        public abstract void visitNestingSelector (NestingSelector node);
        public abstract void visitUniversalSelector (UniversalSelector node);
        public abstract void visitClassSelector (ClassSelector node);
        public abstract void visitPseudoClassSelector (PseudoClassSelector node);
        public abstract void visitPseudoElementSelector (PseudoElementSelector node);
        public abstract void visitIdSelector (IdSelector node);
        public abstract void visitAttributeSelector (AttributeSelector node);
        public abstract void visitChildSelector (ChildSelector node);
        public abstract void visitDescendantSelector (DescendantSelector node);
        public abstract void visitSibilingSelector (SibilingSelector node);
        public abstract void visitAdjacentSibilingSelector (AdjacentSibilingSelector node);
        public abstract void visitPseudoClassArguments (PseudoClassArguments node);
        public abstract void visitDeclaration (Declaration node);
        public abstract void visitLastDeclaration (LastDeclaration node);
        public abstract void visitImportant (Important node);
        public abstract void visitFeatureQuery (FeatureQuery node);
        public abstract void visitParenthesizedQuery (ParenthesizedQuery node);
        public abstract void visitBinaryQuery (BinaryQuery node);
        public abstract void visitUnaryQuery (UnaryQuery node);
        public abstract void visitSelectorQuery (SelectorQuery node);
        public abstract void visitParenthesizedValue (ParenthesizedValue node);
        public abstract void visitColorValue (ColorValue node);
        public abstract void visitStringValue (StringValue node);
        public abstract void visitIntegerValue (IntegerValue node);
        public abstract void visitFloatValue (FloatValue node);
        public abstract void visitCallExpression (CallExpression node);
        public abstract void visitBinaryExpression (BinaryExpression node);
        public abstract void visitIdentifier (Identifier node);
        public abstract void visitAtKeyword (AtKeyword node);
        public abstract void visitPlainValue (PlainValue node);
    }
}

