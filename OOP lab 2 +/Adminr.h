#pragma once
#include "Libraries.h"
class Admin{
public:
	string name;
	string surname;
	string position;
	Admin(string, string, string, int, int, int, string, string);
	void AddTour(Tour *);
private:
	int salary;
	int work_experience;
	int age;
	string education;
	string english_level;
};