// 类的封装2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "clock.h"

int main()
{
	clock c1;
	;
	c1.SetTime(11, 20, 30);
	c1.ShowTime();
	c1.SetTime(21, 11, 00);
	c1.ShowTime();
    return 0;
}

