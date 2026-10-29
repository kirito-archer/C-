#include<iostream>
using namespace std;
int main()
{
	//1.数据类型  数组名【数组长度】； 
	
	int arr1[5];
	arr1[0] = 10;
	cout<<arr1[0]<<endl;
	
	//2.数据类型  数组名【数组长度】={值1，值2....}；
	int arr2[5]={10,20,30,40,50};
	//cout<<arr2[0]<<endl;
	for(int i=0;i<5;i++)
	cout<<arr2[i]<<endl; 
	//3.数据类型  数组名【】={值1，值2.... }； 
	int arr3[]={90,80,70,60,50,40,30,20};
	cout<<arr3[2]<<endl;
	
	
	
	
	
	
	
	return 0;
}
