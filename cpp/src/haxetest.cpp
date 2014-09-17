#include <iostream>


class App // Declared here for extern reasons, but implemented in haxe
{
   public:
     static void update();
     static void init();
};

// Glue imeplementation cpp side
struct HaxeApp //: public VirtualAppBase
{
   void init() { ::App::init(); }
   void update() { ::App::update(); }
};


int main()
{
	std::cout << "cpp main()";
	HaxeApp app;
	app.init();
}