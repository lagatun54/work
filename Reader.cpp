#include "Reader.h"

bool Reader::accesRequest(int choice)
{
	if (this->isEditionFound(choice))
	{
		if (this->getAmountOfEditions() < this->getAllowedAmount())
		{
			//отправка запроса библиотекарю и получение ответа
			return true;
		}
		return false;
	}
	return false;
}

bool Reader::isEditionFound(int choice)
{
	/*
	 choice - номер выбора. например, 1 - по имени автора и т.д.
	*/
	return true;
}

void Reader::incAnountOfEditions()
{
	this->amountOfEditions++;
}

void Reader::decAnountOfEditions()
{
	this->amountOfEditions--;
}

int Reader::getAmountOfEditions()
{
	return this->amountOfEditions;
}

void Reader::setAllowedAmount(int amount)
{
	this->allowedAmount = amount;
}

int Reader::getAllowedAmount()
{
	return this->allowedAmount;
}

void Reader::getEdition(Edition *edition)
{
	if (this->accesRequest(1))
		this->editions.push_back(edition);
}

void Reader::returnEdition(Edition* edition)
{
	vector<Edition*>::iterator it = find(this->editions.begin(), this->editions.end(), edition);
	if (it != this->editions.end())
		this->editions.erase(it);
}
