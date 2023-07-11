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
Is integrated with Workbench, so it should work OOTB.

## License
- src/: GNU General Public License v3.0
- parser/{src,include}: MIT License (MIT) (Vendored code from https://github.com/tree-sitter/tree-sitter):
```
The MIT License (MIT)

Copyright (c) 2018-2023 Max Brunsfeld

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```
## Other language servers by this author:
- [Swift-MesonLSP](https://github.com/JCWasmx86/Swift-MesonLSP): A meson language server written in Swift.

