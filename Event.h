#pragma once
#include<string>
#include <list>
using namespace std;
namespace Podii {
	struct date {
		string day;
		string time;
	};


	struct event
	{
		string name;
		string diskription;
		date timing;
		int impotent;
		string type;
		
	};
	list<event>listevent;
	struct kategory {
		string kategoryName;
	};

	list<kategory>listkategory;

	int enterEvent();
    int showEvent();
	int addkategory();
	int showkategory();
}