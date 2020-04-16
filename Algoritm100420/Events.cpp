#include "Events.h"



Events::Events()
{
}


Events::~Events()
{
}

void Events::delEvent(int target)
{
	List.erase(List.begin()+ target - 1);
}

void Events::addEvent(Event * obj)
{
	List.push_back(obj);
}

void Events::show()
{
	for (int i = 0; i < List.size(); i++){
		List[i]->show();
	}
}

void Events::findEvent(Date event_date, Time_ event_time)
{
	bool is_find = false;
	for (int i = 0; i < List.size(); i++) {
		if (List[i]->getDate() == event_date && List[i]->getTime() == event_time) {
			cout << "Вот ваше событие: ";
			List[i]->show();

			is_find = true;
		}
		//find(List.begin(), List.end(),);
	}
	if (!is_find) {
		cout << "Событие не найдено" << endl;
	}
	
}

void Events::findByType(string typeStr)
{
	cout << "Your`s actions: \n";
	for (int i = 0; i < List.size(); i++) {
		if (List[i]->type() == typeStr) {
			List[i]->show();
		}
		//find(List.begin(), List.end(),);
	}
}
