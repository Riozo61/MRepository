#include"Manager.h"

Manager::Manager()
{
	name = "NoName";
	age = 0;
}

Manager::Manager(string _name, int _age)
{
	name = _name;
	age = _age;
}

void Manager::Print()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;

}

Manager::~Manager()
{
}
