#include "BirthDay.h"



BirthDay::BirthDay()
{
	hero = "none";
	place = "none";
	age = 0;
}

BirthDay::BirthDay(Date d, Time_ t, string hero, string place, int age)
	:Event(d,t)
{
	this->hero = hero;
	this->place = place;
	this->age = age;
}


BirthDay::~BirthDay()
{
}

void BirthDay::setHero(string hero)
{
	if(hero.empty())
		throw "Hero �� ����� ���� ������";
	this->hero = hero;
}

string BirthDay::getHero()
{
	return hero;
}

void BirthDay::setPlace(string place)
{
	if (place.empty())
		throw "Hero �� ����� ���� ������";
	this->place = place;
}

string BirthDay::getPlace()
{
	return place;
}

void BirthDay::setAge(int age)
{
	if (age < 0)
		throw "������� �� ����� ���� �������������";
	this->age = age;
}

int BirthDay::getAge()
{
	return age;
}

string BirthDay::type()
{
	return "Birthday";
}

string BirthDay::toString()
{
	return "{date: " + to_string(date.getDay()) + "-" + to_string(date.getMonth()) + "-" + to_string(date.getYear()) +
		"; time:" + to_string(time.getHour()) + "," + to_string(time.getMinutes()) + "; hero:" + hero + " " + "Palce:" + place + " " +"Age:" + to_string(age) + "}";
}

void BirthDay::show()
{
	cout << "+======================+\n";
	cout << "�� ����� ��� ��������: " << hero << endl;
	cout << "�����: " << place << endl;
	cout << "�������: " << age << endl;
	cout << "����: " << date << endl;
	cout << "�����: " << time << endl;
	cout << "+======================+\n";
}
