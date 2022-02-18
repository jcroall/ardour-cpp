/*
 * Copyright (C) 2007-2015 Paul Davis <paul@linuxaudiosystems.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __pbd_replace_all_h__
#define __pbd_replace_all_h__

#include <string>

#include "pbd/libpbd_visibility.h"

LIBPBD_API int replace_all (std::string& str, const std::string& target, const std::string& replacement);
LIBPBD_API std::string poor_mans_glob (std::string path);

#endif // __pbd_replace_all_h__