#include <iostream>
using namespace std;
int main()
{
	bool l[101] ;
	int i, s;
	for (i = 0; i < 100; i++)
	{
		l[i] = true;
	}
	for (s = 1; s < 100; s++)
	{
		for (i = s; i < 100; i = i + s + 1)
		{
			l[i] = !l[i];
		}
	}
	for (i = 0; i < 100; i++)
	{
		if (l[i] == true)
			cout << i+1 << " ";
	}
	return 0;
}