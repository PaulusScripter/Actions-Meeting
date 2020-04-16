#pragma once
#include "BirthDay.h"
#include "Custom.h"
#include "Meeting.h"
#include "Event.h"
#include <vector>
#include <algorithm>
class Events
{
protected:
    vector <Event*> List;



public:
    Events();
    ~Events();




    void delEvent(int target);
    void addEvent(Event* obj);
    void show();
    void findEvent(Date event_date, Time_ event_time);
    void findByType(string typeStr);
};