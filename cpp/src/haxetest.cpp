#include <iostream>
#include "Rectangle.h"

namespace cpp
{

	template<typename T>
	class Pointer
	{
	public:
		T *ptr;
		inline Pointer(const T *inValue) : ptr((T*)inValue) { }
	};

}

class App_obj{
public:
	static int init(int value);
	static int update(::cpp::Pointer<Rectangle> rect);

};



extern "C" const char *hxRunLibrary();
extern "C" void hxcpp_set_top_of_stack();
	



// Glue imeplementation cpp side
// struct HaxeApp //: public VirtualAppBase
// {
//    void init() { ::App_obj::init(); }
//    void update() { ::App_obj::update(); }
// };


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

	
	//HaxeApp app;
	//app.init();

	Rectangle * rect = new Rectangle();

	::App_obj::init(1); 

	::App_obj::update(::cpp::Pointer<Rectangle>(rect)); 

	#ifdef WIN32
		system("pause");
	#endif
}