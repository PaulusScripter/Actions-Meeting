#pragma once
#include "Event.h"
#include <string>
#include <iostream>
class BirthDay : public Event
{
	string hero;
	string place;
	int age;
public:
	BirthDay();
	BirthDay(Date d,Time_ t,string hero, string place, int age);
	~BirthDay();

	void setHero(string hero);
	string getHero();
	void setPlace(string place);
	string getPlace();
	void setAge(int age);
	int getAge();
		
	string type();
	string toString();
	void show();

};

