#include <iostream>
using namespace std;
int main()
{
	int k = 0;//int的i应该小写，k没有定义
	int i = k + 1;
	cout << i++ << endl;
	i = 1;//i不能多次定义
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}