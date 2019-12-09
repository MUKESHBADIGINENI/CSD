#include "Shape.h"
#include "Rectangle.h"
#include "Trapezoid.h"
#include <iostream>

using namespace std;


int main() {


	Rectangle rectangleObject(2, 5);
	Trapezoid TrapezoidObject(1, 10);
	Square squareObject(5);

	cout << "The area of the rectangle is" << rectangleObject.get_area() << '\n';
	cout << "The perimeter of the rectangle is " << rectangleObject.get_perimeter() << '\n';
	cout << "The area of the Trapezoid is " << TrapezoidObject.get_area() << '\n';
	cout << "The area of the square is " << squareObject.get_area() << '\n';

	return 0;
}