#pragma once

#include "Employer.h"

class President : public Employer
{
public:
	President();
	President(string, int);
	void Print() override;
	~President();

};
