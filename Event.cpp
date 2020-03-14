#include "Event.h"
#include<iostream>
#include<Windows.h>
#include <list>

using namespace std;

list<event>listevent;
list<kategory>listkategory;
	int enterEvent()
	{
		event newevent;

		cout << "Enter name for event->";
		cin >> newevent.name;
		cout << "Enter diskription->";
		cin.ignore();
		getline(cin, newevent.diskription);
		cout << "Enter date and time for event" << endl;
		cout << "Day->";
		cin >> newevent.timing.day;
		cout << "Time->";
		cin >> newevent.timing.time;
		do {
			cout << "Enter level impotent for event(1-3)->";
			cin >> newevent.impotent;
			if (newevent.impotent < 0 || newevent.impotent>3) {
				cout << "Wrong parametr! Try agin" << endl;
			}
		} while (newevent.impotent < 0 || newevent.impotent>3);
		cout << "Enter category for your event->";
		cin >> newevent.type;

		listevent.push_back(newevent);
		cout << endl;
		int a;
		cout << "For exit pres 1->";
		cin >> a;
		switch (a)
		{
		case 1:
			return 0;
			break;
		}


		return 0;
	}

	int showEvent()
	{
		system("color 0F");
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		
		for (event item : listevent) {
			if (item.impotent == 1) {
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 14) | 14));
				cout <<"Name event->"<<item.name << endl;
				cout <<"Diskription->"<< item.diskription << endl;
				cout<<"Tyming->"<< item.timing.day << "/" << item.timing.time<<endl;
				cout <<"Level impotent->"<< item.impotent << endl;
				cout <<"Kategory->"<< item.type << endl;
				cout << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 15) | 15));
			}
			if (item.impotent == 2) {
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 6));
				cout << "Name event->" << item.name << endl;
				cout << "Diskription->" << item.diskription << endl;
				cout << "Tyming->" << item.timing.day << "/" << item.timing.time << endl;
				cout << "Level impotent->" << item.impotent << endl;
				cout << "Kategory->" << item.type << endl;
				cout << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 15) | 15));
			}
			if (item.impotent == 3) {
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
				cout << "Name event->" << item.name << endl;
				cout << "Diskription->" << item.diskription << endl;
				cout << "Tyming->" << item.timing.day << "/" << item.timing.time << endl;
				cout << "Level impotent->" << item.impotent << endl;
				cout << "Kategory->" << item.type << endl;
				cout << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 15) | 15));
			}
		}

		int a;
		cout << "For exit pres 1->";
		cin >> a;
		switch (a)
		{
		case 1:
			return 0;
			break;
		}

		system("cls");
	}

	int addkategory()
	{
		kategory newkategory;
		cout << "Enter name kategory->";
		cin >> newkategory.kategoryName;
		listkategory.push_back(newkategory);
		system("cls");
		return 0;
	}

	int showkategory()
	{

		system("color 0F");
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		string name;
		int count = 1;
		for (kategory item : listkategory) {
			
			cout << count ++ << "." << item.kategoryName << endl;
		}
		cout << "Enter name kategori what you want see" << endl;
		cin >> name;
		for (event it : listevent) {
			if (name == it.type) {
				if (it.impotent == 1) {
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 14) | 14));
					cout << "Name event->" << it.name << endl;
					cout << "Diskription->" << it.diskription << endl;
					cout << "Tyming->" << it.timing.day << "/" << it.timing.time << endl;
					cout << "Level impotent->" << it.impotent << endl;
					cout << "Kategory->" << it.type << endl;
					cout << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 15) | 15));
				}
				if (it.impotent == 2) {
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 6));
					cout << "Name event->" << it.name << endl;
					cout << "Diskription->" << it.diskription << endl;
					cout << "Tyming->" << it.timing.day << "/" << it.timing.time << endl;
					cout << "Level impotent->" << it.impotent << endl;
					cout << "Kategory->" << it.type << endl;
					cout << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 15) | 15));
				}
				if (it.impotent == 3) {
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
					cout << "Name event->" << it.name << endl;
					cout << "Diskription->" << it.diskription << endl;
					cout << "Tyming->" << it.timing.day << "/" << it.timing.time << endl;
					cout << "Level impotent->" << it.impotent << endl;
					cout << "Kategory->" << it.type << endl;
					cout << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 15) | 15));
				}
			}
			else if(name!=it.type) {
				cout << "You dont have event in this kategory" << endl;
			}
		}
		int a;
		cout << "For exit pres 1->";
		cin >> a;
		switch (a)
		{
		case 1:
			return 0;
			break;
		}
		system("cls");
		return 0;
	}

