#include "stdafx.h"
#include "vending.h"


vendingmachine::vendingmachine()
{
}


vendingmachine::~vendingmachine()
{
}

void vendingmachine::ChooseTicket()
{
	cout << "请选择地点" << endl;
	cin >> location;
	cout << "请选择班次" << endl;
	cin >> timeable;

}

string vendingmachine::BuyTicket()
{
	
	int  money=100;
	cout << money << endl;
	int  givemoney;
	string ticket="123456";
	cin >> givemoney;
	while (givemoney == money) {
		cout << "买票成功" << ticket<<endl;
		
		
		return ticket;
	}

}


