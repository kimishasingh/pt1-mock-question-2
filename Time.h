#pragma once
class Time
{
private:
	int hour;
	int minute;
public:
	Time();
	~Time();
	void set(int h, int m);
	void get(int *h, int *m);
};

