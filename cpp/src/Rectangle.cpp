#include "Rectangle.h"
#include <iostream>

void Rectangle::set_values (int x, int y) {
	std::cout << "cpp set_values(" << x << ", " << y << ")" << std::endl;
  width = x;
  height = y;
  std::cout << "cpp width: " << width << ", height: " << height << std::endl;
}

int Rectangle::area(){
	std::cout << "cpp width: " << width << ", height: " << height << std::endl;
	return width*height;
}