#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sortArray(int* arr, int size) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int size;
    cout << "请输入数组元素的个数: ";
    cin >> size;
    int* arr = new int[size];
    cout << "请输入" << size << "个数组元素: ";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    sortArray(arr, size);
    cout << "排序后的数组元素为: ";
    for (int* p = arr; p < arr + size; ++p)
    {
        cout << *p << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
