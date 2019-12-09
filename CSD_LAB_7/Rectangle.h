#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle : public Shape {

public:
	Rectangle(float Width, float Length);
	float get_area();
	float get_perimeter();

private:
	float Width, Length;
};
#endif