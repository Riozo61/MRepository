#pragma once

#include <iostream>
using namespace std;

class Employer
{
protected:
	string name;
	int age;
public:
	virtual void Print()  = 0;
	virtual ~Employer() {};
};


