#define _CRT_SECURE_NO_WARNINGS 1 
//#include<iostream>
//using namespace std;
//class Stack {
//public:
//	//��Ա����
//	void Push(int x);
//	void Pop();
//	bool Empty();
//private:
//	//��Ա����
//	int* _array;
//	int _size;
//	int _capacity;
//};
//int main()
//{
//	return 0;
//}

//#include<iostream>
//using namespace std;
////1.��������ܱ���ͨ����
////2.������������������������
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//	void Show()
//	{
//		cout << "Show()" << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = nullptr;
//	//p->PrintA();
//	p->Show();
//	return 0;
//}
//class Time {
//public:
//	Time() {
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//		cout << "Time()" << endl;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};

#include<iostream>
using namespace std;
class Date
{
public:
	//���캯��
	Date(int year = 0, int month = 1, int day = 1) {
		_year = year;
		_month = month;
		_day = day;
		cout << "�Զ����ù��캯��" << endl;
	}
	//��������
	~Date() {
		cout << "�Զ�������������~" << endl;
	}
	void Display()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
		//cout << this->_year << "-" << this->_month << "-" <<this-> _day << endl;
	}

private:
	int _year;//��
	int _month;//��
	int _day;//��
};
int main()
{
	Date d1(2021, 10, 1);
	Date d2;
	d1.Display();
	d2.Display();
	return 0;
}

//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//
////���м��г�Ա���������г�Ա����
//class A1 {
//public:
//	void f1() {}
//private:
//	int _a;
//};
////���н��г�Ա����
//class A2 {
//public:
//	void f2() {}
//};
////����ʲô��û��---����
//class A3
//{};
//
//int main()
//{
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
////��������Զ��壺1����Ա���� 2����Ա������������
//class Person
//{
//	//��Ա����
//	void showinfo()
//	{
//		cout << _name << "_" << _age<<"_" << endl;
//	}
//
//	//��Ա����
//	char _name[10];
//	int _age;
//	char tele[];
//	//...
//};
//class className 
//{
//	//����:�ɳ�Ա�����ͳ�Ա�������
//}; // һ��Ҫע�����ķֺ�
//
//class Person 
//{
//public:
//	void PrintPersonInfo();
//private:
//	char _name[20]; 
//	char _gender[3]; 
//	int _age;
//};
////������Ҫָ��PrintPersonInfo������Person�������
//void Person::PrintPersonInfo()
//{
//	cout << _name << " "_gender << " " << _age << endl;
//}


//void fun(int n)
//{
//	cout << "����" << endl;
//}
//void fun(int* p)
//{
//	cout << "����ָ��" << endl;
//}
//int main()
//{
//	int* p1 = NULL;//C������
//	int* p2 = nullptr;//C++�У��Ƽ����ַ�ʽ
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
//	//�������е�ֵ����2���ٴ�ӡһ��
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
//	auto b = a;//b�������Ǹ���a�������Զ��Ƶ�������
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

