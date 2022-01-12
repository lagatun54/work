#pragma once

#include "Librarian.h"
#include "Reader.h"
#include "Edition.h"
#include "Closet.h"
#include "Shelf.h"

class Librarian
{
public:
	void setWork(string adress);
	string getAdress();
	bool isWorking();
	void accesRequest(Edition* edition);
	void addEdition(Edition* edition);
private:
	bool isWorkExist;
	string adress;
	vector<Edition*> issuedEditions;
};