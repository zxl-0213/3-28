#include<iostream>
#include<string>
using namespace std;

void Text1()
{
	string s1;
	string s2("hello");
	string s3 = s2;
	string s4(s2, 1, 8);
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;

}

void Text2()
{
	string s1;
	string s2("hello");
	s1 = s2;
	s1 += " ";
	s1 += "world";
	cout << s1 << endl;
	cout << s2 << endl;
	for (int i = 0; i < s2.size(); i++)
	{
		cout << s2[i] << endl;
	}
}


void Text3()
{
	string s1;
	string s2("hello");
	//[]下标遍历
	for (int i = 0; i < s2.size(); i++)
	{
		s2[i] += 1;
		cout<<s2[i];
	}
	cout << endl;
	//迭代器遍历
	string::iterator it = s2.begin();
	while (it != s2.end())
	{
		*it -= 1;
		cout<<*it;
		it++;
	}
	cout << endl;
	//范围for
	for (auto ch : s2)
	{
		cout << ch;
	}
	cout << endl;

	//倒着遍历
	//string::reverse_iterator rit = s2.rbegin();
	auto rit = s2.rbegin();
	while (rit != s2.rend())
	{
		cout << *rit;
		rit++;
	}
	cout << endl;
}

int  string2int(const string& s)
{
	int val = 0;
	 string::const_iterator it = s.begin();
	 while (it != s.end())
	 {
		 val *= 10;
		 val += (*it - '0');
		 it++;
	 }
	 return val;
}

void text4()
{
	string s1("hello");
	int pos=s1.find('l');
	if (pos != string::npos)
	{
		cout << pos << endl;
	}
	string url=("https://www.bilibili.com/");
	int i1 = url.find(':');
	if (i1 != string::npos)
	{
		cout << url.substr(0, i1) << endl;
	}

	int i2 = url.find('/', i1 + 3);
	if (i2 != string::npos)
	{
		cout << url.substr(i1+3,i2-i1-3) << endl;
	}
}

int main()
{
	//Text1();
	//Text2();
	//Text3();
	//string s1("12345");
	//cout << string2int(s1) << endl;
	//cout << s1.c_str() << endl;//这里是系统自己调用了const char*输出的，遇到\0就停止。
	//cout <<s1 << endl;        //这里是调用了string重载<<。将对象数组中所有数据都输出

	text4();
	return 0;
}