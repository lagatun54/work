#pragma once
#include "Librarian.h"
#include "Closet.h"
#include "Edition.h"
class admin
{
public:
	void eraseLibrarian(Librarian *librarian); //������� ������������
	void addLibrarian(); //������ ������������
	void createCloset();// �������� ����
	void deleteCloset(); //������� ����
	void makeClosetThematic(Closet* closet);//�������� ������������ ����
	void addEdition(Edition* edition);// ������ � �������� �������
};