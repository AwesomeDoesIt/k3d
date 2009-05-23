// K-3D
// Copyright (c) 1995-2008, Timothy M. Shead
//
// Contact: tshead@k-3d.com
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public
// License along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

#include "geometry.h"
#include "selection.h"
#include "typed_array.h"
#include "uint_t_array.h"

namespace k3d
{

namespace geometry
{

namespace point_selection
{

k3d::selection::storage& create(k3d::selection::set& Set)
{
	k3d::selection::storage& storage = Set.create("point");
	k3d::uint_t_array& begin = storage.structure.create<k3d::uint_t_array>("begin");
	k3d::uint_t_array& end = storage.structure.create<k3d::uint_t_array>("end");
	k3d::typed_array<k3d::double_t>& value = storage.structure.create<k3d::typed_array<k3d::double_t> >("value");

	return storage;
}

} // namespace point_selection

} // namespace geometry

} // namespace k3d

