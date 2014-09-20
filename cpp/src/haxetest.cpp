#include <iostream>

#include "App.h"

extern "C" const char *hxRunLibrary();
extern "C" void hxcpp_set_top_of_stack();
	

// Glue imeplementation cpp side
struct HaxeApp //: public VirtualAppBase
{
   void init() { ::App_obj::init(); }
   void update() { ::App_obj::update(); }
};


int main()
{
	std::cout << "cpp main()";
	
	hxcpp_set_top_of_stack();

	const char *err = hxRunLibrary();
	if (err) {
		// Unhandled exceptions ...
		fprintf(stderr,"Error %s\n", err );
		return -1;
	}

	
	HaxeApp app;
	app.init();
}