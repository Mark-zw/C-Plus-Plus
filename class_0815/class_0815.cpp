//#include<iostream>
////using namespace std;//C++库中的所有东西都是放到std命名空间中
//using  std::cout;
//using  std::endl;
//int main()
//{
//	cout << "hello world!" << endl;
//	//std::cout << "hello world!"<< std::endl;
//	int i = 1;
//	double d = 1.111;
//	cout << i << endl;
//	cout << d << endl;
//	std::cin >> i;
//	std::cin >> d;
//	cout << i << "\n" << d << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
////全缺省
//void Func1(int a = 0,int b = 1,int c = 2)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}
////半缺省
//void Func2(int a, int b, int c = 30)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}
//int main()
//{
//	Func1();
//	Func2(10,20);
//	cout << "Practice make perfect!\n";
//	return 0;
//}

//#include<iostream>
//using namespace std;
//void  fun(int a, double d)
//{}
//void  fun(double d, int a)
//{}
//void fun(char a,int b)
//{}
//int main()
//{
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	int& ra = a;
	int& c = ra;
	int& b = a;
	cout << "a = " << a << endl;
	cout << "ra = " << ra << endl;
	return 0;
}