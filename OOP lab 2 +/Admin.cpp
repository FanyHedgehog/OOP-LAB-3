#include "Libraries.h"
#include"Adminr.h"
#include"Tour.h"

Admin::Admin(string name, string surname, string position, int salary, int work_experience, int age, string education, string english_level){
	this->name = name;
	this->surname = surname;
	this->position = position;
	this->salary = salary;
	this->work_experience = work_experience;
	this->age = age;
	this->education = education;
	this->english_level = english_level;
}
void Admin::AddTour(Tour *tour_mass){
	Tour tour_ukraine("Ukraine", 10, 4, "HUkraine", "a", "bus", 200, 11);//�������� ���'���
	Tour tour_france("France", 11, 5, "HFrance", "b", "plane", 1000, 15);//�������� ���'���
	tour_mass[0] = tour_ukraine;//������ � ��'������ � �����
	tour_mass[1] = tour_france;//������ � ��'������ � �����
	
}