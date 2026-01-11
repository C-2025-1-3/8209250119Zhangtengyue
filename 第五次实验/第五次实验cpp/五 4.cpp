#include <iostream>
using namespace std;
class student
{
private:
	long no;
	int score;
public:
	student()
	{
		no = 0;
		score = 0;
	}
	void set()
	{
		cout << "请输入学生学号：" << endl;
		cin >> no;
		cout << "请输入学生成绩：" << endl;
		cin >> score;
		cout << endl;
	}
	long getno()
	{
		return no;
	}
	int getscore()
	{
		return score;
	}
};

void findMaxStudent(student* p[], int n)
{
	int maxIndex = 0;
	for (int i = 1; i < n; i++)
	{
		if (p[i]->getscore() > p[maxIndex]->getscore())
		{
			maxIndex = i;
		}
	}
	cout << "成绩最高的学生学号为：" << p[maxIndex]->getno() << endl;
	cout << "最高成绩为：" << p[maxIndex]->getscore() << endl;
}

int main()
{
	const int STUDENT_NUM = 5;
	student s[STUDENT_NUM];
	student* p[STUDENT_NUM];
	for (int i = 0; i < STUDENT_NUM; i++)
	{
		cout << "请输入第" << i + 1 << "个学生的信息：" << endl;
		s[i].set();
		p[i] = &s[i];
	}
	findMaxStudent(p, STUDENT_NUM);

	return 0;
}
