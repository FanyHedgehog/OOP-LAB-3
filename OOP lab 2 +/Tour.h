#pragma once
#include "Libraries.h"
class Tour{
public:
	string country;
	int lenght;
	int rate;

	Tour(string, int, int, string, string, string, int, int);
	Tour(){};

	string getHotel();
	string getRoomType();
	string getTransport();
	int getPrice();
	int getDepartureDate();

	void setPrice(int);
private:
	string hotel;
	string room_type;
	string transport;
	int price;
	int departure_date;
};