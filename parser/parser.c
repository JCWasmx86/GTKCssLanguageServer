#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 282
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 10
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATdefine_DASHcolor = 7,
  anon_sym_ATkeyframes = 8,
  aux_sym_keyframes_statement_token1 = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  sym_from = 12,
  sym_to = 13,
  anon_sym_ATsupports = 14,
  sym_nesting_selector = 15,
  anon_sym_STAR = 16,
  anon_sym_DOT = 17,
  anon_sym_COLON = 18,
  anon_sym_COLON_COLON = 19,
  anon_sym_POUND = 20,
  anon_sym_LBRACK = 21,
  anon_sym_EQ = 22,
  anon_sym_TILDE_EQ = 23,
  anon_sym_CARET_EQ = 24,
  anon_sym_PIPE_EQ = 25,
  anon_sym_STAR_EQ = 26,
  anon_sym_DOLLAR_EQ = 27,
  anon_sym_RBRACK = 28,
  anon_sym_GT = 29,
  anon_sym_TILDE = 30,
  anon_sym_PLUS = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  sym_important = 34,
  anon_sym_LPAREN2 = 35,
  anon_sym_and = 36,
  anon_sym_or = 37,
  anon_sym_not = 38,
  anon_sym_only = 39,
  anon_sym_selector = 40,
  aux_sym_color_value_token1 = 41,
  sym_string_value = 42,
  aux_sym_integer_value_token1 = 43,
  aux_sym_float_value_token1 = 44,
  sym_unit = 45,
  anon_sym_DASH = 46,
  anon_sym_SLASH = 47,
  sym_identifier = 48,
  sym_at_keyword = 49,
  sym_comment = 50,
  sym_plain_value = 51,
  sym__descendant_operator = 52,
  sym_stylesheet = 53,
  sym_import_statement = 54,
  sym_media_statement = 55,
  sym_charset_statement = 56,
  sym_namespace_statement = 57,
  sym_define_color_statement = 58,
  sym_keyframes_statement = 59,
  sym_keyframe_block_list = 60,
  sym_keyframe_block = 61,
  sym_supports_statement = 62,
  sym_at_rule = 63,
  sym_rule_set = 64,
  sym_selectors = 65,
  sym_block = 66,
  sym__selector = 67,
  sym_universal_selector = 68,
  sym_class_selector = 69,
  sym_pseudo_class_selector = 70,
  sym_pseudo_element_selector = 71,
  sym_id_selector = 72,
  sym_attribute_selector = 73,
  sym_child_selector = 74,
  sym_descendant_selector = 75,
  sym_sibling_selector = 76,
  sym_adjacent_sibling_selector = 77,
  sym_pseudo_class_arguments = 78,
  sym_declaration = 79,
  sym_last_declaration = 80,
  sym__query = 81,
  sym_feature_query = 82,
  sym_parenthesized_query = 83,
  sym_binary_query = 84,
  sym_unary_query = 85,
  sym_selector_query = 86,
  sym__value = 87,
  sym_parenthesized_value = 88,
  sym_color_value = 89,
  sym_integer_value = 90,
  sym_float_value = 91,
  sym_call_expression = 92,
  sym_binary_expression = 93,
  sym_arguments = 94,
  aux_sym_stylesheet_repeat1 = 95,
  aux_sym_import_statement_repeat1 = 96,
  aux_sym_keyframe_block_list_repeat1 = 97,
  aux_sym_selectors_repeat1 = 98,
  aux_sym_block_repeat1 = 99,
  aux_sym_pseudo_class_arguments_repeat1 = 100,
  aux_sym_pseudo_class_arguments_repeat2 = 101,
  aux_sym_declaration_repeat1 = 102,
  aux_sym_arguments_repeat1 = 103,
  alias_sym_attribute_name = 104,
  alias_sym_class_name = 105,
  alias_sym_feature_name = 106,
  alias_sym_function_name = 107,
  alias_sym_id_name = 108,
  alias_sym_keyframes_name = 109,
  alias_sym_keyword_query = 110,
  alias_sym_namespace_name = 111,
  alias_sym_property_name = 112,
  alias_sym_tag_name = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATdefine_DASHcolor] = "@define-color",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [sym_string_value] = "string_value",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [sym__descendant_operator] = "_descendant_operator",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_define_color_statement] = "define_color_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
  [sym_at_rule] = "at_rule",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_pseudo_class_arguments_repeat2] = "pseudo_class_arguments_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_class_name] = "class_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATdefine_DASHcolor] = anon_sym_ATdefine_DASHcolor,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = sym_at_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_from] = sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_important] = sym_important,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [sym_string_value] = sym_string_value,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_comment] = sym_comment,
  [sym_plain_value] = sym_plain_value,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_define_color_statement] = sym_define_color_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_supports_statement] = sym_supports_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_rule_set] = sym_rule_set,
  [sym_selectors] = sym_selectors,
  [sym_block] = sym_block,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_pseudo_class_arguments_repeat2] = aux_sym_pseudo_class_arguments_repeat2,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_property_name] = alias_sym_property_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdefine_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyframes_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_define_color_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [0] = sym_plain_value,
  },
  [3] = {
    [0] = alias_sym_keyword_query,
  },
  [4] = {
    [1] = alias_sym_class_name,
  },
  [5] = {
    [1] = alias_sym_tag_name,
  },
  [6] = {
    [1] = alias_sym_id_name,
  },
  [7] = {
    [0] = alias_sym_function_name,
  },
  [8] = {
    [1] = alias_sym_keyframes_name,
  },
  [9] = {
    [1] = alias_sym_attribute_name,
  },
  [10] = {
    [2] = alias_sym_class_name,
  },
  [11] = {
    [2] = alias_sym_tag_name,
  },
  [12] = {
    [2] = alias_sym_id_name,
  },
  [13] = {
    [1] = alias_sym_namespace_name,
  },
  [14] = {
    [0] = alias_sym_property_name,
  },
  [15] = {
    [2] = alias_sym_attribute_name,
  },
  [16] = {
    [1] = alias_sym_feature_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 2,
  [6] = 3,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 34,
  [49] = 49,
  [50] = 50,
  [51] = 34,
  [52] = 45,
  [53] = 53,
  [54] = 54,
  [55] = 47,
  [56] = 31,
  [57] = 26,
  [58] = 30,
  [59] = 46,
  [60] = 50,
  [61] = 24,
  [62] = 62,
  [63] = 44,
  [64] = 64,
  [65] = 49,
  [66] = 43,
  [67] = 36,
  [68] = 42,
  [69] = 41,
  [70] = 64,
  [71] = 29,
  [72] = 40,
  [73] = 27,
  [74] = 37,
  [75] = 75,
  [76] = 39,
  [77] = 25,
  [78] = 38,
  [79] = 28,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 84,
  [86] = 84,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 83,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 106,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 103,
  [113] = 102,
  [114] = 114,
  [115] = 115,
  [116] = 110,
  [117] = 108,
  [118] = 118,
  [119] = 119,
  [120] = 119,
  [121] = 110,
  [122] = 102,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 75,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 81,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 147,
  [155] = 155,
  [156] = 148,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 94,
  [161] = 151,
  [162] = 80,
  [163] = 92,
  [164] = 88,
  [165] = 165,
  [166] = 93,
  [167] = 95,
  [168] = 87,
  [169] = 97,
  [170] = 91,
  [171] = 89,
  [172] = 75,
  [173] = 80,
  [174] = 81,
  [175] = 88,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 87,
  [180] = 180,
  [181] = 180,
  [182] = 182,
  [183] = 176,
  [184] = 184,
  [185] = 92,
  [186] = 93,
  [187] = 94,
  [188] = 95,
  [189] = 97,
  [190] = 91,
  [191] = 89,
  [192] = 178,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 197,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 203,
  [207] = 202,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 204,
  [212] = 210,
  [213] = 205,
  [214] = 210,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 217,
  [222] = 218,
  [223] = 223,
  [224] = 25,
  [225] = 225,
  [226] = 217,
  [227] = 223,
  [228] = 44,
  [229] = 49,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 232,
  [234] = 234,
  [235] = 230,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 81,
  [241] = 241,
  [242] = 242,
  [243] = 242,
  [244] = 244,
  [245] = 241,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 253,
  [256] = 256,
  [257] = 257,
  [258] = 250,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 256,
  [263] = 251,
  [264] = 264,
  [265] = 265,
  [266] = 251,
  [267] = 267,
  [268] = 268,
  [269] = 259,
  [270] = 270,
  [271] = 256,
  [272] = 257,
  [273] = 273,
  [274] = 259,
  [275] = 254,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 261,
};

static inline bool sym_plain_value_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= '*')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '@') ADVANCE(33);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(106);
      if (lookahead == '^') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '@') ADVANCE(33);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == ']') ADVANCE(106);
      if (lookahead == '^') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == '~') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '_') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == ']') ADVANCE(106);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == ']') ADVANCE(106);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(269);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == 'k') ADVANCE(221);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == 'k') ADVANCE(221);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 69:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 70:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(270);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(7);
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(72);
      END_STATE();
    case 73:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '@') ADVANCE(33);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(106);
      if (lookahead == '^') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 74:
      if (eof) ADVANCE(76);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ATdefine_DASHcolor);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(270);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '_') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(270);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(270);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(270);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(192);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(26);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '/') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(270);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(270);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(270);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == 'k') ADVANCE(229);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(255);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(211);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(253);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(252);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(243);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(214);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(244);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(248);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(249);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'y') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'y') ADVANCE(232);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(70);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(270);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 74},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 74},
  [10] = {.lex_state = 74},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3, .external_lex_state = 1},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2, .external_lex_state = 1},
  [18] = {.lex_state = 74},
  [19] = {.lex_state = 74},
  [20] = {.lex_state = 74},
  [21] = {.lex_state = 74},
  [22] = {.lex_state = 74},
  [23] = {.lex_state = 74},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 74},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 74},
  [56] = {.lex_state = 74},
  [57] = {.lex_state = 74},
  [58] = {.lex_state = 74},
  [59] = {.lex_state = 74},
  [60] = {.lex_state = 74},
  [61] = {.lex_state = 74},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 74},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 74},
  [66] = {.lex_state = 74},
  [67] = {.lex_state = 74},
  [68] = {.lex_state = 74},
  [69] = {.lex_state = 74},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 74},
  [72] = {.lex_state = 74},
  [73] = {.lex_state = 74},
  [74] = {.lex_state = 74},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 74},
  [77] = {.lex_state = 74},
  [78] = {.lex_state = 74},
  [79] = {.lex_state = 74},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 74, .external_lex_state = 1},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 74, .external_lex_state = 1},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 74, .external_lex_state = 1},
  [124] = {.lex_state = 74, .external_lex_state = 1},
  [125] = {.lex_state = 74, .external_lex_state = 1},
  [126] = {.lex_state = 74, .external_lex_state = 1},
  [127] = {.lex_state = 74, .external_lex_state = 1},
  [128] = {.lex_state = 74, .external_lex_state = 1},
  [129] = {.lex_state = 74, .external_lex_state = 1},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 74, .external_lex_state = 1},
  [132] = {.lex_state = 74, .external_lex_state = 1},
  [133] = {.lex_state = 74, .external_lex_state = 1},
  [134] = {.lex_state = 74, .external_lex_state = 1},
  [135] = {.lex_state = 74, .external_lex_state = 1},
  [136] = {.lex_state = 74, .external_lex_state = 1},
  [137] = {.lex_state = 74, .external_lex_state = 1},
  [138] = {.lex_state = 74, .external_lex_state = 1},
  [139] = {.lex_state = 74, .external_lex_state = 1},
  [140] = {.lex_state = 74, .external_lex_state = 1},
  [141] = {.lex_state = 74, .external_lex_state = 1},
  [142] = {.lex_state = 74, .external_lex_state = 1},
  [143] = {.lex_state = 74, .external_lex_state = 1},
  [144] = {.lex_state = 74, .external_lex_state = 1},
  [145] = {.lex_state = 74, .external_lex_state = 1},
  [146] = {.lex_state = 74, .external_lex_state = 1},
  [147] = {.lex_state = 74, .external_lex_state = 1},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 74, .external_lex_state = 1},
  [154] = {.lex_state = 74, .external_lex_state = 1},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 74, .external_lex_state = 1},
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 74, .external_lex_state = 1},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 74, .external_lex_state = 1},
  [166] = {.lex_state = 13},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 13},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 11},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 11},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 11},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 74},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 11},
  [209] = {.lex_state = 11},
  [210] = {.lex_state = 11},
  [211] = {.lex_state = 74},
  [212] = {.lex_state = 11},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 8},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 74},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 8},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 74},
  [233] = {.lex_state = 74},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 11},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 19},
  [249] = {.lex_state = 74},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 74},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 74},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 25},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 74},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 25},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 74},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 74},
  [268] = {.lex_state = 74},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 25},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 74},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 74},
  [276] = {.lex_state = 74},
  [277] = {.lex_state = 74},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 74},
  [280] = {.lex_state = 74},
  [281] = {.lex_state = 0},
};

enum {
  ts_external_token__descendant_operator = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATdefine_DASHcolor] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(270),
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(245),
    [sym__selector] = STATE(129),
    [sym_universal_selector] = STATE(129),
    [sym_class_selector] = STATE(129),
    [sym_pseudo_class_selector] = STATE(129),
    [sym_pseudo_element_selector] = STATE(129),
    [sym_id_selector] = STATE(129),
    [sym_attribute_selector] = STATE(129),
    [sym_child_selector] = STATE(129),
    [sym_descendant_selector] = STATE(129),
    [sym_sibling_selector] = STATE(129),
    [sym_adjacent_sibling_selector] = STATE(129),
    [sym_declaration] = STATE(10),
    [aux_sym_stylesheet_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(33),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(45), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    STATE(241), 1,
      sym_selectors,
    STATE(269), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(129), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [89] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(45), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_selectors,
    STATE(266), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(2), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(129), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [178] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(45), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_selectors,
    STATE(274), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(129), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [267] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(45), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_selectors,
    STATE(259), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(129), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [356] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(45), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_selectors,
    STATE(251), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(5), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(129), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [445] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(45), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_selectors,
    STATE(263), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(4), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(129), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [534] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_ATimport,
    ACTIONS(70), 1,
      anon_sym_ATmedia,
    ACTIONS(73), 1,
      anon_sym_ATcharset,
    ACTIONS(76), 1,
      anon_sym_ATnamespace,
    ACTIONS(79), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      anon_sym_ATsupports,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(102), 1,
      anon_sym_COLON_COLON,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(114), 1,
      sym_at_keyword,
    STATE(241), 1,
      sym_selectors,
    ACTIONS(82), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(90), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(129), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [620] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      anon_sym_ATimport,
    ACTIONS(122), 1,
      anon_sym_ATmedia,
    ACTIONS(125), 1,
      anon_sym_ATcharset,
    ACTIONS(128), 1,
      anon_sym_ATnamespace,
    ACTIONS(134), 1,
      anon_sym_ATsupports,
    ACTIONS(140), 1,
      anon_sym_STAR,
    ACTIONS(143), 1,
      anon_sym_DOT,
    ACTIONS(146), 1,
      anon_sym_COLON,
    ACTIONS(149), 1,
      anon_sym_COLON_COLON,
    ACTIONS(152), 1,
      anon_sym_POUND,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(161), 1,
      sym_at_keyword,
    STATE(245), 1,
      sym_selectors,
    ACTIONS(131), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(137), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(9), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(129), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [702] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_ATimport,
    ACTIONS(9), 1,
      anon_sym_ATmedia,
    ACTIONS(11), 1,
      anon_sym_ATcharset,
    ACTIONS(13), 1,
      anon_sym_ATnamespace,
    ACTIONS(17), 1,
      anon_sym_ATsupports,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_at_keyword,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    STATE(245), 1,
      sym_selectors,
    ACTIONS(15), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(9), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(129), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [784] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      sym_nesting_selector,
    ACTIONS(168), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_POUND,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(176), 1,
      sym_string_value,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      sym_plain_value,
    STATE(53), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(128), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [855] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_POUND,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(176), 1,
      sym_string_value,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      sym_plain_value,
    ACTIONS(186), 1,
      sym_nesting_selector,
    STATE(82), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(157), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [923] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      anon_sym_STAR,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      sym_important,
    ACTIONS(202), 1,
      sym_string_value,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_plain_value,
    STATE(32), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(198), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [980] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(210), 2,
      anon_sym_STAR,
      sym_string_value,
    ACTIONS(212), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(216), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(208), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1018] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(194), 1,
      anon_sym_STAR,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      sym_string_value,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_plain_value,
    ACTIONS(218), 1,
      sym_important,
    STATE(70), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(198), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1072] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_STAR,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      sym_string_value,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_plain_value,
    ACTIONS(220), 1,
      anon_sym_SEMI,
    ACTIONS(222), 1,
      sym_important,
    STATE(64), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(198), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 3,
      anon_sym_STAR,
      anon_sym_LPAREN2,
      sym_string_value,
    ACTIONS(228), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(230), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(224), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1158] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(232), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(141), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1200] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(143), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1242] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(238), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(165), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1284] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(240), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(145), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1326] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(242), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(136), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1368] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(244), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(153), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(246), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(250), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(254), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(258), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(262), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(266), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(270), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(274), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1626] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      sym_string_value,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_plain_value,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    ACTIONS(282), 1,
      sym_important,
    STATE(35), 1,
      aux_sym_declaration_repeat1,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(284), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1702] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(184), 1,
      sym_plain_value,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    ACTIONS(292), 1,
      sym_string_value,
    STATE(62), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(221), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1749] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      anon_sym_LPAREN2,
    ACTIONS(305), 1,
      sym_string_value,
    ACTIONS(308), 1,
      aux_sym_integer_value_token1,
    ACTIONS(311), 1,
      aux_sym_float_value_token1,
    ACTIONS(314), 1,
      sym_identifier,
    ACTIONS(317), 1,
      sym_plain_value,
    STATE(35), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(297), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(320), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(324), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(328), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(332), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(336), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(340), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(344), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(348), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(352), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(356), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(360), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(364), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2118] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(184), 1,
      sym_plain_value,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(292), 1,
      sym_string_value,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(217), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(370), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(374), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2219] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(184), 1,
      sym_plain_value,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(292), 1,
      sym_string_value,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(226), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(358), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2292] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(184), 1,
      sym_plain_value,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(292), 1,
      sym_string_value,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(231), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2338] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(184), 1,
      sym_plain_value,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(292), 1,
      sym_string_value,
    STATE(62), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(384), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(366), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(276), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(256), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(272), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(362), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(376), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(248), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2562] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_POUND,
    ACTIONS(391), 1,
      anon_sym_LPAREN2,
    ACTIONS(394), 1,
      sym_string_value,
    ACTIONS(397), 1,
      aux_sym_integer_value_token1,
    ACTIONS(400), 1,
      aux_sym_float_value_token1,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(406), 1,
      sym_plain_value,
    STATE(62), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(386), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(354), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2630] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      sym_string_value,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_plain_value,
    ACTIONS(409), 1,
      anon_sym_SEMI,
    ACTIONS(411), 1,
      sym_important,
    STATE(35), 1,
      aux_sym_declaration_repeat1,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(372), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(350), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(322), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(346), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(342), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2806] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      sym_string_value,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_plain_value,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    ACTIONS(413), 1,
      sym_important,
    STATE(35), 1,
      aux_sym_declaration_repeat1,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(268), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(338), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(260), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(326), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2956] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_arguments,
    ACTIONS(210), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(216), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [2986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(334), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(252), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(330), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(264), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_unit,
    ACTIONS(417), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(415), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_unit,
    ACTIONS(423), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(421), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3144] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(184), 1,
      sym_plain_value,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(292), 1,
      sym_string_value,
    STATE(62), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3185] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_SEMI,
    ACTIONS(433), 1,
      anon_sym_LPAREN2,
    ACTIONS(437), 1,
      anon_sym_selector,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(431), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(435), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(203), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3221] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(184), 1,
      sym_plain_value,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(292), 1,
      sym_string_value,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3261] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(184), 1,
      sym_plain_value,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(292), 1,
      sym_string_value,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3301] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(184), 1,
      sym_plain_value,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(292), 1,
      sym_string_value,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(449), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(453), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(457), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3413] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN2,
    ACTIONS(437), 1,
      anon_sym_selector,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(461), 1,
      anon_sym_SEMI,
    ACTIONS(431), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(435), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(439), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(206), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(463), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(467), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(471), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(475), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(479), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3569] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(184), 1,
      sym_plain_value,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(292), 1,
      sym_string_value,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(485), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3633] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(184), 1,
      sym_plain_value,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(292), 1,
      sym_string_value,
    STATE(96), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_STAR,
    ACTIONS(198), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(489), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(297), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_STAR,
    ACTIONS(198), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(493), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(491), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3724] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(184), 1,
      sym_plain_value,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(292), 1,
      sym_string_value,
    STATE(54), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3761] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_POUND,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(499), 1,
      sym_string_value,
    ACTIONS(501), 1,
      aux_sym_integer_value_token1,
    ACTIONS(503), 1,
      aux_sym_float_value_token1,
    ACTIONS(505), 1,
      sym_identifier,
    ACTIONS(507), 1,
      sym_plain_value,
    STATE(191), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3795] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(509), 1,
      sym_string_value,
    ACTIONS(511), 1,
      sym_plain_value,
    STATE(16), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3829] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_COLON,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_pseudo_class_arguments,
    ACTIONS(513), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3855] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_POUND,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(501), 1,
      aux_sym_integer_value_token1,
    ACTIONS(503), 1,
      aux_sym_float_value_token1,
    ACTIONS(505), 1,
      sym_identifier,
    ACTIONS(519), 1,
      sym_string_value,
    ACTIONS(521), 1,
      sym_plain_value,
    STATE(208), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3889] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_POUND,
    ACTIONS(525), 1,
      anon_sym_LPAREN2,
    ACTIONS(527), 1,
      sym_string_value,
    ACTIONS(529), 1,
      aux_sym_integer_value_token1,
    ACTIONS(531), 1,
      aux_sym_float_value_token1,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(535), 1,
      sym_plain_value,
    STATE(83), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3923] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_POUND,
    ACTIONS(525), 1,
      anon_sym_LPAREN2,
    ACTIONS(529), 1,
      aux_sym_integer_value_token1,
    ACTIONS(531), 1,
      aux_sym_float_value_token1,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(537), 1,
      sym_string_value,
    ACTIONS(539), 1,
      sym_plain_value,
    STATE(90), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3957] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_POUND,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(501), 1,
      aux_sym_integer_value_token1,
    ACTIONS(503), 1,
      aux_sym_float_value_token1,
    ACTIONS(505), 1,
      sym_identifier,
    ACTIONS(541), 1,
      sym_string_value,
    ACTIONS(543), 1,
      sym_plain_value,
    STATE(207), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3991] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(545), 1,
      sym_string_value,
    ACTIONS(547), 1,
      sym_plain_value,
    STATE(13), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4025] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_POUND,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(501), 1,
      aux_sym_integer_value_token1,
    ACTIONS(503), 1,
      aux_sym_float_value_token1,
    ACTIONS(505), 1,
      sym_identifier,
    ACTIONS(549), 1,
      sym_string_value,
    ACTIONS(551), 1,
      sym_plain_value,
    STATE(210), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4059] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_STAR,
    ACTIONS(198), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(555), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(553), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_string_value,
  [4085] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(557), 1,
      sym_string_value,
    ACTIONS(559), 1,
      sym_plain_value,
    STATE(15), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4119] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(561), 1,
      sym_string_value,
    ACTIONS(563), 1,
      sym_plain_value,
    STATE(89), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4153] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      anon_sym_COLON,
    STATE(126), 1,
      sym_pseudo_class_arguments,
    ACTIONS(565), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4179] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_POUND,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(501), 1,
      aux_sym_integer_value_token1,
    ACTIONS(503), 1,
      aux_sym_float_value_token1,
    ACTIONS(505), 1,
      sym_identifier,
    ACTIONS(569), 1,
      sym_string_value,
    ACTIONS(571), 1,
      sym_plain_value,
    STATE(209), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4213] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_POUND,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(501), 1,
      aux_sym_integer_value_token1,
    ACTIONS(503), 1,
      aux_sym_float_value_token1,
    ACTIONS(505), 1,
      sym_identifier,
    ACTIONS(573), 1,
      sym_string_value,
    ACTIONS(575), 1,
      sym_plain_value,
    STATE(212), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4247] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_POUND,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(501), 1,
      aux_sym_integer_value_token1,
    ACTIONS(503), 1,
      aux_sym_float_value_token1,
    ACTIONS(505), 1,
      sym_identifier,
    ACTIONS(577), 1,
      sym_string_value,
    ACTIONS(579), 1,
      sym_plain_value,
    STATE(202), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4281] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN2,
    ACTIONS(178), 1,
      aux_sym_integer_value_token1,
    ACTIONS(180), 1,
      aux_sym_float_value_token1,
    ACTIONS(196), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_plain_value,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4315] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN2,
    ACTIONS(437), 1,
      anon_sym_selector,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(585), 1,
      anon_sym_SEMI,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
    ACTIONS(435), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(180), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4349] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN2,
    ACTIONS(437), 1,
      anon_sym_selector,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(589), 1,
      anon_sym_SEMI,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
    ACTIONS(435), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(181), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4383] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_POUND,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(501), 1,
      aux_sym_integer_value_token1,
    ACTIONS(503), 1,
      aux_sym_float_value_token1,
    ACTIONS(505), 1,
      sym_identifier,
    ACTIONS(593), 1,
      sym_string_value,
    ACTIONS(595), 1,
      sym_plain_value,
    STATE(214), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4417] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_POUND,
    ACTIONS(525), 1,
      anon_sym_LPAREN2,
    ACTIONS(529), 1,
      aux_sym_integer_value_token1,
    ACTIONS(531), 1,
      aux_sym_float_value_token1,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(597), 1,
      sym_string_value,
    ACTIONS(599), 1,
      sym_plain_value,
    STATE(171), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COLON,
    ACTIONS(601), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_COLON,
    ACTIONS(605), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COLON,
    ACTIONS(609), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_COLON,
    ACTIONS(613), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_COLON,
    ACTIONS(617), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4551] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    ACTIONS(621), 1,
      anon_sym_DOT,
    ACTIONS(623), 1,
      anon_sym_COLON,
    ACTIONS(625), 1,
      anon_sym_COLON_COLON,
    ACTIONS(627), 1,
      anon_sym_POUND,
    ACTIONS(629), 1,
      anon_sym_LBRACK,
    ACTIONS(631), 1,
      anon_sym_GT,
    ACTIONS(633), 1,
      anon_sym_TILDE,
    ACTIONS(635), 1,
      anon_sym_PLUS,
    ACTIONS(637), 1,
      sym__descendant_operator,
    STATE(231), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [4591] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_DOT,
    ACTIONS(623), 1,
      anon_sym_COLON,
    ACTIONS(625), 1,
      anon_sym_COLON_COLON,
    ACTIONS(627), 1,
      anon_sym_POUND,
    ACTIONS(629), 1,
      anon_sym_LBRACK,
    ACTIONS(631), 1,
      anon_sym_GT,
    ACTIONS(633), 1,
      anon_sym_TILDE,
    ACTIONS(635), 1,
      anon_sym_PLUS,
    ACTIONS(637), 1,
      sym__descendant_operator,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    STATE(236), 1,
      aux_sym_selectors_repeat1,
  [4631] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(169), 1,
      sym_arguments,
    ACTIONS(210), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(216), 7,
      anon_sym_LPAREN2,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [4655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_COLON,
    ACTIONS(645), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_COLON,
    ACTIONS(649), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_COLON,
    ACTIONS(653), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COLON,
    ACTIONS(657), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_COLON,
    ACTIONS(208), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_DOT,
    ACTIONS(663), 1,
      anon_sym_COLON,
    ACTIONS(661), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_COLON,
    ACTIONS(665), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_COLON,
    ACTIONS(669), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_COLON,
    ACTIONS(673), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COLON,
    ACTIONS(677), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_DOT,
    ACTIONS(683), 1,
      anon_sym_COLON,
    ACTIONS(681), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_COLON,
    ACTIONS(685), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_DOT,
    ACTIONS(691), 1,
      anon_sym_COLON,
    ACTIONS(689), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_COLON,
    ACTIONS(693), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_DOT,
    ACTIONS(699), 1,
      anon_sym_COLON,
    ACTIONS(697), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_COLON,
    ACTIONS(701), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_COLON,
    ACTIONS(208), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5002] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN2,
    ACTIONS(437), 1,
      anon_sym_selector,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(435), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(197), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5027] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN2,
    ACTIONS(437), 1,
      anon_sym_selector,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(435), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(201), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym_unit,
    ACTIONS(421), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(423), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5073] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN2,
    ACTIONS(437), 1,
      anon_sym_selector,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(435), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(218), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5098] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN2,
    ACTIONS(437), 1,
      anon_sym_selector,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(435), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(195), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5123] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_DOT,
    ACTIONS(623), 1,
      anon_sym_COLON,
    ACTIONS(625), 1,
      anon_sym_COLON_COLON,
    ACTIONS(627), 1,
      anon_sym_POUND,
    ACTIONS(629), 1,
      anon_sym_LBRACK,
    ACTIONS(631), 1,
      anon_sym_GT,
    ACTIONS(633), 1,
      anon_sym_TILDE,
    ACTIONS(635), 1,
      anon_sym_PLUS,
    ACTIONS(637), 1,
      sym__descendant_operator,
    ACTIONS(710), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [5158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COLON,
    ACTIONS(208), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5177] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN2,
    ACTIONS(437), 1,
      anon_sym_selector,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(435), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(238), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5202] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN2,
    ACTIONS(437), 1,
      anon_sym_selector,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(435), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(200), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5227] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_DOT,
    ACTIONS(623), 1,
      anon_sym_COLON,
    ACTIONS(625), 1,
      anon_sym_COLON_COLON,
    ACTIONS(627), 1,
      anon_sym_POUND,
    ACTIONS(629), 1,
      anon_sym_LBRACK,
    ACTIONS(631), 1,
      anon_sym_GT,
    ACTIONS(633), 1,
      anon_sym_TILDE,
    ACTIONS(635), 1,
      anon_sym_PLUS,
    ACTIONS(637), 1,
      sym__descendant_operator,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5262] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN2,
    ACTIONS(437), 1,
      anon_sym_selector,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(435), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(199), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_COLON,
    ACTIONS(208), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(477), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5325] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN2,
    ACTIONS(437), 1,
      anon_sym_selector,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(435), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(222), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_unit,
    ACTIONS(415), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(417), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(469), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(455), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5407] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_DOT,
    ACTIONS(623), 1,
      anon_sym_COLON,
    ACTIONS(625), 1,
      anon_sym_COLON_COLON,
    ACTIONS(627), 1,
      anon_sym_POUND,
    ACTIONS(629), 1,
      anon_sym_LBRACK,
    ACTIONS(631), 1,
      anon_sym_GT,
    ACTIONS(633), 1,
      anon_sym_TILDE,
    ACTIONS(635), 1,
      anon_sym_PLUS,
    ACTIONS(637), 1,
      sym__descendant_operator,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
  [5441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(473), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(481), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(451), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(487), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(465), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(459), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5549] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    ACTIONS(723), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_arguments,
    ACTIONS(210), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_SLASH,
    ACTIONS(725), 1,
      sym_unit,
    ACTIONS(415), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_SLASH,
    ACTIONS(727), 1,
      sym_unit,
    ACTIONS(421), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_SLASH,
    ACTIONS(453), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5621] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    ACTIONS(733), 1,
      aux_sym_integer_value_token1,
    STATE(246), 1,
      sym_integer_value,
    ACTIONS(731), 2,
      sym_from,
      sym_to,
    STATE(178), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_RBRACK,
    ACTIONS(735), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [5657] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      aux_sym_integer_value_token1,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_integer_value,
    ACTIONS(731), 2,
      sym_from,
      sym_to,
    STATE(182), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SLASH,
    ACTIONS(449), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5693] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(743), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      sym_block,
    STATE(205), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(745), 2,
      anon_sym_and,
      anon_sym_or,
  [5716] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(747), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_block,
    STATE(213), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(745), 2,
      anon_sym_and,
      anon_sym_or,
  [5739] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    ACTIONS(754), 1,
      aux_sym_integer_value_token1,
    STATE(246), 1,
      sym_integer_value,
    ACTIONS(751), 2,
      sym_from,
      sym_to,
    STATE(182), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5760] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      aux_sym_integer_value_token1,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_integer_value,
    ACTIONS(731), 2,
      sym_from,
      sym_to,
    STATE(192), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_RBRACK,
    ACTIONS(759), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [5796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_SLASH,
    ACTIONS(467), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_SLASH,
    ACTIONS(471), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(475), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_SLASH,
    ACTIONS(479), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_SLASH,
    ACTIONS(485), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_SLASH,
    ACTIONS(463), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_SLASH,
    ACTIONS(457), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5901] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      aux_sym_integer_value_token1,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_integer_value,
    ACTIONS(731), 2,
      sym_from,
      sym_to,
    STATE(182), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [5934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [5946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [5958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [5970] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      sym_block,
    STATE(227), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(745), 2,
      anon_sym_and,
      anon_sym_or,
  [5990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6014] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      sym_block,
    STATE(223), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(745), 2,
      anon_sym_and,
      anon_sym_or,
  [6034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(777), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_SEMI,
    ACTIONS(783), 1,
      anon_sym_SLASH,
    ACTIONS(781), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6062] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      anon_sym_SEMI,
    STATE(235), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(745), 2,
      anon_sym_and,
      anon_sym_or,
  [6079] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      sym_string_value,
    ACTIONS(789), 1,
      sym_identifier,
    STATE(169), 1,
      sym_arguments,
    STATE(250), 1,
      sym_call_expression,
  [6098] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(791), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_block,
    STATE(216), 1,
      aux_sym_import_statement_repeat1,
  [6117] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      anon_sym_SEMI,
    STATE(230), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(745), 2,
      anon_sym_and,
      anon_sym_or,
  [6134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_SLASH,
    ACTIONS(795), 1,
      anon_sym_SEMI,
    ACTIONS(781), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_SLASH,
    ACTIONS(797), 1,
      anon_sym_RBRACK,
    ACTIONS(781), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_SLASH,
    ACTIONS(799), 1,
      anon_sym_RBRACK,
    ACTIONS(781), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_SLASH,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
    ACTIONS(781), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6194] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      sym_identifier,
    ACTIONS(803), 1,
      sym_string_value,
    STATE(169), 1,
      sym_arguments,
    STATE(258), 1,
      sym_call_expression,
  [6213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_SLASH,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    ACTIONS(781), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6228] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(807), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_block,
    STATE(216), 1,
      aux_sym_import_statement_repeat1,
  [6247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_SLASH,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    ACTIONS(781), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(811), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(777), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_block,
    ACTIONS(745), 2,
      anon_sym_and,
      anon_sym_or,
  [6318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_COLON,
    ACTIONS(765), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_block,
    ACTIONS(745), 2,
      anon_sym_and,
      anon_sym_or,
  [6368] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      sym_block,
    STATE(216), 1,
      aux_sym_import_statement_repeat1,
  [6384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_POUND,
    ACTIONS(789), 1,
      sym_identifier,
    STATE(264), 2,
      sym_color_value,
      sym_call_expression,
  [6408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      sym_block,
    STATE(216), 1,
      aux_sym_import_statement_repeat1,
  [6438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      aux_sym_import_statement_repeat1,
  [6471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      sym_string_value,
    ACTIONS(833), 1,
      sym_identifier,
    STATE(255), 1,
      sym_call_expression,
  [6497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      sym_string_value,
    ACTIONS(837), 1,
      sym_identifier,
    STATE(253), 1,
      sym_call_expression,
  [6510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACE,
    ACTIONS(839), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_selectors_repeat1,
  [6523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(842), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      aux_sym_import_statement_repeat1,
  [6536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    STATE(234), 1,
      aux_sym_selectors_repeat1,
  [6549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RPAREN,
    ACTIONS(745), 2,
      anon_sym_and,
      anon_sym_or,
  [6573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(169), 1,
      sym_arguments,
  [6583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_LBRACE,
    ACTIONS(851), 1,
      sym_unit,
  [6593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_block,
  [6603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_keyframe_block_list,
  [6613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_keyframe_block_list,
  [6623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
  [6633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
  [6643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
    STATE(220), 1,
      sym_block,
  [6653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_SEMI,
    ACTIONS(861), 1,
      anon_sym_RBRACE,
  [6663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      aux_sym_color_value_token1,
    ACTIONS(865), 1,
      sym_identifier,
  [6673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      sym_identifier,
  [6680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SEMI,
  [6687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
  [6694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym_identifier,
  [6701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_SEMI,
  [6708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym_identifier,
  [6715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_SEMI,
  [6722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      aux_sym_color_value_token1,
  [6729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_SEMI,
  [6736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_SEMI,
  [6743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_RBRACE,
  [6750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      sym_identifier,
  [6757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_SEMI,
  [6764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      aux_sym_color_value_token1,
  [6771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
  [6778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_SEMI,
  [6785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      sym_identifier,
  [6792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
  [6799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      sym_identifier,
  [6806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym_identifier,
  [6813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
  [6820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      ts_builtin_sym_end,
  [6827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      aux_sym_color_value_token1,
  [6834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_SEMI,
  [6841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym_identifier,
  [6848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
  [6855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_identifier,
  [6862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym_identifier,
  [6869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym_identifier,
  [6876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_LPAREN2,
  [6883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym_identifier,
  [6890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym_identifier,
  [6897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 178,
  [SMALL_STATE(5)] = 267,
  [SMALL_STATE(6)] = 356,
  [SMALL_STATE(7)] = 445,
  [SMALL_STATE(8)] = 534,
  [SMALL_STATE(9)] = 620,
  [SMALL_STATE(10)] = 702,
  [SMALL_STATE(11)] = 784,
  [SMALL_STATE(12)] = 855,
  [SMALL_STATE(13)] = 923,
  [SMALL_STATE(14)] = 980,
  [SMALL_STATE(15)] = 1018,
  [SMALL_STATE(16)] = 1072,
  [SMALL_STATE(17)] = 1126,
  [SMALL_STATE(18)] = 1158,
  [SMALL_STATE(19)] = 1200,
  [SMALL_STATE(20)] = 1242,
  [SMALL_STATE(21)] = 1284,
  [SMALL_STATE(22)] = 1326,
  [SMALL_STATE(23)] = 1368,
  [SMALL_STATE(24)] = 1410,
  [SMALL_STATE(25)] = 1437,
  [SMALL_STATE(26)] = 1464,
  [SMALL_STATE(27)] = 1491,
  [SMALL_STATE(28)] = 1518,
  [SMALL_STATE(29)] = 1545,
  [SMALL_STATE(30)] = 1572,
  [SMALL_STATE(31)] = 1599,
  [SMALL_STATE(32)] = 1626,
  [SMALL_STATE(33)] = 1675,
  [SMALL_STATE(34)] = 1702,
  [SMALL_STATE(35)] = 1749,
  [SMALL_STATE(36)] = 1794,
  [SMALL_STATE(37)] = 1821,
  [SMALL_STATE(38)] = 1848,
  [SMALL_STATE(39)] = 1875,
  [SMALL_STATE(40)] = 1902,
  [SMALL_STATE(41)] = 1929,
  [SMALL_STATE(42)] = 1956,
  [SMALL_STATE(43)] = 1983,
  [SMALL_STATE(44)] = 2010,
  [SMALL_STATE(45)] = 2037,
  [SMALL_STATE(46)] = 2064,
  [SMALL_STATE(47)] = 2091,
  [SMALL_STATE(48)] = 2118,
  [SMALL_STATE(49)] = 2165,
  [SMALL_STATE(50)] = 2192,
  [SMALL_STATE(51)] = 2219,
  [SMALL_STATE(52)] = 2266,
  [SMALL_STATE(53)] = 2292,
  [SMALL_STATE(54)] = 2338,
  [SMALL_STATE(55)] = 2380,
  [SMALL_STATE(56)] = 2406,
  [SMALL_STATE(57)] = 2432,
  [SMALL_STATE(58)] = 2458,
  [SMALL_STATE(59)] = 2484,
  [SMALL_STATE(60)] = 2510,
  [SMALL_STATE(61)] = 2536,
  [SMALL_STATE(62)] = 2562,
  [SMALL_STATE(63)] = 2604,
  [SMALL_STATE(64)] = 2630,
  [SMALL_STATE(65)] = 2676,
  [SMALL_STATE(66)] = 2702,
  [SMALL_STATE(67)] = 2728,
  [SMALL_STATE(68)] = 2754,
  [SMALL_STATE(69)] = 2780,
  [SMALL_STATE(70)] = 2806,
  [SMALL_STATE(71)] = 2852,
  [SMALL_STATE(72)] = 2878,
  [SMALL_STATE(73)] = 2904,
  [SMALL_STATE(74)] = 2930,
  [SMALL_STATE(75)] = 2956,
  [SMALL_STATE(76)] = 2986,
  [SMALL_STATE(77)] = 3012,
  [SMALL_STATE(78)] = 3038,
  [SMALL_STATE(79)] = 3064,
  [SMALL_STATE(80)] = 3090,
  [SMALL_STATE(81)] = 3117,
  [SMALL_STATE(82)] = 3144,
  [SMALL_STATE(83)] = 3185,
  [SMALL_STATE(84)] = 3221,
  [SMALL_STATE(85)] = 3261,
  [SMALL_STATE(86)] = 3301,
  [SMALL_STATE(87)] = 3341,
  [SMALL_STATE(88)] = 3365,
  [SMALL_STATE(89)] = 3389,
  [SMALL_STATE(90)] = 3413,
  [SMALL_STATE(91)] = 3449,
  [SMALL_STATE(92)] = 3473,
  [SMALL_STATE(93)] = 3497,
  [SMALL_STATE(94)] = 3521,
  [SMALL_STATE(95)] = 3545,
  [SMALL_STATE(96)] = 3569,
  [SMALL_STATE(97)] = 3609,
  [SMALL_STATE(98)] = 3633,
  [SMALL_STATE(99)] = 3670,
  [SMALL_STATE(100)] = 3697,
  [SMALL_STATE(101)] = 3724,
  [SMALL_STATE(102)] = 3761,
  [SMALL_STATE(103)] = 3795,
  [SMALL_STATE(104)] = 3829,
  [SMALL_STATE(105)] = 3855,
  [SMALL_STATE(106)] = 3889,
  [SMALL_STATE(107)] = 3923,
  [SMALL_STATE(108)] = 3957,
  [SMALL_STATE(109)] = 3991,
  [SMALL_STATE(110)] = 4025,
  [SMALL_STATE(111)] = 4059,
  [SMALL_STATE(112)] = 4085,
  [SMALL_STATE(113)] = 4119,
  [SMALL_STATE(114)] = 4153,
  [SMALL_STATE(115)] = 4179,
  [SMALL_STATE(116)] = 4213,
  [SMALL_STATE(117)] = 4247,
  [SMALL_STATE(118)] = 4281,
  [SMALL_STATE(119)] = 4315,
  [SMALL_STATE(120)] = 4349,
  [SMALL_STATE(121)] = 4383,
  [SMALL_STATE(122)] = 4417,
  [SMALL_STATE(123)] = 4451,
  [SMALL_STATE(124)] = 4471,
  [SMALL_STATE(125)] = 4491,
  [SMALL_STATE(126)] = 4511,
  [SMALL_STATE(127)] = 4531,
  [SMALL_STATE(128)] = 4551,
  [SMALL_STATE(129)] = 4591,
  [SMALL_STATE(130)] = 4631,
  [SMALL_STATE(131)] = 4655,
  [SMALL_STATE(132)] = 4675,
  [SMALL_STATE(133)] = 4695,
  [SMALL_STATE(134)] = 4715,
  [SMALL_STATE(135)] = 4735,
  [SMALL_STATE(136)] = 4755,
  [SMALL_STATE(137)] = 4777,
  [SMALL_STATE(138)] = 4797,
  [SMALL_STATE(139)] = 4817,
  [SMALL_STATE(140)] = 4837,
  [SMALL_STATE(141)] = 4857,
  [SMALL_STATE(142)] = 4879,
  [SMALL_STATE(143)] = 4899,
  [SMALL_STATE(144)] = 4921,
  [SMALL_STATE(145)] = 4941,
  [SMALL_STATE(146)] = 4963,
  [SMALL_STATE(147)] = 4983,
  [SMALL_STATE(148)] = 5002,
  [SMALL_STATE(149)] = 5027,
  [SMALL_STATE(150)] = 5052,
  [SMALL_STATE(151)] = 5073,
  [SMALL_STATE(152)] = 5098,
  [SMALL_STATE(153)] = 5123,
  [SMALL_STATE(154)] = 5158,
  [SMALL_STATE(155)] = 5177,
  [SMALL_STATE(156)] = 5202,
  [SMALL_STATE(157)] = 5227,
  [SMALL_STATE(158)] = 5262,
  [SMALL_STATE(159)] = 5287,
  [SMALL_STATE(160)] = 5306,
  [SMALL_STATE(161)] = 5325,
  [SMALL_STATE(162)] = 5350,
  [SMALL_STATE(163)] = 5371,
  [SMALL_STATE(164)] = 5389,
  [SMALL_STATE(165)] = 5407,
  [SMALL_STATE(166)] = 5441,
  [SMALL_STATE(167)] = 5459,
  [SMALL_STATE(168)] = 5477,
  [SMALL_STATE(169)] = 5495,
  [SMALL_STATE(170)] = 5513,
  [SMALL_STATE(171)] = 5531,
  [SMALL_STATE(172)] = 5549,
  [SMALL_STATE(173)] = 5570,
  [SMALL_STATE(174)] = 5588,
  [SMALL_STATE(175)] = 5606,
  [SMALL_STATE(176)] = 5621,
  [SMALL_STATE(177)] = 5642,
  [SMALL_STATE(178)] = 5657,
  [SMALL_STATE(179)] = 5678,
  [SMALL_STATE(180)] = 5693,
  [SMALL_STATE(181)] = 5716,
  [SMALL_STATE(182)] = 5739,
  [SMALL_STATE(183)] = 5760,
  [SMALL_STATE(184)] = 5781,
  [SMALL_STATE(185)] = 5796,
  [SMALL_STATE(186)] = 5811,
  [SMALL_STATE(187)] = 5826,
  [SMALL_STATE(188)] = 5841,
  [SMALL_STATE(189)] = 5856,
  [SMALL_STATE(190)] = 5871,
  [SMALL_STATE(191)] = 5886,
  [SMALL_STATE(192)] = 5901,
  [SMALL_STATE(193)] = 5922,
  [SMALL_STATE(194)] = 5934,
  [SMALL_STATE(195)] = 5946,
  [SMALL_STATE(196)] = 5958,
  [SMALL_STATE(197)] = 5970,
  [SMALL_STATE(198)] = 5990,
  [SMALL_STATE(199)] = 6002,
  [SMALL_STATE(200)] = 6014,
  [SMALL_STATE(201)] = 6034,
  [SMALL_STATE(202)] = 6047,
  [SMALL_STATE(203)] = 6062,
  [SMALL_STATE(204)] = 6079,
  [SMALL_STATE(205)] = 6098,
  [SMALL_STATE(206)] = 6117,
  [SMALL_STATE(207)] = 6134,
  [SMALL_STATE(208)] = 6149,
  [SMALL_STATE(209)] = 6164,
  [SMALL_STATE(210)] = 6179,
  [SMALL_STATE(211)] = 6194,
  [SMALL_STATE(212)] = 6213,
  [SMALL_STATE(213)] = 6228,
  [SMALL_STATE(214)] = 6247,
  [SMALL_STATE(215)] = 6262,
  [SMALL_STATE(216)] = 6276,
  [SMALL_STATE(217)] = 6290,
  [SMALL_STATE(218)] = 6304,
  [SMALL_STATE(219)] = 6318,
  [SMALL_STATE(220)] = 6330,
  [SMALL_STATE(221)] = 6340,
  [SMALL_STATE(222)] = 6354,
  [SMALL_STATE(223)] = 6368,
  [SMALL_STATE(224)] = 6384,
  [SMALL_STATE(225)] = 6394,
  [SMALL_STATE(226)] = 6408,
  [SMALL_STATE(227)] = 6422,
  [SMALL_STATE(228)] = 6438,
  [SMALL_STATE(229)] = 6448,
  [SMALL_STATE(230)] = 6458,
  [SMALL_STATE(231)] = 6471,
  [SMALL_STATE(232)] = 6484,
  [SMALL_STATE(233)] = 6497,
  [SMALL_STATE(234)] = 6510,
  [SMALL_STATE(235)] = 6523,
  [SMALL_STATE(236)] = 6536,
  [SMALL_STATE(237)] = 6549,
  [SMALL_STATE(238)] = 6562,
  [SMALL_STATE(239)] = 6573,
  [SMALL_STATE(240)] = 6583,
  [SMALL_STATE(241)] = 6593,
  [SMALL_STATE(242)] = 6603,
  [SMALL_STATE(243)] = 6613,
  [SMALL_STATE(244)] = 6623,
  [SMALL_STATE(245)] = 6633,
  [SMALL_STATE(246)] = 6643,
  [SMALL_STATE(247)] = 6653,
  [SMALL_STATE(248)] = 6663,
  [SMALL_STATE(249)] = 6673,
  [SMALL_STATE(250)] = 6680,
  [SMALL_STATE(251)] = 6687,
  [SMALL_STATE(252)] = 6694,
  [SMALL_STATE(253)] = 6701,
  [SMALL_STATE(254)] = 6708,
  [SMALL_STATE(255)] = 6715,
  [SMALL_STATE(256)] = 6722,
  [SMALL_STATE(257)] = 6729,
  [SMALL_STATE(258)] = 6736,
  [SMALL_STATE(259)] = 6743,
  [SMALL_STATE(260)] = 6750,
  [SMALL_STATE(261)] = 6757,
  [SMALL_STATE(262)] = 6764,
  [SMALL_STATE(263)] = 6771,
  [SMALL_STATE(264)] = 6778,
  [SMALL_STATE(265)] = 6785,
  [SMALL_STATE(266)] = 6792,
  [SMALL_STATE(267)] = 6799,
  [SMALL_STATE(268)] = 6806,
  [SMALL_STATE(269)] = 6813,
  [SMALL_STATE(270)] = 6820,
  [SMALL_STATE(271)] = 6827,
  [SMALL_STATE(272)] = 6834,
  [SMALL_STATE(273)] = 6841,
  [SMALL_STATE(274)] = 6848,
  [SMALL_STATE(275)] = 6855,
  [SMALL_STATE(276)] = 6862,
  [SMALL_STATE(277)] = 6869,
  [SMALL_STATE(278)] = 6876,
  [SMALL_STATE(279)] = 6883,
  [SMALL_STATE(280)] = 6890,
  [SMALL_STATE(281)] = 6897,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(148),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(108),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(232),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(260),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(275),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(151),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(129),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(124),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(252),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(265),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(267),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(249),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(268),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(154),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(120),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(106),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(156),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(117),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(233),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(254),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(161),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(129),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(124),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(252),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(265),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(267),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(249),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(268),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(147),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(119),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 14),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 14),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_color_statement, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_color_statement, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(118),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(262),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(116),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(100),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(81),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(80),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(75),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(100),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(262),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(116),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(111),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(81),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(80),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(75),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(111),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [705] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(103),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(112),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(246),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(240),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 16),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(101),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(149),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(23),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(12),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 14),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [899] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_css_external_scanner_create(void);
void tree_sitter_css_external_scanner_destroy(void *);
bool tree_sitter_css_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_css_external_scanner_serialize(void *, char *);
void tree_sitter_css_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_css(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_css_external_scanner_create,
      tree_sitter_css_external_scanner_destroy,
      tree_sitter_css_external_scanner_scan,
      tree_sitter_css_external_scanner_serialize,
      tree_sitter_css_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
