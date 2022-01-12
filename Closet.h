#pragma once

#include "Edition.h"
#include "Shelf.h"

class Closet
{
public:
	pair<bool, string> isClosetThematic();
	void setAmountOfShelfs(int size);
	int  getAmountOfShelfs();
	void addShelf(Shelf* shelf);
private:
	int amountOfShelfs;
	vector<Shelf*> shelfs;
};