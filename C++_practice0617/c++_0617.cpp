#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
void Swap1(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}
void Swap(int* pa, int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 1;
	int b = 2;
	Swap(&a, &b);
	cout << a << " " << b << endl;
	return 0;
}

//int main()
//{
//	int i = 1;
//	double d = i;//��ʽ����ת��
//	double& ri = i;//��������ȡ������
//	const double& rri = i;//�����أ�
//	return 0;
//}
//
//const int a = 10;
//int& b = a;//�����ǲ��еģ�b��a�ı���
// 
//const int x = 10;
//int y = x;//�����ǿ��Եģ�y��xûʲô��ϵ
//
//const int a = 10;
//int* p = &a;//���ֲ��У�Ȩ�޵ķŴ�
//const int* pa = &a;//��Ҫ������ʽ
//
//int c = 1;
//const int* pc = &c;//���ԣ�����Ȩ�޵���С

//int main() 
//{
//	int a = 10;
//	int& ra = a;
//	ra = 20;
//	int* pa = &a;
//	*pa = 20;
//	return 0;
//}

//int main() 
//{
//	int a = 10; int& ra = a;
//	cout << "&a = " << &a << endl; 
//	cout << "&ra = " << &ra << endl;
//	return 0;
//}


//#include <time.h>
//struct A 
//{ 
//	int a[10000]; 
//};
//A a;
//
//A TestFunc1() 
//{
//	return a;
//}
//A& TestFunc2() 
//{
//	return a;
//}
//void TestRefAndValue() 
//{
//	A a;
//	//��ֵ��Ϊ�����ķ���ֵ����
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 1000000; ++i)
//		TestFunc1();
//	size_t end1 = clock();
//
//	//��������Ϊ�����ķ���ֵ����
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 1000000; ++i)
//		TestFunc2();
//	size_t end2 = clock();
//
//	//�ֱ���������������н������ʱ��
//	cout << "TestFunc1()-time : " << end1 - begin1 << endl;
//	cout << "TestFunc2()-time: " << end2 - begin2 << endl;
//}
//int main()
//{
//	TestRefAndValue();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int& Add(int a, int b) 
//{
//	int c = a + b; 
//	return c;
//}
//int main()
//{
//	int& ret = Add(1,2);
//	Add(3,4);
//	cout << "Add(1��2) is : " << ret << endl;
//	return 0;
//}


//void Swap(int& left, int& right) 
//{
//	int temp = left; 
//	left = right; 
//	right = temp;
//}
//int& Count() 
//{
//	static int n = 0;
//	n++;
//	// ...
//	return n;
//}


//void TestConstRef() 
//{
//	const int a = 10;
//	//int& ra = a;//��������ʱ�����aΪ����
//	const int& ra = a;
//	//int& b = 10;//��������ʱ�����bΪ����
//	const int& b = 10;
//	double d = 12.34;
//	//int& rd = d;l/��������ʱ��������Ͳ�ͬ
//	const int& rd = d;
//}
//
//#include<iostream>
//using namespace std;
//void TestRef()
//{
//	int a = 10;
//	int b = 20;
//	//int& ra;//����������ʱ�ᱨ��
//	int& ra = a;//�������ñ�����ʱ�����Ҫ���丳��ʼֵ
//	int& rra = a;//һ�����������ж������
//	ra = b;
//
//	cout << a << endl;
//	cout << ra << endl;
//	cout << rra << endl;
//}
//int main()
//{
//	TestRef();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int Add(int x, int y)
//{
//	return x + y;
//}
//double Add(double x, double y)
//{
//	return x + y;
//}
//long Add(long x, long y)
//{
//	return x + y;
//}
//int main()
//{
//	cout << Add(1, 2) << endl;
//	cout << Add(1.1, 2.2) << endl;
//	cout << Add(10L, 20L) << endl;
//	return 0;
//}
//
//int Add(short x, short y)
//{
//	return x + y;
//}
//short Add(short x, short y)
//{
//	return x + y;
//}
//
//void TestFunc(int a = 10) 
//{
//	cout << "void TestFunc (int) " << endl;
//}
//void TestFunc(int a) 
//{
//	cout << "void TestFunc(int) " << endl;
//}

//#include<iostream>
//using namespace std;
//
////��ȱʡ���� --- ȱʡ���ֲ���
//void Func2(int a = 10 , int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	//Func1();���в������� �������
//	//cout << "-------------" << endl;
//	//Func2(1);
//	cout << "-------------" << endl;
//	Func2(1, 2);
//	cout << "-------------" << endl;
//	Func2(, , 3);
//	cout << "-------------" << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//// int a = 0 �ڶ����βε�ʱ������ʼֵ ��ʱa����ȱʡ����
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//int main()
//{
//	Func();//ʵ��Ϊ�յ�ʱ�򣬾ͻ�ʹ��ȱʡ������ֵ
//	Func(10);//ʵ�β�Ϊ�յ�ʱ��ʹ��ʵ�ε�ֵ
//	return 0;
//}

//#include<iostream>//input/output stream ���������
//using namespace std; //C++�������ж������Ƿŵ�std��������ռ��е�
//int main()
//{
//	int i = 1;
//	double d = 2.22;
//	cin >> i >> d;//��ʾ�ӿ���̨����i��d�Ŀռ�ȥ
//	cout << i << "  " << d << endl;
//	return 0;
//}

//int main()
//{
//	cout << "hello world\n";//������\n����
//	//cout--����� ������⣺����˳�� << ���뵽cout������̨��ʾ�ڿ���
//	cout << "hello world" << endl;//Ҳ������<<endl���� C++���Ƽ����
//	return 0;
//}

//#include<iostream>
//namespace N
//{
//	int a = 10;
//	int b = 20;
//	int Add(int x, int y)
//	{
//		return x + y;
//	}
//	int Mul(int x, int y)
//	{
//		return x * y;
//	}
//}
//using namespace N;//ʹ��using namespace �����ռ��������룬����������ȫչ��
//int main()
//{
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//namespace N1  //N1�������ռ������
//{
//	//�û�����{ }�������ռ�����ݰ�����
//	//�����ռ�����ݣ������Զ��������Ҳ���Զ��庯��
//	int a;
//	int Add(int x, int y)
//	{
//		return x + y;
//	}
//	int Mul(int x, int y)
//	{
//		return x * y;
//	}
//}
//
//namespace N1  //�ٴζ��������ռ� N1
//{
//	int Mul(int x, int y)
//	{
//		return x * y;
//	}
//}
//
//namespace N2
//{
//	int a;
//	int b;
//	int Add(int x, int y)
//	{
//		return x + y;
//	}
//	namespace N3  //�����ռ��Ƕ�׶���
//	{
//		int c;
//		int d;
//		int Sub(int x, int y)
//		{
//			return x - y;
//		}
//	}
//}


//#include<iostream> //iostrem  ����C++�����������  
//using namespace std;//C++�������ж������Ƿŵ�std��������ռ��е�
////3��ʹ�÷�ʽ   1��ȫչ�����ô���ʹ�÷��㣬�����ǿ��е�����ȫ��չ���������������������ͬ������ʱ���ͻ��ͻ��
//
//
//int main()
//{
//	return 0;
//}
