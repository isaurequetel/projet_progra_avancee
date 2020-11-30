// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!
#ifndef _GTKMM_PANED_H
#define _GTKMM_PANED_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 1998-2002 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtkmm/container.h>
#include <gtkmm/orientable.h>
#include <gtkmm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkPaned = struct _GtkPaned;
using GtkPanedClass = struct _GtkPanedClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class Paned_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A widget with two adjustable panes.
 *
 * Gtk::Paned has two panes, arranged either
 * horizontally or vertically. The division between
 * the two panes is adjustable by the user by dragging
 * a handle.

 * Child widgets are added to the panes of the widget with pack1() and pack2().
 * The division beween the two children is set by default from the size
 * requests of the children, but it can be adjusted by the user.
 *
 * A paned widget draws a separator between the two child widgets and a small
 * handle that the user can drag to adjust the division. It does not draw any
 * relief around the children or around the separator.  (The space
 * in which the separator is called the gutter.) Often, it is useful to
 * put each child inside a Gtk::Frame with the shadow type set to Gtk::SHADOW_IN
 * so that the gutter appears as a ridge. No separator is drawn if one of
 * the children is missing.
 *
 * Each child has two options that can be set - resize and shrink. If resize is
 * true, then when the GtkPaned is resized, that child will expand or shrink
 * along with the paned widget. If shrink is true, then when that child can be
 * made smaller than it's requisition. Setting shrink to false allows the
 * application to set a minimum size. If resize is false for both children,
 * then this is treated as if resize is true for both children.
 *
 * The application can set the position of the slider as if it were set by the
 * user, by calling set_position().
 *
 * @ingroup Widgets
 * @ingroup Containers
 */

class Paned
 : public Container,
   public Orientable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Paned CppObjectType;
  typedef Paned_Class CppClassType;
  typedef GtkPaned BaseObjectType;
  typedef GtkPanedClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Paned(Paned&& src) noexcept;
  Paned& operator=(Paned&& src) noexcept;

  // noncopyable
  Paned(const Paned&) = delete;
  Paned& operator=(const Paned&) = delete;

  ~Paned() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Paned_Class;
  static CppClassType paned_class_;

protected:
  explicit Paned(const Glib::ConstructParams& construct_params);
  explicit Paned(GtkPaned* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkPaned*       gobj()       { return reinterpret_cast<GtkPaned*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkPaned* gobj() const { return reinterpret_cast<GtkPaned*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:

  //Note that we try to use the same defaul parameter value as the default property value.
    explicit Paned(Orientation orientation =  ORIENTATION_HORIZONTAL);


  /** Adds a child to the top or left pane with default parameters. This is
   * equivalent to
   * `gtk_paned_pack1 (paned, child, <tt>false</tt>, <tt>true</tt>)`.
   * 
   * @param child The child to add.
   */
  void add1(Widget& child);
  
  /** Adds a child to the bottom or right pane with default parameters. This
   * is equivalent to
   * `gtk_paned_pack2 (paned, child, <tt>true</tt>, <tt>true</tt>)`.
   * 
   * @param child The child to add.
   */
  void add2(Widget& child);

  
  /** Adds a child to the top or left pane.
   * 
   * @param child The child to add.
   * @param resize Should this child expand when the paned widget is resized.
   * @param shrink Can this child be made smaller than its requisition.
   */
  void pack1(Widget& child, bool resize, bool shrink);
  void pack1(Widget& child, AttachOptions options = Gtk::EXPAND);

  
  /** Adds a child to the bottom or right pane.
   * 
   * @param child The child to add.
   * @param resize Should this child expand when the paned widget is resized.
   * @param shrink Can this child be made smaller than its requisition.
   */
  void pack2(Widget& child, bool resize, bool shrink);
  void pack2(Widget& child, AttachOptions options  = Gtk::EXPAND);

  
  /** Obtains the position of the divider between the two panes.
   * 
   * @return Position of the divider.
   */
  int get_position() const;
  
  /** Sets the position of the divider between the two panes.
   * 
   * @param position Pixel position of divider, a negative value means that the position
   * is unset.
   */
  void set_position(int position);

  
  /** Obtains the first child of the paned widget.
   * 
   * @newin{2,4}
   * 
   * @return First child, or <tt>nullptr</tt> if it is not set.
   */
  Widget* get_child1();
  
  /** Obtains the first child of the paned widget.
   * 
   * @newin{2,4}
   * 
   * @return First child, or <tt>nullptr</tt> if it is not set.
   */
  const Widget* get_child1() const;

  
  /** Obtains the second child of the paned widget.
   * 
   * @newin{2,4}
   * 
   * @return Second child, or <tt>nullptr</tt> if it is not set.
   */
  Widget* get_child2();
  
  /** Obtains the second child of the paned widget.
   * 
   * @newin{2,4}
   * 
   * @return Second child, or <tt>nullptr</tt> if it is not set.
   */
  const Widget* get_child2() const;

  
  /** Returns the Gdk::Window of the handle. This function is
   * useful when handling button or motion events because it
   * enables the callback to distinguish between the window
   * of the paned, a child and the handle.
   * 
   * @newin{2,20}
   * 
   * @return The paned’s handle window.
   */
  Glib::RefPtr<Gdk::Window> get_handle_window();
  
  /** Returns the Gdk::Window of the handle. This function is
   * useful when handling button or motion events because it
   * enables the callback to distinguish between the window
   * of the paned, a child and the handle.
   * 
   * @newin{2,20}
   * 
   * @return The paned’s handle window.
   */
  Glib::RefPtr<const Gdk::Window> get_handle_window() const;

  
  /** Sets the Gtk::Paned::property_wide_handle() property.
   * 
   * @newin{3,16}
   * 
   * @param wide The new value for the Gtk::Paned::property_wide_handle() property.
   */
  void set_wide_handle(bool wide =  true);
  
  /** Gets the Gtk::Paned::property_wide_handle() property.
   * 
   * @newin{3,16}
   * 
   * @return <tt>true</tt> if the paned should have a wide handle.
   */
  bool get_wide_handle() const;

  //Keybinding signals:
  
  
  /** Position of paned separator in pixels (0 means all the way to the left/top).
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_position() ;

/** Position of paned separator in pixels (0 means all the way to the left/top).
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_position() const;

  /** <tt>true</tt> if the Position property should be used.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_position_set() ;

/** <tt>true</tt> if the Position property should be used.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_position_set() const;

  /** The smallest possible value for the position property.
   * This property is derived from the size and shrinkability
   * of the widget's children.
   * 
   * @newin{2,4}
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_min_position() const;


  /** The largest possible value for the position property.
   * This property is derived from the size and shrinkability
   * of the widget's children.
   * 
   * @newin{2,4}
   *
   * Default value: 2147483647
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_max_position() const;


  /** Setting this property to <tt>true</tt> indicates that the paned needs
   * to provide stronger visual separation (e.g.\ because it separates
   * between two notebooks, whose tab rows would otherwise merge visually).
   * 
   * @newin{3,16}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_wide_handle() ;

/** Setting this property to <tt>true</tt> indicates that the paned needs
   * to provide stronger visual separation (e.g.\ because it separates
   * between two notebooks, whose tab rows would otherwise merge visually).
   * 
   * @newin{3,16}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_wide_handle() const;


  /** The "resize" child property determines whether the child expands and
   * shrinks along with the paned widget.
   * 
   * @newin{2,4}
   *
   * Default value: <tt>true</tt>
   *
   * @return A ChildPropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy< bool > child_property_resize(Gtk::Widget& child) ;

/** The "resize" child property determines whether the child expands and
   * shrinks along with the paned widget.
   * 
   * @newin{2,4}
   *
   * Default value: <tt>true</tt>
   *
   * @return A ChildPropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy_ReadOnly< bool > child_property_resize(const Gtk::Widget& child) const;

  /** The "shrink" child property determines whether the child can be made
   * smaller than its requisition.
   * 
   * @newin{2,4}
   *
   * Default value: <tt>true</tt>
   *
   * @return A ChildPropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy< bool > child_property_shrink(Gtk::Widget& child) ;

/** The "shrink" child property determines whether the child can be made
   * smaller than its requisition.
   * 
   * @newin{2,4}
   *
   * Default value: <tt>true</tt>
   *
   * @return A ChildPropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy_ReadOnly< bool > child_property_shrink(const Gtk::Widget& child) const;


};

} // namespace Gtk

//Include the deprecated header,
//whose classes were previously in this header,
//to preserve the "API" of the includes.
#include <gtkmm/hvpaned.h>


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Paned
   */
  Gtk::Paned* wrap(GtkPaned* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_PANED_H */

