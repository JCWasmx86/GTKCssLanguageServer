/* load.c
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

#include <assert.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

extern char _binary_src_docs_json_start;
extern char _binary_src_docs_json_end;

extern char _binary_src_colors_json_start;
extern char _binary_src_colors_json_end;

extern char _binary_src_functions_json_start;
extern char _binary_src_functions_json_end;

extern char _binary_src_properties_json_start;
extern char _binary_src_properties_json_end;

extern char _binary_src_selectors_json_start;
extern char _binary_src_selectors_json_end;

const char *
load_docs (void)
{
  size_t len = (size_t)(&_binary_src_docs_json_end - &_binary_src_docs_json_start);
  void *mem = calloc (1, len + 1);
  assert (mem);
  memcpy (mem, &_binary_src_docs_json_start, len);
  return mem;
}

const char *
load_colors (void)
{
  size_t len = (size_t)(&_binary_src_colors_json_end - &_binary_src_colors_json_start);
  void *mem = calloc (1, len + 1);
  assert (mem);
  memcpy (mem, &_binary_src_colors_json_start, len);
  return mem;
}

const char *
load_functions (void)
{
  size_t len = (size_t)(&_binary_src_functions_json_end - &_binary_src_functions_json_start);
  void *mem = calloc (1, len + 1);
  assert (mem);
  memcpy (mem, &_binary_src_functions_json_start, len);
  return mem;
}

const char *
load_properties (void)
{
  size_t len = (size_t)(&_binary_src_properties_json_end - &_binary_src_properties_json_start);
  void *mem = calloc (1, len + 1);
  assert (mem);
  memcpy (mem, &_binary_src_properties_json_start, len);
  return mem;
}

const char *
load_selectors (void)
{
  size_t len = (size_t)(&_binary_src_selectors_json_end - &_binary_src_selectors_json_start);
  void *mem = calloc (1, len + 1);
  assert (mem);
  memcpy (mem, &_binary_src_selectors_json_start, len);
  return mem;
}

extern void *ts_parser_new ();
extern void *tree_sitter_css ();
extern unsigned int ts_parser_set_language (void *, void *);

void*
get_parser (void)
{
  void *parser = ts_parser_new();
  ts_parser_set_language(parser, tree_sitter_css());
  return parser;
}
