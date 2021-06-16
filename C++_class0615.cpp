#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>
using namespace std;

//半缺省参数 --- 缺省部分参数
void Func2(int a, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
int main()
{
	//Func1();所有参数不传 程序错误
	//cout << "-------------" << endl;
	Func2(1);
	cout << "-------------" << endl;
	Func2(1, 2);
	cout << "-------------" << endl;
	Func2(1, 2, 3);
	cout << "-------------" << endl;
	return 0;
}

////全缺省参数
//void Func1(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	Func1();
//	cout << "-------------" << endl;
//	Func1(1);
//	cout << "-------------" << endl;
//	Func1(1, 2);
//	cout << "-------------" << endl;
//	Func1(1, 2, 3);
//	cout << "-------------" << endl;
//	return 0;
//}


////不要使用iostream.h，该文件已经找不到了
//
////在日常练习使用中，不在乎跟库命名冲突
//using namespace std; //C++库中的所有东西都是放到std命名空间中的
////全部展开的好处：方便使用  缺点：容易造成命名污染
//
//int cout = 10; //名称不明确
//
//int main()
//{
//	std::cout << "hello world"<<endl;
//	int i = 1;
//	double d = 1.1;
//	std::cout << i << " " << d << cout << std::endl;
//	//cout 可以自动识别类型 不需要像printf那样需要输出格式 
//	return 0;
//}
//void Func(int a = 0)
//{
//	cout << a << endl;
//}