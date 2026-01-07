#include <iostream>
using namespace std;
int getStrLen(const char* str)
{
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return len;
}
int indexof(const char* s1, const char* s2)
{
	int len1 = getStrLen(s1);
	int len2 = getStrLen(s2);
	if (len1 == 0)
		return 0;
	if(len2 < len1)
	{
		return -1;
	}
	for (int i = 0; i <= len2 - len1; i++)
	{
		bool match = true;
		for (int j = 0; j < len1; j++)
		{
			if (s2[i + j] != s1[j])
			{
				match = false;
				break;
			}
		}
		if (match)
			return i;
	}
	return -1;
}
int main()
{
	char s1[100], s2[100];
	cout << "请输入子串s1：";
	cin >> s1;
	cout << "请输入主串s2：";
	cin >> s2;
	int pos = indexof(s1, s2);
	if (pos != -1)
		cout << "s1是s2的子串，第一次匹配的下标为：" << pos << endl;
	else
		cout << "-1" << endl;
	return 0;
}