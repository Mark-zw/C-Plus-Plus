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
////��ζ���һ����class��
////��װ
////1�������ݺͷ������嵽һ��
////2��������㿴�������ݶ���ɹ�������publicչʾ��
////������㿴�����ݷ�װ������private��protected���������޶�����
//class Stack //�൱������
//{
//	//1����Ա����
//	//ͨ����Ա���������ʺ��޸ĳ�Ա����
//public:
//	void Push(int x);
//	void Pop();
//	bool Empty();
//
//	//2����Ա����
//private:
//	int* _a;
//	int _size;
//	int _capacity;
//
//};
////1��C������struct����������ṹ���
////2��C++�У�����C��struct����ṹ����÷�������ͬʱsturctҲ�������������ࡣ
////3��C++��ʹ��Class��struct����������� Ĭ�ϵķ����޶�����ͬ classĬ��Ϊprivate structĬ��public
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
//	//�����Զ��庯��
//	ListNode_CPP* CreateNode(int val);
//};
//
//int main()
//{
//	//��ʵ�����������൱�ڶ��������ĳ�Ա����
//	//�൱���������ͼֽȥ�������ķ���
//	Stack s1;
//	Stack s2;
//	Stack s3;
//	//s1.a = nullptr;//private ��Ա����������ֱ�ӷ���
//	s1.Push(1);//Puchֻ��������û�ж���
//	//���������ĺ�����������ַ�ʽ �����涨��  �����涨��
//	return 0;
//}
//
//void Stack::Pop()//��Ҫָ�����������������
//{
//	//...
//}

//int main()
//{
//	cout << "Hello World!" << endl;
//	return 0;
//}
