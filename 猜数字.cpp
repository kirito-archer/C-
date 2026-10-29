#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	//1.生成一个随机数 
	//添加随机数种子
	srand((unsigned int)time(NULL)); 
	int a =rand() %101;   //生成一个0~100的随机数 
	//2.玩家进行猜测 
	cout<<"请输入你所猜的数字："<<endl;
	int num=0;
	while(1)
	{
	cin>>num;
	//3.判断数字过大还是过小
	if(num>a)
	{
		cout<<"过大"<<endl;
	}
	else if(num<a)
	{  cout<<"过小"<<endl;
		}	
		
		else
		
		{
		cout<<"猜对了"<<endl;
		break;}
		
		
		
		
	
	}// 猜对退出游戏 
	//猜错提示过大或过小并返回第二步 
	
	
	
	system("pause");
	return 0;
}
