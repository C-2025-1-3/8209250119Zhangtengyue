#include <iostream>
using namespace std;
int main()
{
	float x, y, z;
	cout << "请输入三角形的三条边长：" << endl;
	cin >> x >> y >> z;
	if (x + y > z && x + z > y && y + z > x)
	{
		cout << "该三角形周长为" << x + y + z << endl;
		if (x == y || x == z || y == z)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else {
		cout << "此三边不可构成三角形" << endl;
	}
	return 0;
}