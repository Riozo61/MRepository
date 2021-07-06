#include"Circle.h"
double PI = 3.14;
Circle::Circle()
{
	r = 1;
}

Circle::Circle(int _r)
{
	this->r = _r;
}

double Circle::S()
{
	return PI * this->r * this->r;
}
