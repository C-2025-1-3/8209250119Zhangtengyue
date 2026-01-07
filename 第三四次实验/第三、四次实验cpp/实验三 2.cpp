#include <iostream>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1)
		return false;
	if (num == 2)
		return true;
	if (num % 2 == 0)
		return false;
	for (int i = 3; i * i <=num; i+=2)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int prime_count = 0;
	int current_num = 2;
	cout << "前两百个素数为:" << endl;
	while (prime_count < 200)
	{
		if (is_prime(current_num))
		{
			cout << current_num << "\t";
			prime_count++;
			if (prime_count % 10 == 0)
				cout << endl;
		}
		current_num++;
	}
	return 0;
}