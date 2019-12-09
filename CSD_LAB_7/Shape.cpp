#include "Shape.h"
#include "Trapezoid.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;
Shape::Shape() {
	area = 0;
	perimeter = 0;
}
float Shape::get_area() {
	return area;
}