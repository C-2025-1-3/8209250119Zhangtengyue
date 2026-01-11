#include <iostream>
using namespace std;
class Time
{
private:
	int hour, minute, sec;
public:
	void set()
	{
		cin >> hour >> minute >> sec;
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.set();
	return 0;
}