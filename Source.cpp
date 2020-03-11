#include<iostream>
#include "Event.h"
using namespace std;





int main() {
	int a;
	do {
		cout << "1.Add event" << endl;
		cout << "2.Show event" << endl;
		cout << "3.Add kategory" << endl;
		cout << "4.show kategory" << endl;
		cout << "5.Exit" << endl;
		cin >> a;
		switch (a)
		{
		case 1:
			Podii::enterEvent();
			system("cls");
			break;
		case 2:
			Podii::showEvent();
			system("cls");
			break;
		case 3:
			Podii::addkategory();
			system("cls");
			break;
		case 4:
			Podii::showkategory();
			system("cls");
			break;
		case 5:
			return 0;

		}
	} while (a != 5);





}