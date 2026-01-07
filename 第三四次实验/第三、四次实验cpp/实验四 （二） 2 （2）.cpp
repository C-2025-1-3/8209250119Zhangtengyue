#include <iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int result = 0;
	for (int i = 0; hexString[i] != '\0'; i++)
	{
		char c = hexString[i];
		int val;
		if (c >= '0' && c <= '9')
		{
			val = c - '0';
		}
		else if (c>='A' && c <= 'F')
		{
			val = 10 + (c - 'A');
		}
		else if (c >= 'a' && c <= 'f')
		{
			val = 10 + (c - 'a');
		}
		else
		{
			return -1;
		}
		result = result * 16 + val;
	}
	return result;
}
int main()
{
	char hexStr[100];
	cout << "";
	cin >> hexStr;
	int decNum = parseHex(hexStr);
	if (decNum == -1)
	{
		cout << "输入的十六进制字符串包含非法字符！" << endl;
	}
	else
	{
		cout << "转换后的十进制数为：" << decNum << endl;
	}
	cout<<"测试parseHex(\"A5\")的结果" << parseHex("A5") << endl;
	return 0;
}