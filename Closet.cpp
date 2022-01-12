#include "Closet.h"
#include "Magazine.h"
#include "Book.h"
pair<bool, string> Closet::isClosetThematic()
{
	bool isBook = true;
	bool isMagazine = true;
	for (int i = 0; i < this->shelfs.size(); i++)
	{
		if (shelfs[i]->isShelfThematic().first)
		{
			if (shelfs[i]->isShelfThematic().second == "book")
				isMagazine = false;
			if (shelfs[i]->isShelfThematic().second == "magazine")
				isBook = false;
		}
	}
	if (isBook)
		return make_pair(isBook, "book");
	if (isMagazine)
		return make_pair(isMagazine, "magazine");
	return make_pair(false, "");
}

void Closet::setAmountOfShelfs(int size)
{
	this->amountOfShelfs = size;
}

int Closet::getAmountOfShelfs()
{
	return this->amountOfShelfs;
}

void Closet::addShelf(Shelf* shelf)
{
	vector<Shelf*>::iterator it = find(this->shelfs.begin(), this->shelfs.end(), shelf);
	if (it == this->shelfs.end())
		this->shelfs.push_back(shelf);
}
