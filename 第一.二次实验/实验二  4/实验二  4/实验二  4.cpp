#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    char op;
    cout << "请输入两个数字和一个运算符：";
    cin >> num1 >> num2 >> op;
    if (op == '+')
        cout << "结果为 " << num1 + num2 << endl;
    else if (op == '-')
        cout << "结果为" << num1 - num2 << endl;
    else if (op == '*')
        cout << "结果为 " << num1 * num2 << endl;
    else if (op == '/')
    {
        if (num2 == 0)
            cout << "除数不能为零" << endl;
        else
            cout << "结果为 " << num1 / num2 << endl;
    }
    else if (op == '%')
    {
        if (num2 == 0)
            cout << "除数不能为零" << endl;
        else
            cout << "结果为 " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
    }
    else
        cout << "您输入的为非法运算符 " << endl;
    return 0;
}
