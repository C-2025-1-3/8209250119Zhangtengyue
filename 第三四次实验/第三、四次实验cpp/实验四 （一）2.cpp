#include <iostream>
#include <iomanip>
using namespace std;
void bubbleSort(double list[],int listSize)
{
	bool changed = true;
	do {
		changed = false;
		for(int j=0;j<listSize-1;j++)
			if (list[j]>list[j + 1])
			{
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} 
	while (changed);
}
int main()
{
	const int SIZE = 10;
	double nums[SIZE];
	cout << "请输入十个双精度数字：" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> nums[i];
	}
	bubbleSort(nums, SIZE);
	cout << "排序后的数字为：" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << fixed << setprecision(2) << nums[i] << " ";
	}
	cout << endl;
	return 0;
}