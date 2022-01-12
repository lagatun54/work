#pragma once
#include "Closet.h"

class Library
{
public:
	void setTitle(string title);
	string getTitle();
	void setAdress(string adress);
	string getAdress();
	vector<Closet*> getClosets();
	void addCloset(Closet* closet);
	void eraseCloset(Closet* closet);
private:
	vector<Closet*> closets;
	string title, adress;
};