#include <iostream>
using namespace std;
int main()
{
	int sum = 1, n;
	for (n = 9; n >= 1; n--)
	{
		sum = (sum + 1) * 2;
	}
		cout << "第一天猴子共摘桃子数为：" << sum << endl;
	return 0;
}
