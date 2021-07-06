#include"Rectangle.h"

Rectangle::Rectangle()
{
	a = 1;
	b = 1;
}

Rectangle::Rectangle(int _a, int _b)
{
	a = _a;
	b = _b;
}

double Rectangle::S()
{
	return this->a * this->b;
}
