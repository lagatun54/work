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
	//������� ������
	if (true)
	{
		this->issuedEditions.push_back(edition);
	}
}

void Librarian::addEdition(Edition* edition)
{
	//� ������� �������� ����� � ������ �� ������������ ������� ����, ��������� ��������� �� ������ ���� �������. ���� ����� ��� ��������� ���������,
	//�� ��������� ���� ������ ��� ����� � ������� ���������������� ������
}


