#include "Shelf.h"
#include <iostream>
void Shelf::addEdition(Edition* edition)
{
	vector<Edition*>::iterator it = find(this->editions.begin(), this->editions.end(), edition);
	if (it == this->editions.end())
		this->editions.push_back(edition);
}

vector<Edition*> Shelf::getEditions()
{
	return this->editions;
}

void Shelf::eraseEdition(Edition* edition)
{
	vector<Edition*>::iterator it = find(this->editions.begin(), this->editions.end(), edition);
	if (it != this->editions.end())
		this->editions.erase(it);
}

void Shelf::setAmountOfEditions(int size)
{
	this->amountOfEditions = size;
}

int Shelf::getAmountOfEditions()
{
	return this->amountOfEditions;
}

string Shelf::getTypeOfEdition(int position)
{
	return  this->editions[position]->getType();
}

pair<bool, string> Shelf::isShelfThematic()
{
	bool isBook = true;
	bool isMagazine = true;
	for (int i = 0; i < this->editions.size(); i++)
	{
		if (this->getTypeOfEdition(i) != "magazine")
			isMagazine = false;
		if (this->getTypeOfEdition(i) != "book")
			isBook = false;
	}
	if (isBook)
		return make_pair(isBook, "book");
	if (isMagazine)
		return make_pair(isMagazine, "magazine");
	return make_pair(false, "");
}
