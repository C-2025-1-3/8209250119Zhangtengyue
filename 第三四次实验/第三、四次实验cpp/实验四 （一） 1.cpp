#include <iostream>
using namespace std;
int main()
{
	int num[10], i, j;
	bool y[10] = { true };
	cout << "Enter ten numbers£º";
	for (i = 0; i < 10; i++)
	{
		cin >> num[i];
		y[i] = true;
	}
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (num[j] == num[i])
			y[j] = false;
		}
	}
	cout << "The distinct numbers are:";
	for (i = 0; i < 10; i++)
	{
		if(y[i])
			cout << num[i] << " ";
	}
	cout << endl;
	return 0;
}