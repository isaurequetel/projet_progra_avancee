// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!
#ifndef _GTKMM_SCALEBUTTON_H
#define _GTKMM_SCALEBUTTON_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2007 The gtkmm Development Team
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


#include <vector>

#include <gtkmm/button.h>
#include <gtkmm/adjustment.h>
#include <gtkmm/orientable.h>
#include <gtkmm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkScaleButton = struct _GtkScaleButton;
using GtkScaleButtonClass = struct _GtkScaleButtonClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class ScaleButton_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A button which pops up a scale widget.
 *
 * This kind of widget is commonly used for volume controls in multimedia
 * applications, and there is a Gtk::VolumeButton subclass that is tailored
 * for this use case.
 *
 * @ingroup Widgets
 * @newin{2,12}
 */

class ScaleButton
 : public Button,
   public Orientable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ScaleButton CppObjectType;
  typedef ScaleButton_Class CppClassType;
  typedef GtkScaleButton BaseObjectType;
  typedef GtkScaleButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  ScaleButton(ScaleButton&& src) noexcept;
  ScaleButton& operator=(ScaleButton&& src) noexcept;

  // noncopyable
  ScaleButton(const ScaleButton&) = delete;
  ScaleButton& operator=(const ScaleButton&) = delete;

  ~ScaleButton() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class ScaleButton_Class;
  static CppClassType scalebutton_class_;

protected:
  explicit ScaleButton(const Glib::ConstructParams& construct_params);
  explicit ScaleButton(GtkScaleButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkScaleButton*       gobj()       { return reinterpret_cast<GtkScaleButton*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkScaleButton* gobj() const { return reinterpret_cast<GtkScaleButton*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_value_changed().
  virtual void on_value_changed(double value);


private:

  
public:
  //We custom-implement the constructor because gtk_scale_button_new() does more than just call g_object_new().
  /** Creates a GtkScaleButton, with a range between min and max , with a stepping of step.
   *
   * @param size A stock icon size.
   * @param min The minimum value of the scale (usually 0).
   * @param max The maximum value of the scale (usually 100).
   * @param step The stepping of value when a scroll-wheel event, or up/down arrow event occurs (usually 2).
   * @param icons A vector of icon names.
   */
  explicit ScaleButton(IconSize size, double min, double max, double step, const std::vector<Glib::ustring>& icons);
  

  //We add the constructor without icons because the C functions allows that to be NULL.
  /** Creates a GtkScaleButton, with a range between min and max , with a stepping of step.
   *
   * @param size A stock icon size.
   * @param min The minimum value of the scale (usually 0).
   * @param max The maximum value of the scale (usually 100).
   * @param step The stepping of value when a scroll-wheel event, or up/down arrow event occurs (usually 2).
   *
   * @newin{3,16}
   */
  explicit ScaleButton(IconSize size, double min, double max, double step);

 
  /** Sets the icons to be used by the scale button.
   * For details, see the Gtk::ScaleButton::property_icons() property.
   * 
   * @newin{2,12}
   * 
   * @param icons A <tt>nullptr</tt>-terminated array of icon names.
   */
  void set_icons(const std::vector<Glib::ustring>& icons);
  
  /** Gets the current value of the scale button.
   * 
   * @newin{2,12}
   * 
   * @return Current value of the scale button.
   */
  double get_value() const;
  
  /** Sets the current value of the scale; if the value is outside
   * the minimum or maximum range values, it will be clamped to fit
   * inside them. The scale button emits the Gtk::ScaleButton::signal_value_changed()
   * signal if the value changes.
   * 
   * @newin{2,12}
   * 
   * @param value New value of the scale button.
   */
  void set_value(double value);

  
  /** Gets the Gtk::Adjustment associated with the Gtk::ScaleButton’s scale.
   * See Gtk::Range::get_adjustment() for details.
   * 
   * @newin{2,12}
   * 
   * @return The adjustment associated with the scale.
   */
  Glib::RefPtr<Adjustment> get_adjustment();
  
  /** Gets the Gtk::Adjustment associated with the Gtk::ScaleButton’s scale.
   * See Gtk::Range::get_adjustment() for details.
   * 
   * @newin{2,12}
   * 
   * @return The adjustment associated with the scale.
   */
  Glib::RefPtr<const Adjustment> get_adjustment() const;

  
  /** Sets the Gtk::Adjustment to be used as a model
   * for the Gtk::ScaleButton’s scale.
   * See Gtk::Range::set_adjustment() for details.
   * 
   * @newin{2,12}
   * 
   * @param adjustment A Gtk::Adjustment.
   */
  void set_adjustment(const Glib::RefPtr<Adjustment>& adjustment);

  //TODO: Change the Widget* return type to Gtk::Button: https://bugzilla.gnome.org/show_bug.cgi?id=539944
  
  /** Retrieves the plus button of the Gtk::ScaleButton.
   * 
   * @newin{2,14}
   * 
   * @return The plus button of the Gtk::ScaleButton as a Gtk::Button.
   */
  Widget* get_plus_button();
  
  /** Retrieves the plus button of the Gtk::ScaleButton.
   * 
   * @newin{2,14}
   * 
   * @return The plus button of the Gtk::ScaleButton as a Gtk::Button.
   */
  const Widget* get_plus_button() const;

  //TODO: Change the Widget* return type to Gtk::Button: https://bugzilla.gnome.org/show_bug.cgi?id=539944
  
  /** Retrieves the minus button of the Gtk::ScaleButton.
   * 
   * @newin{2,14}
   * 
   * @return The minus button of the Gtk::ScaleButton as a Gtk::Button.
   */
  Widget* get_minus_button();
  
  /** Retrieves the minus button of the Gtk::ScaleButton.
   * 
   * @newin{2,14}
   * 
   * @return The minus button of the Gtk::ScaleButton as a Gtk::Button.
   */
  const Widget* get_minus_button() const;

  //TODO: Use a more specific return type?
  
  /** Retrieves the popup of the Gtk::ScaleButton.
   * 
   * @newin{2,14}
   * 
   * @return The popup of the Gtk::ScaleButton.
   */
  Gtk::Widget* get_popup();
  
  /** Retrieves the popup of the Gtk::ScaleButton.
   * 
   * @newin{2,14}
   * 
   * @return The popup of the Gtk::ScaleButton.
   */
  const Gtk::Widget* get_popup() const;

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%value_changed(double value)</tt>
   *
   * Flags: Run Last
   *
   * The signal_value_changed() signal is emitted when the value field has
   * changed.
   * 
   * @newin{2,12}
   * 
   * @param value The new value.
   */

  Glib::SignalProxy< void,double > signal_value_changed();


  //Ignore key-binding signals:
  
  
  /** The value of the scale.
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_value() ;

/** The value of the scale.
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_value() const;

  /** The icon size.
   *
   * Default value: Gtk::ICON_SIZE_SMALL_TOOLBAR
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< IconSize > property_size() ;

/** The icon size.
   *
   * Default value: Gtk::ICON_SIZE_SMALL_TOOLBAR
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< IconSize > property_size() const;

  /** The GtkAdjustment that contains the current value of this scale button object.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Adjustment* > property_adjustment() ;

/** The GtkAdjustment that contains the current value of this scale button object.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Adjustment* > property_adjustment() const;

  /** The names of the icons to be used by the scale button.
   * The first item in the array will be used in the button
   * when the current value is the lowest value, the second
   * item for the highest value. All the subsequent icons will
   * be used for all the other values, spread evenly over the
   * range of values.
   * 
   * If there's only one icon name in the @a icons array, it will
   * be used for all the values. If only two icon names are in
   * the @a icons array, the first one will be used for the bottom
   * 50% of the scale, and the second one for the top 50%.
   * 
   * It is recommended to use at least 3 icons so that the
   * Gtk::ScaleButton reflects the current value of the scale
   * better for the users.
   * 
   * @newin{2,12}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< std::vector<Glib::ustring> > property_icons() ;

/** The names of the icons to be used by the scale button.
   * The first item in the array will be used in the button
   * when the current value is the lowest value, the second
   * item for the highest value. All the subsequent icons will
   * be used for all the other values, spread evenly over the
   * range of values.
   * 
   * If there's only one icon name in the @a icons array, it will
   * be used for all the values. If only two icon names are in
   * the @a icons array, the first one will be used for the bottom
   * 50% of the scale, and the second one for the top 50%.
   * 
   * It is recommended to use at least 3 icons so that the
   * Gtk::ScaleButton reflects the current value of the scale
   * better for the users.
   * 
   * @newin{2,12}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< std::vector<Glib::ustring> > property_icons() const;


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
   * @relates Gtk::ScaleButton
   */
  Gtk::ScaleButton* wrap(GtkScaleButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_SCALEBUTTON_H */

