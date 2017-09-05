#include "stdafx.h"
#include "clock.h"


clock::clock()
{
}


clock::~clock()
{
}

void clock::ShowTime()
{
	cout << hour << ":" << minuet << ":" << second <<endl;
	
}
void clock::SetTime(int h, int m, int s)
{
	hour = h;
	minuet = m;
	second = s; 
}
