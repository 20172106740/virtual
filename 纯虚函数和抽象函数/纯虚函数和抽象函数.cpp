// ���麯���ͳ�����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CBate
{
public:
	virtual void test() = 0;
	virtual void display()
	{
		cout << "����" << endl;
	}
};
class CFervid :public CBate
{
public:
	void test()
	{

	}
	void display()
	{
		cout << "������" << endl;
	}
};
int main()
{
	CBate *p;
	CFervid obj2;
	p=&obj2;
	p->display();
	p->CBate::display();
	return 0;
}

