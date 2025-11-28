#include <iostream>
using namespace std;
int main()
{
	const double PI = 3.1415926;
	int r, h;
	cout << "请输入圆锥的底面半径：";
	cin >> r;
	cout << "请输入圆锥的高：";
	cin >> h;
	double volumn = (1.0 / 3) * PI * r * r * h;
	cout << "圆锥的体积为：" << volumn << endl;
	return 0;
}