gtkcsslanguageserver_sources = [
    'main.vala',
    'gtkcsslangserver.vala',
    'protocol.vala',
    'parsecontext.vala',
    'util.vala'
]

gtkcsslanguageserver_deps = [
    dependency('glib-2.0'),
    dependency('gobject-2.0'),
    dependency('jsonrpc-glib-1.0'),
    dependency('gee-0.8'),
    dependency('gio-unix-2.0'),
    dependency('gio-2.0'),
    dependency('gtk4'),
    meson.get_compiler('vala').find_library('posix'),
]

executable(
    'gtkcsslanguageserver',
    gtkcsslanguageserver_sources,
    vala_args: '--target-glib=2.58',
    dependencies: gtkcsslanguageserver_deps,
    install: true,
)

