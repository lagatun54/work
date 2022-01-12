#include "Magazine.h"

void Magazine::AddContent(string content)
{
	vector<string>::iterator it = find(this->content.begin(), this->content.end(), content);
	if (it == this->content.end())
		this->content.push_back(content);
}

vector<string> Magazine::getContent()
{
	return this->content;
}

string Magazine::getType()
{
	return "magazine";
}

