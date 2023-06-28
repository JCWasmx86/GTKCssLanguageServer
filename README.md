# gtkcsslanguageserver

A language server for the GTK CSS flavor. Written for [Workbench](https://github.com/sonnyp/workbench), probably supported
at some point in GNOME Builder.

## Usage
### GNOME Builder
```
git clone https://github.com/JCWasmx86/GNOME-Builder-Plugins
cd GNOME-Builder-Plugins
meson _build -Dc_args="-O2" \
             -Dplugin_clangd=disabled -Dplugin_gitgui=disabled \
             -Dplugin_icon_installer=disabled -Dplugin_scriptdir=disabled \
             -Dplugin_shfmt=disabled -Dplugin_swift_templates=disabled \
             -Dplugin_texlab=disabled -Dplugin_callhierarchy=disabled \
             -Dplugin_meson=disabled
ninja -C _build install # Without root
```
For a better experience, please disable the "HTML Autocompletion" plugin.
### Workbench
TBD

## License
GNU General Public License v3.0

