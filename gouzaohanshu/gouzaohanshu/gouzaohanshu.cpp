// gouzaohanshu.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CComplex {
public:
	double real, imag;
	CComplex()
	{
		real = 10;
		imag = 20;
		cout << "初始构造函数   " << real << "+" << imag << "i" << endl;
	}
	void  setvalue(double r, double i)
	{
		real = r;
		imag = i;
	}
	CComplex(const CComplex & c)
	{
		real = c.real * 2;
		imag = c.imag * 2;
		cout << "复制构造函数   " << real << "+" << imag << "i" << endl;
	}
	void display()
	{
		cout << real << "+" << imag << "i" << endl;
	}
};
CComplex fun(CComplex ot)
{
	ot.display();
	return ot;
}
int main()
{
	CComplex oc1, oc3;
	oc1.display();
	oc1.setvalue(100, 200);
	oc3.display();
	CComplex oc2(oc1);
	oc1.display();
	oc2.display();
	oc3 = fun(oc2);
	oc3.display();
	return 0;
}