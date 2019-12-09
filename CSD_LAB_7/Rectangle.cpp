#include "Shape.h"
#include "Trapezoid.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;


Rectangle::Rectangle(float Width, float Length) {
	width = Width;
	length = Length;
}

virtual float Rectangle::get_area() {
	return width * length;
}

virutal float Rectangle::get_perimeter() {
	return 2 * (length + width);
}