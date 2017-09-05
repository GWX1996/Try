#pragma once
class clock
{
	int hour;
	int minuet;
	int second;
public:
	clock();
	~clock();
	void ShowTime();
	void SetTime(int h, int m, int s);
};

