#include<iostream>
using namespace std;

int main()
{
	//1.用户输入分数
	int score=0; 
	cout<<"请输入你的分数"<<endl;
	cin>>score;
	//2.确认用户输入的分数 
	cout<<"你输入的分数为："<<score<<endl;
	
	//3.如果分数大于600则考上1本 
	if(score>600)
	{
		cout<<"恭喜你考上了1本"<<endl;
		
	}
	
	//4.如果分数大于500但没有600则去江门小清华 
	else if(score>500)
	{
		cout<<"恭喜你去江门小清华"<<endl;
		
	}
	
	//5.如果分数没有500就去民办本科 
	else if(score>400)
	{
		
		cout<<"恭喜你考上了民办本科"<<endl;
	}
	//6.如果400都没有就回家种地 
	else
	{cout<<"400都没有就回家种地去吧"<<endl;
	}
	
	
	
	
	
	
	
	system("pause");
	return 0;
	
	
}























