#include<iostream>
using namespace std;
int main()
{
	
	int arr[] ={4,0,2,5,9,8,7,3};
	cout<<"排序前:"<<endl;
	for(int i=0;i<8;i++)//总排列数为总元素数-1 
	{cout<<arr[i]<<" ";
	}
	cout<<endl;
	//开始冒泡排序 
	for(int i=0;i<8-1;i++)
	{
	
	//内层循环对比，次数=元素个数-当前轮数-1 
	for(int j=0;j<8-i-1;j++)
	{if(arr[j]>arr[j+1])
	{int temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
	}
	}
	}
	cout<<"排列后"<<endl;
	for(int i=0;i<8;i++)
	{cout<<arr[i]<<" ";
	
	}
	cout<<endl;
	
	
	
	
	
	
	return 0;
}
