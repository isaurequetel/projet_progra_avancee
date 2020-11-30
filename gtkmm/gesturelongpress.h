// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!
#ifndef _GTKMM_GESTURELONGPRESS_H
#define _GTKMM_GESTURELONGPRESS_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2014 The gtkmm Development Team
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

#include <gtkmm/gesturesingle.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkGestureLongPress = struct _GtkGestureLongPress;
using GtkGestureLongPressClass = struct _GtkGestureLongPressClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GestureLongPress_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
/** "Press and Hold" gesture.
 *
 * This is a Gesture implementation able to recognize
 * long presses, triggering signal_pressed() after the
 * timeout is exceeded.
 *
 * If the touchpoint is lifted before the timeout passes, or if it drifts
 * too far of the initial press point, signal_cancelled() will be emitted.
 *
 * @newin{3,14}
 *
 * @ingroup Gestures
 */

class GestureLongPress : public GestureSingle
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = GestureLongPress;
  using CppClassType = GestureLongPress_Class;
  using BaseObjectType = GtkGestureLongPress;
  using BaseClassType = GtkGestureLongPressClass;

  // noncopyable
  GestureLongPress(const GestureLongPress&) = delete;
  GestureLongPress& operator=(const GestureLongPress&) = delete;

private:  friend class GestureLongPress_Class;
  static CppClassType gesturelongpress_class_;

protected:
  explicit GestureLongPress(const Glib::ConstructParams& construct_params);
  explicit GestureLongPress(GtkGestureLongPress* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  GestureLongPress(GestureLongPress&& src) noexcept;
  GestureLongPress& operator=(GestureLongPress&& src) noexcept;

  ~GestureLongPress() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkGestureLongPress*       gobj()       { return reinterpret_cast<GtkGestureLongPress*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkGestureLongPress* gobj() const { return reinterpret_cast<GtkGestureLongPress*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkGestureLongPress* gobj_copy();

private:


protected:
  /** There is no create() method that corresponds to this constructor,
   * because this constructor shall only be used by derived classes.
   */
  GestureLongPress();

  /** Constructs a Gesture that recognizes long presses.
   */
    explicit GestureLongPress(Widget& widget);


public:
  /** Creates a Gesture that recognizes long presses.
   *
   * @newin{3,14}
   *
   * @param widget Widget the gesture relates to.
   * @return A RefPtr to a new GestureLongPress.
   */
  
  static Glib::RefPtr<GestureLongPress> create(Widget& widget);


  // no_default_handler because GtkGestureLongPressClass is private.
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%pressed(double x, double y)</tt>
   *
   * Flags: Run Last
   *
   * This signal is emitted whenever a press goes unmoved/unreleased longer than
   * what the GTK+ defaults tell.
   * 
   * @newin{3,14}
   * 
   * @param x The X coordinate where the press happened, relative to the widget allocation.
   * @param y The Y coordinate where the press happened, relative to the widget allocation.
   */

  Glib::SignalProxy< void,double,double > signal_pressed();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%cancelled()</tt>
   *
   * Flags: Run Last
   *
   * This signal is emitted whenever a press moved too far, or was released
   * before Gtk::GestureLongPress::signal_pressed() happened.
   * 
   * @newin{3,14}
   */

  Glib::SignalProxy< void > signal_cancelled();


  /** Factor by which to modify the default timeout.
   *
   * @newin{3,20}
   *
   * Default value: 1
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_delay_factor() ;

/** Factor by which to modify the default timeout.
   *
   * @newin{3,20}
   *
   * Default value: 1
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_delay_factor() const;


  // GestureLongPress has no methods


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


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
   * @relates Gtk::GestureLongPress
   */
  Glib::RefPtr<Gtk::GestureLongPress> wrap(GtkGestureLongPress* object, bool take_copy = false);
}


#endif /* _GTKMM_GESTURELONGPRESS_H */

