#include "Events.h"
int main() {
	int menu = 0;
	int submenu = 0;
	Events myEv;
	Date date;
	Time_ time;
	string str1, str2;
	int a = 0;

	do
	{
		cout << "+==================================+\n";
		cout << "|---------------MENU---------------|\n";
		cout << "+==================================+\n";
		cout << "|                                  |\n";
		cout << "|=========1) ADD NEW EVENT=========|\n";
		cout << "|                                  |\n";
		cout << "|__________________________________|\n";
		cout << "|                                  |\n";
		cout << "|========2) SHOW ALL EVENTS========|\n";
		cout << "|                                  |\n";
		cout << "|__________________________________|\n";
		cout << "|                                  |\n";
		cout << "|==========3) FIND EVENT ==========|\n";
		cout << "|                                  |\n";
		cout << "|__________________________________|\n";
		cout << "|                                  |\n";
		cout << "|=========4) FIND BY TYPE =========|\n";
		cout << "| 4) does not work for some reason |\n";
		cout << "|__________________________________|\n";
		cout << "|                                  |\n";
		cout << "|=============0) EXIT =============|\n";
		cout << "|                                  |\n";
		cout << "+==================================+\n";
		cin >> menu; system("cls");
		switch (menu)
		{
		default: cout << "ERROR!\n";break;
		case 1:
			 cout << "\n+==================================+\n";
			 cout << "\n|           1) Birthday            |\n";
			 cout << "\n|           2) Meeting             |\n";
			 cout << "\n|           3) CUSTOM              |\n";
			 cout << "\n|      0) return to main menu      |\n";
			 cout << "\n+==================================+\n";
			 cin >> submenu; system("cls");
			 switch (submenu)
			 {
			 default: cout << "ERROR!\n"; break;
			 case 1: 
				 cout << "\n+==================================+\n";
				 cout << "|Date:"; cin >> date;
				 cout << "|Time:"; cin >> time;
				 cout << "|Hero:"; cin >> str1;
				 cout << "|Place:"; cin >> str2;
				 cout << "|Age:"; cin >> a;
				 cout << "\n+==================================+\n";
				 myEv.addEvent(new BirthDay(date,time,str1,str2,a)); system("cls"); break;
			 case 2:
				 cout << "\n+==================================+\n";
				 cout << "|Date:"; cin >> date;
				 cout << "|Time:"; cin >> time;
				 cout << "|Person:"; cin >> str1;
				 cout << "|Place:"; cin >> str2;
				 cout << "\n+==================================+\n"; 
				 myEv.addEvent(new Meeting(date, time, str1, str2)); system("cls"); break;
			 case 3:
				 cout << "\n+==================================+\n";
				 cout << "|Date:"; cin >> date;
				 cout << "|Time:"; cin >> time;
				 cout << "|Description:"; cin >> str1;
				 cout << "\n+==================================+\n";
				 myEv.addEvent(new Custom(date, time, str1)); system("cls"); break;
			 case 0:break;
			 }
			break;
		case 2: myEv.show(); break;
		case 3: 
			cout << "Input date of event: ";
			cin >> date;
			cout << "Input time of event: ";
			cin >> time;
			myEv.findEvent(date,time); break;
		case 4:
			cout << "Input type of event: ";
			cin >> str1;
			myEv.findByType(str1); break;
			break;
		case 0:break;
		}
	} while (menu);

	system("pause");
	return 0;
}