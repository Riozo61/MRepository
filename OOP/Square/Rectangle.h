#pragma once

#include"Shape.h"

class Rectangle : public Shape
{
protected:
	int a;
	int b;
public:
	Rectangle();
	Rectangle(int, int);
	double S() override;
};

