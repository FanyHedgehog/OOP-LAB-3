#pragma once
#include "Libraries.h"
#include "Tour.h"
class Tourist{
public:
	string name;
	string surname;
	int our_client_since;

	Tourist(string, string, int, int, int, int, int, int);

	void ChooseTour(Tour *, string, int);
	void PayForTour(int);
	void PayForTour();
	void MakeOrder(Tour);
	int GetOrdersPrice();
	int GetOrdersPrice(int);
	int getCardNumber();
	int getAge();
	int getId();
	int getInsurance();
	int getMoney();
	void RandMemory();
	string ClassName();
	void setCardNumber(int);
private:
	int age;
	int id;
	int card_number;
	int insurance;
	int money;
};