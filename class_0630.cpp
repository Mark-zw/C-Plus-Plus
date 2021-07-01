#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>
using namespace std;
class Date
{
public:
	void Init(int year, int month, int day)//void Init(Date* this,int year,int month,int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Print()//void Print(Date* this)
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1;
	d1.Init(2021, 6, 30);//Init(&d1,2021,6,30)
	d1.Print();//Print(&d1)
	return 0;
}
//#include<iostream>
//using namespace std;
//
////如何定义一个类class？
////封装
////1、将数据和方法定义到一起
////2、把想给你看到的数据定义成公有类型public展示，
////不想给你看的内容封装起来（private、protected），访问限定符。
//class Stack //相当于声明
//{
//	//1、成员函数
//	//通过成员函数来访问和修改成员变量
//public:
//	void Push(int x);
//	void Pop();
//	bool Empty();
//
//	//2、成员变量
//private:
//	int* _a;
//	int _size;
//	int _capacity;
//
//};
////1、C语言中struct是用来定义结构体的
////2、C++中，兼容C的struct定义结构体的用法，但是同时sturct也可以用来定义类。
////3、C++中使用Class和struct定义类的区别？ 默认的访问限定符不同 class默认为private struct默认public
//
//struct ListNode_C
//{
//	int val;
//	struct ListNode_C* _next;
//	struct ListNode_C* _prev;
//};
//
//struct ListNode_CPP
//{
//	int val;
//	struct ListNode_CPP* next;
//	ListNode_CPP* _prev;
//	//还可以定义函数
//	ListNode_CPP* CreateNode(int val);
//};
//
//int main()
//{
//	//类实例化出对象，相当于定义出了类的成员变量
//	//相当于拿着设计图纸去建造具体的房子
//	Stack s1;
//	Stack s2;
//	Stack s3;
//	//s1.a = nullptr;//private 成员不能在外面直接访问
//	s1.Push(1);//Puch只是声明，没有定义
//	//类中声明的函数定义的两种方式 类里面定义  类外面定义
//	return 0;
//}
//
//void Stack::Pop()//需要指明函数所属类的名称
//{
//	//...
//}

//int main()
//{
//	cout << "Hello World!" << endl;
//	return 0;
//}
