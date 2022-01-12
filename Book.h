#pragma once
#include "Edition.h"

class Book : public Edition
{
public:
	void setAuthor(string author);
	string getAuthor();
	void setYearsOfLife(int year1, int year2);
	pair<int, int> getYearsOfLife();
	string getType();
private:
	string author;
	pair<int, int> yearsOfLife;
};