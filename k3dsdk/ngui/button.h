#ifndef K3DSDK_NGUI_BUTTON_H
#define K3DSDK_NGUI_BUTTON_H

// K-3D
// Copyright (c) 1995-2004, Timothy M. Shead
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
		\author Tim Shead (tshead@k-3d.com)
*/

#include <gtkmm/button.h>

namespace k3d
{

namespace ngui
{

namespace button
{

/////////////////////////////////////////////////////////////////////////////
// create

/// Factory function for creating a button with a stock icon but a custom label.
Gtk::Button* create(const Glib::ustring& label, const Gtk::StockID& stock_id);
/// Factory function for creating a button containing some other widget, typically used with Gtk::Image.
Gtk::Button* create(Gtk::Widget& widget);

} // namespace button

} // namespace ngui

} // namespace k3d

#endif // !K3DSDK_NGUI_BUTTON_H

