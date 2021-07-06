#pragma once

#include "Employer.h"

class Worker : public Employer
{
public:
	Worker();
	Worker(string, int);
	void Print() override;
	~Worker();


};
