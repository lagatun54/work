#pragma once
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Edition
{
public:
	void setHeadline(string headline);
	string getHeadline();
	void setNameOfThePublisher(string nameOfThePublisher);
	string getNameOfThePublisher();
    void setContent(string content);
    string getContent();
	void setReleaseYear(int year);
	int getReleaseYear();
	virtual string getType();
protected:
	string headline, nameOfThePublisher, content;
	int releaseYear;
};