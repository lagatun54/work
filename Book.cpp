#include "Book.h"

void Book::setAuthor(string author)
{
	this->author = author;
}

string Book::getAuthor()
{
	return this->author;
}

void Book::setYearsOfLife(int year1, int year2)
{
	this->yearsOfLife = make_pair(year1, year2);
}

pair<int, int> Book::getYearsOfLife()
{
	return yearsOfLife;
}

string Book::getType()
{
	return "book";
}
