#ifndef MODULES_REFERENCE_OPENGL_PAINTERS_UTILITY_H
#define MODULES_REFERENCE_OPENGL_PAINTERS_UTILITY_H

// K-3D
// Copyright (c) 1995-2007, Timothy M. Shead
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

/** \file
	\author Timothy M. Shead (tshead@k-3d.com)
*/

#include <k3dsdk/mesh.h>
#include <k3dsdk/polyhedron.h>

#include <boost/scoped_ptr.hpp>

namespace module
{

namespace opengl
{

namespace painters
{

/// Returns true if the given mesh contains non-empty polyhedra
k3d::bool_t has_non_empty_polyhedra(const k3d::mesh& Mesh);

/// Returns true if the given mesh contains non-SDS polyhedra
k3d::bool_t has_non_sds_polyhedra(const k3d::mesh& Mesh);

/// Returns true if the given mesh contains SDS polyhedra
k3d::bool_t has_sds_polyhedra(const k3d::mesh& Mesh);

} // namespace painters

} // namespace opengl

} // namespace module

#endif // !MODULES_REFERENCE_OPENGL_PAINTERS_UTILITY_H

