// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!
#ifndef _GTKMM_COLORSELECTION_P_H
#define _GTKMM_COLORSELECTION_P_H
#ifndef GTKMM_DISABLE_DEPRECATED


#include <gtkmm/private/hvbox_p.h>
#include <gtkmm/private/dialog_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class ColorSelection_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = ColorSelection;
  using BaseObjectType = GtkColorSelection;
  using BaseClassType = GtkColorSelectionClass;
  using CppClassParent = Gtk::VBox_Class;
  using BaseClassParent = GtkVBoxClass;

  friend class ColorSelection;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void color_changed_callback(GtkColorSelection* self);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#include <glibmm/class.h>

namespace Gtk
{

class ColorSelectionDialog_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = ColorSelectionDialog;
  using BaseObjectType = GtkColorSelectionDialog;
  using BaseClassType = GtkColorSelectionDialogClass;
  using CppClassParent = Gtk::Dialog_Class;
  using BaseClassParent = GtkDialogClass;

  friend class ColorSelectionDialog;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gtk

#endif // GTKMM_DISABLE_DEPRECATED


#endif /* _GTKMM_COLORSELECTION_P_H */

