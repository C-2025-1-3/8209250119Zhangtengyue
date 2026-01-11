#include <iostream>
using namespace std;
class point
{
private:
	int x, y;
public:
	point(int x0 = 60, int y0 = 80)
	{
		x = x0;
		y = y0;
	}
	void setpoint(int i, int j)
	{
		x = 60+ i;
		y = 80 + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	point n;
	int i, j;
	cin >> i >> j;
	n.setpoint(i, j);
	n.display();
	return 0;
}