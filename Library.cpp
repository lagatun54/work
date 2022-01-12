#include "Library.h"

void Library::setTitle(string title)
{
	this->title = title;
}

string Library::getTitle()
{
	return this->title;
}

void Library::setAdress(string adress)
{
	this->adress = adress;
}

string Library::getAdress()
{
	return this->adress;
}

vector<Closet*> Library::getClosets()
{
	return this->closets;
}

void Library::addCloset(Closet* closet)
{
	vector<Closet*>::iterator it = find(this->closets.begin(), this->closets.end(), closet);
	if (it == this->closets.end())
		this->closets.push_back(closet);
}

void Library::eraseCloset(Closet* closet)
{
	vector<Closet*>::iterator it = find(this->closets.begin(), this->closets.end(), closet);
	if (it != this->closets.end())
		this->closets.erase(it);
}
