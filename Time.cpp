#include "Time.h"
#include <iomanip>

using namespace std;

Time::Time(int h = 0, int m = 0) : hours(h), mins(m)
{
	if (h >= 0 && h <= 23 && m >= 0 && m <= 59)
	{
		hours = h;
		mins = m;
	}
	else
		cout << "Error, invalid time. Time set to midnight." << endl;
}


Time::~Time()
{
}

void Time::get(int &h, int &m)
{
	h = Time::hours;
	m = Time::mins;
}

void Time::set(int h, int m)
{
	if (h >= 0 && h <= 23 && m >= 0 && m <= 59)
	{
		hours = h;
		mins = m;
	}
	else
		cout << "Error, invalid time. Time set to midnight." << endl;
}

Time Time::operator++(int)
{
	Time temp(hours, mins);
	
	mins++;
	hours = hours + mins / 60;
	hours = hours % 24;
	mins = mins % 60;
	return temp;
}

ostream & operator << (ostream &os, Time &t)
{
	cout << setfill('0') << setw(2) << t.hours << ":" << setw(2) << t.mins << endl;
	return os;
}
