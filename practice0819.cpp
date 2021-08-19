#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>
using namespace std;
//类里面可以定义：1、成员变量 2、成员方法（函数）
class Person
{
	//成员方法
	void showinfo()
	{
		cout << _name << "_" << _age<<"_" << endl;
	}

	//成员变量
	char _name[10];
	int _age;
	char tele[];
	//...
};
class className 
{
	//类体:由成员函数和成员变量组成
}; // 一定要注意后面的分号

class Person 
{
public:
	void PrintPersonInfo();
private:
	char _name[20]; 
	char _gender[3]; 
	int _age;
};
//这里需要指定PrintPersonInfo是属于Person这个类域
void Person::PrintPersonInfo()
{
	cout << _name << " "_gender << " " << _age << endl;
}


//void fun(int n)
//{
//	cout << "整型" << endl;
//}
//void fun(int* p)
//{
//	cout << "整型指针" << endl;
//}
//int main()
//{
//	int* p1 = NULL;//C语言中
//	int* p2 = nullptr;//C++中，推荐这种方式
//	fun(0);
//	fun(NULL);
//	fun(nullptr);
//	return 0;
//}
//int main()
//{
//	int array[] = { 1,2,3,4,5 };
//	for (auto& e : array)
//	{
//		e *= 2;
//	}
//	for (auto e : array)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}
//void Test(int array[])
//{
//	for (auto e : array)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//}

//int main()
//{
//	int array[] = { 1,2,3,4,5 };
//	//将数组中的值乘以2，再打印一遍
//	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
//	{
//		array[i] *= 2;
//	}
//	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
//	{
//		cout << array[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	auto b = a;//b的类型是根据a的类型自动推导出来的
//	int& c = a;
//	auto& d = a;
//	auto* e = &a;
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	cout << typeid(e).name() << endl;
//
//	
//	return 0;
//}

