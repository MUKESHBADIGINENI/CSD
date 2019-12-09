#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid : public Shape 
{

public:
	Trapezoid(float Base, float Height);
	float get_area();

private:
	float Base, Height;
	Trapezoid(){}
};
#endif