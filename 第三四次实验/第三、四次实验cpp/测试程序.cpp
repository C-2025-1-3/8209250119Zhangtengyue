#include <iostream>
using namespace std;
#include "mytemperature.h"
int main()
{
	double cel, fah;
	cout << "请输入一个摄氏温度：";
	cin >> cel;
	cout << "转化为华氏温度为：" << celsius_to_fah(cel) << endl;
	cout << "请输入一个华氏温度：";
	cin >> fah;
	cout << "转化为摄氏温度为：" << fahrenheit_to_cels(fah) << endl;
}