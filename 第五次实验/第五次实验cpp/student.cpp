#include <iostream>
#include"student.h"
using namespace std;
void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::set_value()
{
	num = 0;
	strcpy_s(name, "aaaa");
	sex = 'a';
}
Student::Student(int Num, const char Name[20], char Sex)
{
	num = Num;
	strcpy_s(name, Name);
	sex = Sex;
}
Student::Student()
{
	set_value();
}