#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>
using namespace std;
//��������Զ��壺1����Ա���� 2����Ա������������
class Person
{
	//��Ա����
	void showinfo()
	{
		cout << _name << "_" << _age<<"_" << endl;
	}

	//��Ա����
	char _name[10];
	int _age;
	char tele[];
	//...
};
class className 
{
	//����:�ɳ�Ա�����ͳ�Ա�������
}; // һ��Ҫע�����ķֺ�

class Person 
{
public:
	void PrintPersonInfo();
private:
	char _name[20]; 
	char _gender[3]; 
	int _age;
};
//������Ҫָ��PrintPersonInfo������Person�������
void Person::PrintPersonInfo()
{
	cout << _name << " "_gender << " " << _age << endl;
}


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

