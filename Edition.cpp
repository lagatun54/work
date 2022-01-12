#include "Edition.h"

void Edition::setHeadline(string headline)
{
	this->headline = headline;
}

string Edition::getHeadline()
{
	return this->headline;
}

void Edition::setNameOfThePublisher(string nameOfThePublisher)
{
	this->nameOfThePublisher = nameOfThePublisher;
}

string Edition::getNameOfThePublisher()
{
	return this->nameOfThePublisher;
}

void Edition::setContent(string content)
{
	this->content = content;
}

string Edition::getContent()
{
	return this->content;
}

void Edition::setReleaseYear(int year)
{
	this->releaseYear = year;
}

int Edition::getReleaseYear()
{
	return this->releaseYear;
}

string Edition::getType()
{
	return "edition";
}
