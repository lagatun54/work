#include "Librarian.h"

void Librarian::setWork(string adress)
{
	this->isWorkExist = true;
	this->adress = adress;
}

string Librarian::getAdress()
{
	return this->adress;
}

bool Librarian::isWorking()
{
	return this->isWorkExist;
}

void Librarian::accesRequest(Edition* edition)
{
	//условие выдачи
	if (true)
	{
		this->issuedEditions.push_back(edition);
	}
}

void Librarian::addEdition(Edition* edition)
{
	//с помощью проверок полок и шкафов на тематичность находим шкаф, полностью состоящий из одного типа изданий. Если автор или заголовок совпадает,
	//то добавляем туда журнал или книгу с помощью соответствующего метода
}


