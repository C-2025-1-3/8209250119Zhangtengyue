#include <iostream>
using namespace std;
int main()
{
	float w = 0;
	int n = 2, i = 1;
	while (true) {
		if (n > 100) {
			break;
		}
		w = w + 0.8 * n;
		i++;
		n = n * 2;
	}
	double a = w / i;
	cout << a << endl;
	return 0;
}