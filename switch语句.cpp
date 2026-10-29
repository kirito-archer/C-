#include<iostream>
using namespace std;

int main()
{
	
	//9~10好电影 
	//7~8还可以 
	//5~6一般般 
	//低于5史
	
	
	//1.提示用户给电影评分 
	int a=0;
	cout<<"请给电影打分:"<<endl;
	//2.用户开始打分 
	cin>>a;
	cout<<"你打的分数为："<<a<<endl;
	//3.根据用户输入的分数来提示用户最后的结果 
	switch(a)
	{
		case 10:
		cout<<"你认为是好电影"<<endl;
		break;
		case 8:
		cout<<"你认为还可以"<<endl;
		break;
		case 6: 
		cout<<"你认为一般"<<endl;
		break;
		default:
		cout<<"这就是史"<<endl;
		break;
		
		
	}
	
	system("pause");
	return 0;
}
