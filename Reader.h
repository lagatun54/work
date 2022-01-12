#pragma once

#include "Edition.h"
#include "Library.h"

class Reader
{
public:
	bool accesRequest(int choice);
	bool isEditionFound(int choice);
	void incAnountOfEditions();
	void decAnountOfEditions();
	int getAmountOfEditions();
	void setAllowedAmount(int amount);
	int getAllowedAmount();
	void getEdition(Edition *edition);
	void returnEdition(Edition* edition);
private:
	int amountOfEditions, allowedAmount;
	vector<Edition*> editions;
};