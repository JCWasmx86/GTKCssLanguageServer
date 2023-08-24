gtkcsslanguageserver_sources = [
    'ast/ast.vala',
    'ast/astvisitor.vala',
    'ast/dataextractor.vala',
    'gtkcsslangserver.vala',
    'load.c',
    'main.vala',
    'parsecontext.vala',
    'protocol.vala',
    'util.vala',
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

jsons = [
    'colors.json',
    'docs.json',
    'functions.json',
    'properties.json',
    'selectors.json',
]
objs = []
foreach j : jsons
    data_local = configure_file(
        input: j,
        output: j,
        copy: true,
    )
    objs += custom_target(
        'objectify-' + j,
        output: j + '.o',
        input: data_local,
        command: [ld, '--relocatable', '--format', 'binary', '--output', '@OUTPUT@', '@INPUT@'],
    )
endforeach

r = run_command(['git', 'log', 'HEAD^..HEAD', '--format=%H'])
commit = r.stdout().strip().split('\n')[0]
config = {
    'VCS_TAG': commit,
}

ids_c = configure_file(
    input: 'ids.c.in',
    output: 'ids.c',
    configuration: config,
)

executable(
    'gtkcsslanguageserver',
    gtkcsslanguageserver_sources + objs + [ids_c],
    vala_args: '--target-glib=2.58',
    dependencies: gtkcsslanguageserver_deps,
    install: true,
    link_with: ts_lib,
)




