#include "projet.h"



int main(int argc, char *argv[])
{
	auto app = Gtk::Application::create(argc, argv);

	Personnage p;
	FirstInterface vampire;

	//Shows the window and returns when it is closed.
	return app->run(vampire.fenetre);
}
