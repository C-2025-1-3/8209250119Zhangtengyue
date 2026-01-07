#include <iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	int i = 0;
	while (s[i] != '\0')
	{
		char ch = s[i];
		int index = -1;
		if (ch >= 'A' && ch <= 'Z')
		{
			index = ch - 'A';
		}
		else if (ch >= 'a'&&ch <= 'z')
		{
			index = ch - 'a';
		}
		if (index != -1)
		{
			counts[index]++;
		}
		i++;
	}
}
int main()
{
	char str[1000];
	int counts[26];
	cout << "Enter a string:";
	cin.getline(str, 1000);
	count(str, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] > 0)
		{
			char ch = 'a' + i;
			cout << ch << ":" << counts[i] << "times" << endl;
		}
	}
	return 0;
}