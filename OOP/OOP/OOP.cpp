#include"Manager.h"
#include"President.h"
#include"Worker.h"
#include"Employer.h"
int main()
{
	Employer** employers = new Employer*[3];
	employers[0] = new President("President", 31);
	employers[1] = new Manager("Manager", 25);
	employers[2] = new Worker("Worker", 40);
	
	for (int i = 0; i < 3; i++)
	{
		employers[i]->Print();
	}
	for (int i = 0; i < 3; i++)
	{
		delete employers[i];
	}
	delete[]employers;

	President president("President", 31);
	Manager manager("Manager", 25);
	Worker worker("Worker", 40);
	president.Print();
	manager.Print();
	worker.Print();

}

