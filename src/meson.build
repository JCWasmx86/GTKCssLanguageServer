gtkcsslanguageserver_sources = [
    'ast/ast.vala',
    'ast/astvisitor.vala',
    'ast/dataextractor.vala',
    'gtkcsslangserver.vala',
    'load.c',
    'main.vala',
    'parsecontext.vala',
    'protocol.vala',
    'util.vala'
]

gtkcsslanguageserver_deps = [
    dependency('gio-2.0'),
    dependency('gio-unix-2.0'),
    dependency('glib-2.0'),
    dependency('gobject-2.0'),
    dependency('gtk4'),
    dependency('jsonrpc-glib-1.0'),
    meson.get_compiler('vala').find_library('posix'),
    meson.get_compiler('vala').find_library('ts', dirs: vapi_dir),
    ts_dep,
]

ld = find_program('ld')
data = custom_target('objectify-data',
    output : 'data.o',
    input : files('docs.json'),
    command : [ ld, '--relocatable', '--format', 'binary', '--output', '@OUTPUT@', '@INPUT@' ],
)

executable(
    'gtkcsslanguageserver',
    gtkcsslanguageserver_sources + data,
    vala_args: '--target-glib=2.58',
    dependencies: gtkcsslanguageserver_deps,
    install: true,
    link_with: ts_lib,
)

