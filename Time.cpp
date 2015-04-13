#include "Time.h"


Time::Time()
{
	hour = 0;
	minute = 0;
}


Time::~Time()
{
}

void Time::get(int *h, int *m)
{
	*h = hour;
	*m = minute;
}

void Time::set(int h, int m)
{
	hour = h;
	minute = m;
}

