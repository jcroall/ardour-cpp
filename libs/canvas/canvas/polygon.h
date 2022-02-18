/*
 * Copyright (C) 2012 Carl Hetherington <carl@carlh.net>
 * Copyright (C) 2013-2015 Paul Davis <paul@linuxaudiosystems.com>
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

#ifndef __CANVAS_POLYGON_H__
#define __CANVAS_POLYGON_H__

#include "canvas/fill.h"
#include "canvas/outline.h"
#include "canvas/poly_item.h"
#include "canvas/visibility.h"

namespace ArdourCanvas {

class LIBCANVAS_API Polygon : public PolyItem
{
public:
	Polygon (Canvas*);
	Polygon (Item*);
	virtual ~Polygon();

	void render (Rect const & area, Cairo::RefPtr<Cairo::Context>) const;
	void compute_bounding_box () const;
	bool covers (Duple const &) const;

protected:
	mutable float* multiple;
	mutable float* constant;
	mutable Points::size_type cached_size;

	void cache_shape_computation () const;
};

}

#endif
