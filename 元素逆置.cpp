#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,3,2,5,4};
	cout<<"元素逆置前："<<endl;
	for(int i=0;i<5;i++)
	{cout<<arr[i]<<endl;
	}
	int start = 0;
	int end =(sizeof(arr)/sizeof(arr[0]))-1;
	while(start<end)
	{int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;//实现元素互换
	//下标更新
	start++;
	end--; 
	}
	cout<<"元素逆置后："<<endl;
	for(int i=0;i<5;i++)
	{cout<<arr[i]<<endl;
	}
	
	
	return 0;
}
