#pragma once

#include"Employer.h"

class Manager : public Employer
{
public:
	Manager();
	Manager(string, int);
	void Print() override;
	~Manager();



};

