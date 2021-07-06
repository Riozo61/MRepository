#include "Worker.h"

Worker::Worker()
{
}

Worker::Worker(string _name, int _age)
{
	name = _name;
	age = _age;
}

void Worker::Print()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;

}

Worker::~Worker()
{
}
