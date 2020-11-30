// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!
#ifndef _GTKMM_SHORTCUTSSECTION_H
#define _GTKMM_SHORTCUTSSECTION_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2016 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtkmm/box.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkShortcutsSection = struct _GtkShortcutsSection;
using GtkShortcutsSectionClass = struct _GtkShortcutsSectionClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class ShortcutsSection_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** Represents an application mode in a ShortcutsWindow.
 *
 * A ShortcutsSection collects all the keyboard shortcuts and gestures
 * for a major application mode. If your application needs multiple sections,
 * you should give each section a unique section_name and
 * a title that can be shown in the section selector of the ShortcutsWindow.
 *
 * The max_height property can be used to influence how
 * the groups in the section are distributed over pages and columns.
 *
 * This widget is only meant to be used with ShortcutsWindow.
 *
 * @newin{3,20}
 *
 * @ingroup Widgets
 */

class ShortcutsSection : public Box
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ShortcutsSection CppObjectType;
  typedef ShortcutsSection_Class CppClassType;
  typedef GtkShortcutsSection BaseObjectType;
  typedef GtkShortcutsSectionClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  ShortcutsSection(ShortcutsSection&& src) noexcept;
  ShortcutsSection& operator=(ShortcutsSection&& src) noexcept;

  // noncopyable
  ShortcutsSection(const ShortcutsSection&) = delete;
  ShortcutsSection& operator=(const ShortcutsSection&) = delete;

  ~ShortcutsSection() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class ShortcutsSection_Class;
  static CppClassType shortcutssection_class_;

protected:
  explicit ShortcutsSection(const Glib::ConstructParams& construct_params);
  explicit ShortcutsSection(GtkShortcutsSection* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkShortcutsSection*       gobj()       { return reinterpret_cast<GtkShortcutsSection*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkShortcutsSection* gobj() const { return reinterpret_cast<GtkShortcutsSection*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:


public:
  ShortcutsSection();

  
  /** A unique name to identify this section among the sections
   * added to the GtkShortcutsWindow. Setting the Gtk::ShortcutsWindow::property_section_name()
   * property to this string will make this section shown in the
   * GtkShortcutsWindow.
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_section_name() ;

/** A unique name to identify this section among the sections
   * added to the GtkShortcutsWindow. Setting the Gtk::ShortcutsWindow::property_section_name()
   * property to this string will make this section shown in the
   * GtkShortcutsWindow.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_section_name() const;

  /** The string to show in the section selector of the GtkShortcutsWindow
   * for this section. If there is only one section, you don't need to
   * set a title, since the section selector will not be shown in this case.
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_title() ;

/** The string to show in the section selector of the GtkShortcutsWindow
   * for this section. If there is only one section, you don't need to
   * set a title, since the section selector will not be shown in this case.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_title() const;

  /** The maximum number of lines to allow per column. This property can
   * be used to influence how the groups in this section are distributed
   * across pages and columns. The default value of 15 should work in
   * for most cases.
   *
   * Default value: 15
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< unsigned int > property_max_height() ;

/** The maximum number of lines to allow per column. This property can
   * be used to influence how the groups in this section are distributed
   * across pages and columns. The default value of 15 should work in
   * for most cases.
   *
   * Default value: 15
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< unsigned int > property_max_height() const;

  
};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::ShortcutsSection
   */
  Gtk::ShortcutsSection* wrap(GtkShortcutsSection* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_SHORTCUTSSECTION_H */

