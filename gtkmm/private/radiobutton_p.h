// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!
#ifndef _GTKMM_RADIOBUTTON_P_H
#define _GTKMM_RADIOBUTTON_P_H


#include <gtkmm/private/checkbutton_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class RadioButton_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = RadioButton;
  using BaseObjectType = GtkRadioButton;
  using BaseClassType = GtkRadioButtonClass;
  using CppClassParent = Gtk::CheckButton_Class;
  using BaseClassParent = GtkCheckButtonClass;

  friend class RadioButton;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void group_changed_callback(GtkRadioButton* self);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_RADIOBUTTON_P_H */

