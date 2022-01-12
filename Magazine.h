#pragma once

#include "Edition.h"

class Magazine : public Edition
{
public:
	void AddContent(string content);
	vector<string> getContent();
	string getType();
private:
	int releaseMonth;
	vector<string> content;
};