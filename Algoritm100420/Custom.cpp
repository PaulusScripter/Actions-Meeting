#include "Custom.h"



Custom::Custom()
{
	description = "Day1";
}

Custom::Custom(Date d, Time_ t, string description)
:Event(d,t)
{
	if(description==" "|| description == ""|| description.empty()==true){
		throw "Пустая строка для описания";
	}else{
	this->description = description;
	}
}


Custom::~Custom()
{
}

void Custom::setDesc(string description)
{
	if (description == " " || description == "" || description.empty() == true) {
		throw "Пустая строка для описания";
	}
	else {
		this->description = description;
	}
}

string Custom::getDesc()
{
	return this->description;
}

void Custom::show()
{
	cout << "Descrcription: " << description << endl;
}

string Custom::type()
{
	return "custom";
}

string Custom::toString()
{
	return "{date: "+to_string(date.getDay())+"-"+ to_string(date.getMonth())+"-" + to_string(date.getYear())+"}"
		+"{time: " + to_string(time.getSeconds()) + "-" + to_string(time.getMinutes()) + "-" + to_string(time.getHour())+"}"
		+"Description: "+description;
}
