#include "Event.h"

Event::Event()
{
	date = Date();
	time = Time_();
}

Event::Event(Date date, Time_ time)
{
	this->date = date;
	this->time = time;
}

Event::~Event(){}

void Event::setDate(Date date)
{
	this->date = date;
}

Date Event::getDate()
{
	return this->date;
}

void Event::setTime(Time_ time)
{
	this->time = time;
}

Time_ Event::getTime()
{
	return this->time;
}

string Event::type()const&
{
	return "Event";
}

bool Event::operator==(const Event& obj) const&
{
	if (this->date == obj.date &&
		this->time == obj.time && 
		this->type() == obj.type()) {
		return true;
}
	else {
		return false;
	}
}
bool Event::operator!=(const Event& obj) const&
{
	if (this->date != obj.date &&
		this->time != obj.time &&
		this->type() != obj.type()) {
		return true;
	}
	else {
		return false;
	}
}
bool Event::operator>(const Event& obj) const&
{
 return !(*this < obj) && *this != obj;;

}
bool Event::operator<(const Event& obj) const&
{
	return !(*this > obj) && *this != obj;
}
bool Event::operator>=(const Event& obj) const&
{
	 return *this > obj || *this == obj;;
}
bool Event::operator<=(const Event& obj) const&
{
 return *this < obj || *this == obj;;
}
//...