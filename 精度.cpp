#include<iostream>
using namespace std;

int main(){
	//1. 单精度 float 
	//2. 双精度double 
	//3. 默认情况下输出一位小数会显示出6位有效数字 
	float f1 = 3.14f;
	
	cout << "f1=" << f1 << endl;
	double d1 = 3.14;
	cout << "d1=" << d1 << endl;
	//统计float和double所占字节数
	cout << "float占用内存空间位；" << sizeof(float) << endl;
	cout << "double占用内存空间为；" << sizeof(double) << endl; 
	// 科学技术法
	float f2 = 3e2; //3*10^2
	cout << "f2=" << f2 << endl;
	float f3 = 3e-2;//3*0.1^2
	cout << "f3=" << f3 << endl;
	
	
	system("pause");
	return 0;
}
