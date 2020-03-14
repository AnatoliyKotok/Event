#include<iostream>
#include "Event.h"



using namespace std;





int main() {
	int a;
	do {
		system("cls");
		cout << "1.Add event" << endl;
		cout << "2.Show event" << endl;
		cout << "3.Add kategory" << endl;
		cout << "4.show kategory" << endl;
		cout << "5.Exit" << endl;
		cin >> a;
		switch (a)
		{
		case 1:
			enterEvent();
			system("cls");
			break;
		case 2:
			showEvent();
			
			break;
		case 3:
			addkategory();
			
			break;
		case 4:
			showkategory();
			system("cls");
			break;
		case 5:
			return 0;

		}
	} while (a != 5);





}