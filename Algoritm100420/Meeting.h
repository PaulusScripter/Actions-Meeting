#pragma once
#include "Event.h"
#include <string>
class Meeting :public Event
{
protected:
	string person;
	string place;
public:
	Meeting();
	Meeting(Date d, Time_ t, string person,string place);
	~Meeting();

	void setPerson(string person);
	string getPerson();
	void setPlace(string place);
	string getPlace();

	string toString();
	void show();
	string type();
};

