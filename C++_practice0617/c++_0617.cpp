#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//��ȱʡ���� --- ȱʡ���ֲ���
void Func2(int a = 10 , int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
int main()
{
	//Func1();���в������� �������
	//cout << "-------------" << endl;
	//Func2(1);
	cout << "-------------" << endl;
	Func2(1, 2);
	cout << "-------------" << endl;
	Func2(, , 3);
	cout << "-------------" << endl;
	return 0;
}

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
