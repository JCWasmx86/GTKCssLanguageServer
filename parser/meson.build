incdirs = [
    include_directories('include'),
    include_directories('src'),
    include_directories('src/unicode'),
]
ts_sources = [
    'parser.c',
    'src/alloc.c',
    'src/get_changed_ranges.c',
    'src/language.c',
    'src/lexer.c',
    'src/node.c',
    'src/parser.c',
    'src/query.c',
    'src/scanner.c',
    'src/stack.c',
    'src/subtree.c',
    'src/tree.c',
    'src/tree_cursor.c',
    'src/treesitter_parser.c',
]
ts_lib = static_library('ts', ts_sources, include_directories: incdirs)

ts_dep = declare_dependency(
    link_with: ts_lib,
    include_directories: incdirs,
)

