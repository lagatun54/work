#pragma once
#include "Librarian.h"
#include "Closet.h"
#include "Edition.h"
class admin
{
public:
	void eraseLibrarian(Librarian *librarian); //уволить библиотекаря
	void addLibrarian(); //нанять библиотекаря
	void createCloset();// добавить шкаф
	void deleteCloset(); //удалить шкаф
	void makeClosetThematic(Closet* closet);//выделить тематический шкаф
	void addEdition(Edition* edition);// купить и принести издание
};