#pragma once
#include"Shape.h"

class Circle : public Shape
{
protected:
	int r;
	static double PI;
public:
	Circle();
	Circle(int);
	double S() override;

};
