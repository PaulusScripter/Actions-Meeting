#pragma once
#include "Event.h"
#include<iostream>
#include <string>

using namespace std;
class Custom :
	public Event
{
	string description;
public:
	

	Custom();
	Custom(Date d, Time_ t, string description);
	~Custom();

	void setDesc(string description);
	string getDesc();
	virtual void show();
	virtual string type();
	virtual string toString();
};

