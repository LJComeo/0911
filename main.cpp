#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int _____main()
{
	string s1;
	string s2("caixukun");
	string s3 = s2;
	string s4(5, '6');

	s4 += s3;

	cout << s1.size() << endl
		 << s2.size() << endl
		 << s3.size() << endl
		 << s4.size() << endl;

	//string::iterator i;
	//for ( i = s1.begin(); i != s1.end(); i++)//C++11的写法
	//{
	//	cout << *i;
	//}

	for (auto & i : s1)//范围for适用于一切有begin与end的类
	{
		cout << i;
	}


	return 0;
}

int __main()
{
	string s1("Hello");

	s1.resize(9);
	s1.push_back('a');

	cout << typeid(s1).name() << endl;
	cout << typeid(s1.c_str()).name() << endl;

	for (size_t i = 0; i < s1.size(); i++)
	{
		cout << s1[i];
	}
	cout << endl;

	for (auto i = s1.begin(); i != s1.end(); i++)
	{
		cout << *i;
	}
	cout << endl;
	for (auto & i : s1)
	{
		cout << i;
	}

	cout << endl << s1 << endl;


	return 0;
}


int main()
{

	string s1;
	s1.append("abc");
	s1.append("def");
	s1.append("ghi");

	s1.append(2, 'c');
	cout << s1 << endl;

	return 0;
}