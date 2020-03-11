#include "Event.h"
#include<iostream>
#include<string>
#include <list>
#include<Windows.h>

using namespace std;
namespace Podii {
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
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
				cout << "Event name->" << item.name << endl;
				cout << "Diskription->" << item.diskription << endl;
				cout << "Day and time->" << item.timing.day << ";" << item.timing.time << endl;
				cout << "level importent->" << item.impotent << endl;
				cout << "Category for event->" << item.type << endl;
				cout << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 15) | 15));
			}
			if (item.impotent == 2) {
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 6));
				cout << "Event name->" << item.name << endl;
				cout << "Diskription->" << item.diskription << endl;
				cout << "Day and time->" << item.timing.day << ";" << item.timing.time << endl;
				cout << "level importent->" << item.impotent << endl;
				cout << "Category for event->" << item.type << endl;
				cout << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 15) | 15));
			}
			if (item.impotent == 3) {
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
				cout << "Event name->" << item.name << endl;
				cout << "Diskription->" << item.diskription << endl;
				cout << "Day and time->" << item.timing.day << ";" << item.timing.time << endl;
				cout << "level importent->" << item.impotent << endl;
				cout << "Category for event->" << item.type << endl;
				cout << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 15) | 15));
			}
		}

		return 0;
	}

	int addkategory()
	{
		kategory newkategory;
		cout << "Enter name for new kategory->";
		cin >> newkategory.kategoryName;
		listkategory.push_back(newkategory);
		int a;
		do {
			cout << "For exit pres 1->";
			cin >> a;
			switch (a)
			{
			case 1:
				return 0;
				break;
			}
		} while (a != 1);


	}

	int showkategory()
	{
		system("color 0F");
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		int i = 1;
		for (kategory item : listkategory) {
			cout << "\tName kategoris" << endl;
			cout << i + 1 << "." << item.kategoryName << endl;

		}
		cout << endl;
		string name;
		cout << "Enter name kategory what you want to see->";
		cin >> name;
		for (event it : listevent) {
			if (name == it.type) {
				if (it.impotent == 1) {
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 2) | 2));
					cout << "Event name->" << it.name << endl;
					cout << "Diskription->" << it.diskription << endl;
					cout << "Day and time->" << it.timing.day << ";" << it.timing.time << endl;
					cout << "level importent->" << it.impotent << endl;
					cout << "Category for event->" << it.type << endl;
					cout << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 15) | 15));
				}
				if (it.impotent == 2) {
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 6));
					cout << "Event name->" << it.name << endl;
					cout << "Diskription->" << it.diskription << endl;
					cout << "Day and time->" << it.timing.day << ";" << it.timing.time << endl;
					cout << "level importent->" << it.impotent << endl;
					cout << "Category for event->" << it.type << endl;
					cout << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 15) | 15));
				}
				if (it.impotent == 3) {
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
					cout << "Event name->" << it.name << endl;
					cout << "Diskription->" << it.diskription << endl;
					cout << "Day and time->" << it.timing.day << ";" << it.timing.time << endl;
					cout << "level importent->" << it.impotent << endl;
					cout << "Category for event->" << it.type << endl;
					cout << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 15) | 15));
				}
			}
		}
		int a;
		do {
			cout << "For exit pres 1->";
			cin >> a;
			switch (a)
			{
			case 1:
				return 0;
				break;
			}
		} while (a != 1);
	}
}
