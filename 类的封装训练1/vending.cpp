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
	cout << "��ѡ��ص�" << endl;
	cin >> location;
	cout << "��ѡ����" << endl;
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
		cout << "��Ʊ�ɹ�" << ticket<<endl;
		
		
		return ticket;
	}

}


