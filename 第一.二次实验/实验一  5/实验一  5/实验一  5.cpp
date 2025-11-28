#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double f, c;
	cout << "请输入华氏温度：";
	cin >> f;
	c = (f - 32) * 5.0 / 9.0;
	cout << "转化为摄氏温度后为：" << fixed << setprecision(2) << c << endl;
	return 0;
}