#include "Shape.h"
#include "Trapezoid.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;
Trapezoid::Trapezoid(float Base, float Height) {
	base = Base;
	height = Height;
}
virtual float Trapezoid::get_area() {
	return (0.5 * base * height);
}
