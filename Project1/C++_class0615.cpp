#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>
using namespace std;

//��ȱʡ���� --- ȱʡ���ֲ���
void Func2(int a, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
int main()
{
	//Func1();���в������� �������
	//cout << "-------------" << endl;
	Func2(1);
	cout << "-------------" << endl;
	Func2(1, 2);
	cout << "-------------" << endl;
	Func2(1, 2, 3);
	cout << "-------------" << endl;
	return 0;
}

////ȫȱʡ����
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


////��Ҫʹ��iostream.h�����ļ��Ѿ��Ҳ�����
//
////���ճ���ϰʹ���У����ں�����������ͻ
//using namespace std; //C++���е����ж������Ƿŵ�std�����ռ��е�
////ȫ��չ���ĺô�������ʹ��  ȱ�㣺�������������Ⱦ
//
//int cout = 10; //���Ʋ���ȷ
//
//int main()
//{
//	std::cout << "hello world"<<endl;
//	int i = 1;
//	double d = 1.1;
//	std::cout << i << " " << d << cout << std::endl;
//	//cout �����Զ�ʶ������ ����Ҫ��printf������Ҫ�����ʽ 
//	return 0;
//}
//void Func(int a = 0)
//{
//	cout << a << endl;
//}