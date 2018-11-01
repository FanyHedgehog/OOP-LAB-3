#include "Libraries.h"
#include "Tourist.h"
#include "Tour.h"

Tourist::Tourist(string name, string surname, int our_client_since, int age, int id, int card_number, int insurance, int money){
	this->name = name;
	this->surname = surname;
	this->our_client_since = our_client_since;
	this->age = age;
	this->id = id;
	this->card_number = card_number;
	this->insurance = insurance;
	this->money = money;
}
void Tourist::ChooseTour(Tour *tours, string country, int tour_number){//вибір туру,розміщення об'єкта одного класу в другому
	bool is_exist = 0;//взаємодія двох об'єктів
	for (int i = 0; i < tour_number; i++){
		if (tours[i].country == country){
			is_exist = 1;
			cout << "Country: " << tours[i].country << endl;
			cout << "Lenght: " << tours[i].lenght << endl;
			cout << "Rate: " << tours[i].rate << endl;
			cout << "Hotel: " << tours[i].getHotel() << endl;
			cout << "Room_type: " << tours[i].getRoomType() << endl;
			cout << "Transport: " << tours[i].getTransport() << endl;
			cout << "Price: " << tours[i].getPrice() << endl;
			cout << "Departure date: " << tours[i].getDepartureDate() << endl;

			cout << "Confirm order?" << endl;
			bool confirm = 0;
			cin >> confirm;
			if (confirm == true){
				MakeOrder(tours[i]);
				cout << "Order was made" << endl;
			}
			else
				cout << "Order wasn't confirmed" << endl;
		}
	}
	if (is_exist = false){
		cout << "We haven't such tour" << endl;
	}
}
void Tourist::PayForTour(int price){//перевантаження
	if (this->money >= price){
		this->money -= price;
		cout << "Order was done" << endl;
		remove("Order.txt");
	}
	else
		cout << "You havn't enough money" << endl;
}
void Tourist::PayForTour(){//перевантаження
	int price = 300;
	cout << "You are lucky! Today you have discount for this tour. Your prise is 300" << endl;
	if (this->money >= price){
		this->money -= price;
		cout << "Order was done" << endl;
		remove("Order.txt");
	}
	else
		cout << "You havn't enough money" << endl;
}
void Tourist::MakeOrder(Tour tour){//розміщення об'єкта одного класу в другому,метод, що приймає параметром об'єкт класу
	ofstream order_file("Order.txt", ios::app);//запис в файл
	order_file.write((char *)&tour, sizeof(Tour));
	order_file.close();
}
int Tourist::GetOrdersPrice(int count){//перевантаження,робота з об'єктами в масиві
	ifstream order_file("Order.txt");//зчитування з файлу
	Tour *tour = new Tour[count];//динамічна пам'ять
	int price = 0;
	for (int i = 0; i < count; i++){
		order_file.read((char *)&tour[i], sizeof(Tour));
		price += tour[i].getPrice();
	}
	order_file.close();
	remove("Order.txt");
	return price;
}
int Tourist::GetOrdersPrice(){//перевантаження,робота з об'єктами в масиві
	ifstream order_file("Order.txt");
	Tour *tour = new Tour;//розміщення об'єкта одного класу в другому,динамічна пам'ять,масив об'єктів
	int price = 0;
	order_file.read((char *)&tour, sizeof(Tour));
	price = tour->getPrice();//покажчик на об'єкт класу
	order_file.close();
	remove("Order.txt");
	return price;
}
int Tourist::getCardNumber(){
	return card_number;
}
int Tourist::getAge(){
	return age;
}
int Tourist::getId(){
	return id;
}
int Tourist::getInsurance(){
	return insurance;
}
int Tourist::getMoney(){
	return money;
}
void Tourist::setCardNumber(int card_number){
	this->card_number = card_number;
}
void Tourist::RandMemory(){//виділення рандомої пам'яті під цілочисельний масив
	srand(time(0));
	int size = rand() % 100;
	int * mem = new int[size];
	for (int i = 0; i < size; i++){
		mem[i] = rand() % 100;
	}
	/* Отсортируем массив по убыванию */
	for (int i = 1; i < size; ++i)
	{
		for (int r = 0; r < size - i; r++)
		{
			if (mem[r] < mem[r + 1])
			{
				// Обмен местами
				int temp = mem[r];
				mem[r] = mem[r + 1];
				mem[r + 1] = temp;
			}
		}
	}
}
string Tourist::ClassName(){// повертає ім'я класу
	return typeid(*this).name();
}