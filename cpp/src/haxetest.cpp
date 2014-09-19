#include <iostream>

#include "App.h"

// Glue imeplementation cpp side
struct HaxeApp //: public VirtualAppBase
{
   void init() { ::App_obj::init(); }
   void update() { ::App_obj::update(); }
};


int main()
{
	std::cout << "cpp main()";
	HaxeApp app;
	app.init();
}