#include <iostream>
using namespace std;

class Test
{
	int m_a;
public:
	Test(int a = 0) :
		m_a(a)
	{

	}

	Test operator ++() //ǰ��++
	{
		m_a++;
		return *this;
	}
	Test operator ++(int) //����++
	{
		Test tmp = *this;//��������Ĭ���Ѿ�����
		m_a++;
		return tmp;
	}
	friend ostream & Test :: operator << (ostream & os, Test & t);
};

ostream & operator << (ostream & os, Test & t)
{
	os << t.m_a << endl;
	return os;
}
int hwTestoperator()
{
	Test t(7);
	cout << t++ << endl;
	cout << t << endl;
	return 0;
}