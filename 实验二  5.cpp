#include <iostream>
using namespace std;
int main()
{
	char p;
	int lettercount = 0, space = 0, digit = 0, othercount = 0;
	cout << "请输入一段字符：";
	while ((p = getchar()) != '\n')
	{
		if ((p >= 'a' && p <= 'z') || (p >= 'A' && p <= 'Z'))
		{
			lettercount++;
		}
		else if (p == ' ')
		{
			space++;
		}
		else if (p >= '0' && p <= '9')
		{
			digit++;
		}
		else
		{
			othercount++;
		}
	}
	cout << "英文字母的个数为：" << lettercount << endl;
	cout << "空格的个数为：" << space << endl;
	cout << "数字的个数为：" << digit << endl;
	cout << "其他字符的个数为：" << othercount << endl;
	return 0;
}