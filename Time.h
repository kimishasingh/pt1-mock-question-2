#ifndef TIME_H
#define TIME_H
#pragma once
#include <iostream>

class Time
{
private:
	int hours;
	int mins;
public:
	Time(int hours, int mins);
	~Time();
	void set(int h, int m);
	void get(int &h, int &m);

	Time operator++(int);
	friend std::ostream & operator<<(std::ostream &os, Time &t);
};

#endif
