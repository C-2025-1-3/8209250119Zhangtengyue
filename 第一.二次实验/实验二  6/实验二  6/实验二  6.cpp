#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入两个正整数：";
	cin >> a >> b;
	int c = max(a, b);
	int d = min(a, b);
	while (c % a != 0 || c % b != 0)c++;
	while (a % d != 0 || b % d != 0)d--;
	cout << a << "和" << b << "的最大公约数为" << d << endl;
	cout << a << "和" << b << "的最小公倍数为" << c << endl;
	return 0;
}
