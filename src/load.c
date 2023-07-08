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

extern char _binary____src_docs_json_start;
extern char _binary____src_docs_json_end;

extern char _binary____src_colors_json_start;
extern char _binary____src_colors_json_end;

extern char _binary____src_functions_json_start;
extern char _binary____src_functions_json_end;

extern char _binary____src_properties_json_start;
extern char _binary____src_properties_json_end;

const char *
load_docs (void)
{
  size_t len = (size_t)(&_binary____src_docs_json_end - &_binary____src_docs_json_start);
  void *mem = calloc (1, len + 1);
  assert (mem);
  memcpy (mem, &_binary____src_docs_json_start, len);
  return mem;
}

const char *
load_colors (void)
{
  size_t len = (size_t)(&_binary____src_colors_json_end - &_binary____src_colors_json_start);
  void *mem = calloc (1, len + 1);
  assert (mem);
  memcpy (mem, &_binary____src_colors_json_start, len);
  return mem;
}

const char *
load_functions (void)
{
  size_t len = (size_t)(&_binary____src_functions_json_end - &_binary____src_functions_json_start);
  void *mem = calloc (1, len + 1);
  assert (mem);
  memcpy (mem, &_binary____src_functions_json_start, len);
  return mem;
}

const char *
load_properties (void)
{
  size_t len = (size_t)(&_binary____src_properties_json_end - &_binary____src_properties_json_start);
  void *mem = calloc (1, len + 1);
  assert (mem);
  memcpy (mem, &_binary____src_properties_json_start, len);
  return mem;
}

