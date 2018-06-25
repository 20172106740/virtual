// 纯虚函数和抽象函数.cpp : 定义控制台应用程序的入口点。
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
		cout << "基类" << endl;
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
		cout << "派生类" << endl;
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

