#include "Libraries.h"
#include "Tour.h"

Tour::Tour(string country, int lenght, int rate, string hotel, string room_type, string transport, int price, int departure_date){
	this->country = country;
	this->lenght = lenght;
	this->rate = rate;
	this->hotel = hotel;
	this->room_type = room_type;
	this->transport = transport;
	this->price = price;
	this->departure_date = departure_date;
}
int Tour::getPrice(){
	return price;
}
void Tour::setPrice(int price){
	this->price = price;
}
string Tour::getHotel(){
	return hotel;
}
string Tour::getRoomType(){
	return room_type;
}
string Tour::getTransport(){
	return transport;
}
int Tour::getDepartureDate(){
	return departure_date;
}