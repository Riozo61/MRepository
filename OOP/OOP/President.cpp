#include "President.h"

President::President()
{
	name = "NoName";
	age = 0;
}

President::President(string _name, int _age)
{
	name = _name;
	age = _age;
}

void President::Print()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

President::~President()
{
}
