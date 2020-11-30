// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!
#ifndef _GTKMM_MODELBUTTON_H
#define _GTKMM_MODELBUTTON_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2015 The gtkmm Development Team
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

#include <gtkmm/button.h>
#include <giomm/icon.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkModelButton = struct _GtkModelButton;
using GtkModelButtonClass = struct _GtkModelButtonClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class ModelButton_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/** 
 *  @var ButtonRole BUTTON_ROLE_NORMAL
 * A plain button.
 * 
 *  @var ButtonRole BUTTON_ROLE_CHECK
 * A check button.
 * 
 *  @var ButtonRole BUTTON_ROLE_RADIO
 * A radio button.
 * 
 *  @enum ButtonRole
 * 
 * The role specifies the desired appearance of a Gtk::ModelButton.
 *
 * @ingroup gtkmmEnums
 */
enum ButtonRole
{
  BUTTON_ROLE_NORMAL,
  BUTTON_ROLE_CHECK,
  BUTTON_ROLE_RADIO
};

} // namespace Gtk

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::ButtonRole> : public Glib::Value_Enum<Gtk::ButtonRole>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gtk
{


/** A button that uses a Gio::Action as model.
 *
 * ModelButton is a button class that can use a Gio::Action as its model.
 * In contrast to ToggleButton or RadioButton, which can also
 * be backed by a Gio::Action via Actionable::property_action_name(),
 * ModelButton will adapt its appearance according to the kind of
 * action it is backed by, and appear either as a plain, check or radio button.
 *
 * Model buttons are used with popovers from a menu model bound to the popover.
 * They can also be used manually in a PopoverMenu.
 *
 * When the action is specified via Actionable::property_action_name()
 * and Actionable::property_action_target(), the role of the button
 * (i.e. whether it is a plain, check or radio button) is determined by
 * the type of the action and doesn't have to be explicitly specified
 * with property_role().
 *
 * The content of the button is specified by property_text() and property_icon().
 *
 * The appearance of model buttons can be influenced with
 * property_centered() and property_iconic().
 *
 * Model buttons have built-in support for submenus in PopoverMenu.
 * To make a ModelButton that opens a submenu when activated, set
 * property_menu_name(). To make a button that goes
 * back to the parent menu, you should set property_inverted()
 * to place the submenu indicator at the opposite side.
 *
 * @newin{3,18}
 *
 * @ingroup Widgets
 */

class ModelButton : public Button
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ModelButton CppObjectType;
  typedef ModelButton_Class CppClassType;
  typedef GtkModelButton BaseObjectType;
  typedef GtkModelButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  ModelButton(ModelButton&& src) noexcept;
  ModelButton& operator=(ModelButton&& src) noexcept;

  // noncopyable
  ModelButton(const ModelButton&) = delete;
  ModelButton& operator=(const ModelButton&) = delete;

  ~ModelButton() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class ModelButton_Class;
  static CppClassType modelbutton_class_;

protected:
  explicit ModelButton(const Glib::ConstructParams& construct_params);
  explicit ModelButton(GtkModelButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkModelButton*       gobj()       { return reinterpret_cast<GtkModelButton*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkModelButton* gobj() const { return reinterpret_cast<GtkModelButton*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:


public:
  ModelButton();

  /** Specifies whether the button is a plain, check or radio button.
   * When Gtk::Actionable::property_action_name() is set, the role will be determined
   * from the action and does not have to be set explicitly.
   * 
   * @newin{3,16}
   *
   * Default value: Gtk::BUTTON_ROLE_NORMAL
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< ButtonRole > property_role() ;

/** Specifies whether the button is a plain, check or radio button.
   * When Gtk::Actionable::property_action_name() is set, the role will be determined
   * from the action and does not have to be set explicitly.
   * 
   * @newin{3,16}
   *
   * Default value: Gtk::BUTTON_ROLE_NORMAL
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< ButtonRole > property_role() const;

  /** A Gio::Icon that will be used if iconic appearance for the button is
   * desired.
   * 
   * @newin{3,16}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gio::Icon > property_icon() ;

/** A Gio::Icon that will be used if iconic appearance for the button is
   * desired.
   * 
   * @newin{3,16}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gio::Icon > property_icon() const;

  /** The label for the button.
   * 
   * @newin{3,16}
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_text() ;

/** The label for the button.
   * 
   * @newin{3,16}
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_text() const;

  /** The state of the button. This is reflecting the state of the associated
   * Gio::Action.
   * 
   * @newin{3,16}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_active() ;

/** The state of the button. This is reflecting the state of the associated
   * Gio::Action.
   * 
   * @newin{3,16}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_active() const;

  /** The name of a submenu to open when the button is activated.
   * If this is set, the button should not have an action associated with it.
   * 
   * @newin{3,16}
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_menu_name() ;

/** The name of a submenu to open when the button is activated.
   * If this is set, the button should not have an action associated with it.
   * 
   * @newin{3,16}
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_menu_name() const;

  /** Whether to show the submenu indicator at the opposite side than normal.
   * This property should be set for model buttons that 'go back' to a parent
   * menu.
   * 
   * @newin{3,16}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_inverted() ;

/** Whether to show the submenu indicator at the opposite side than normal.
   * This property should be set for model buttons that 'go back' to a parent
   * menu.
   * 
   * @newin{3,16}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_inverted() const;

  /** Whether to render the button contents centered instead of left-aligned.
   * This property should be set for title-like items.
   * 
   * @newin{3,16}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_centered() ;

/** Whether to render the button contents centered instead of left-aligned.
   * This property should be set for title-like items.
   * 
   * @newin{3,16}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_centered() const;

  /** If this property is set, the button will show an icon if one is set.
   * If no icon is set, the text will be used. This is typically used for
   * horizontal sections of linked buttons.
   * 
   * @newin{3,16}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_iconic() ;

/** If this property is set, the button will show an icon if one is set.
   * If no icon is set, the text will be used. This is typically used for
   * horizontal sections of linked buttons.
   * 
   * @newin{3,16}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_iconic() const;


  // ModelButton has no methods, signals, child properties nor vfuncs.


};

} //namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::ModelButton
   */
  Gtk::ModelButton* wrap(GtkModelButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_MODELBUTTON_H */

