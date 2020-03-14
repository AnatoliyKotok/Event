#pragma once
#include<string>

using namespace std;

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
	
	struct kategory {
		string kategoryName;
	};



	int enterEvent();
    int showEvent();
	int addkategory();
	int showkategory();
