#pragma once
#include "Edition.h"

class Shelf
{
public:
	void addEdition(Edition* edition);
	vector<Edition*> getEditions();
	void eraseEdition(Edition* edition);
	void setAmountOfEditions(int size);
	int getAmountOfEditions();
	string getTypeOfEdition(int position);
	pair<bool, string> isShelfThematic();
private:
	vector<Edition*> editions;
	int amountOfEditions;
};