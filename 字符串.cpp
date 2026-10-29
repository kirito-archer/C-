#include<iostream>
#include<string>//用C++风格字符串时要包含这个头文件 
using namespace std;

int main()
{
	//1.C风格字符串 
	char str[] ="hello world";
	cout << str << endl;
	//2.C++风格字符串 
	string ch ="hello world";
	cout << ch << endl;
	system("pause");
	return 0;
	
}



