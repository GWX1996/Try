#pragma once

class vendingmachine
{
	int timeable;
	int train_number;
	string location;
public:
	vendingmachine();
	~vendingmachine();
	void ChooseTicket();//选票(默认成功)
	string BuyTicket();//买票
	//void Bounce();//退票

	
};



