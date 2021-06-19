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
//	double d = i;//隐式类型转换
//	double& ri = i;//可以这样取别名吗？
//	const double& rri = i;//这样呢？
//	return 0;
//}
//
//const int a = 10;
//int& b = a;//这种是不行的，b是a的别名
// 
//const int x = 10;
//int y = x;//这种是可以的，y和x没什么关系
//
//const int a = 10;
//int* p = &a;//这种不行，权限的放大
//const int* pa = &a;//需要这种形式
//
//int c = 1;
//const int* pc = &c;//可以，属于权限的缩小

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
//	//以值作为函数的返回值类型
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 1000000; ++i)
//		TestFunc1();
//	size_t end1 = clock();
//
//	//以引用作为函数的返回值类型
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 1000000; ++i)
//		TestFunc2();
//	size_t end2 = clock();
//
//	//分别计算两个函数运行结束后的时间
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
//	cout << "Add(1，2) is : " << ret << endl;
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
//	//int& ra = a;//该语句编译时会出错，a为常量
//	const int& ra = a;
//	//int& b = 10;//该语句编译时会出错，b为常量
//	const int& b = 10;
//	double d = 12.34;
//	//int& rd = d;l/该语句编译时会出错，类型不同
//	const int& rd = d;
//}
//
//#include<iostream>
//using namespace std;
//void TestRef()
//{
//	int a = 10;
//	int b = 20;
//	//int& ra;//该条语句编译时会报错
//	int& ra = a;//定义引用变量的时候就需要给其赋初始值
//	int& rra = a;//一个变量可以有多个引用
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
////半缺省参数 --- 缺省部分参数
//void Func2(int a = 10 , int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	//Func1();所有参数不传 程序错误
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
//// int a = 0 在定义形参的时候给其初始值 此时a就是缺省参数
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//int main()
//{
//	Func();//实参为空的时候，就会使用缺省参数的值
//	Func(10);//实参不为空的时候，使用实参的值
//	return 0;
//}

//#include<iostream>//input/output stream 输入输出流
//using namespace std; //C++库中所有东西都是放到std这个命名空间中的
//int main()
//{
//	int i = 1;
//	double d = 2.22;
//	cin >> i >> d;//表示从控制台流向i和d的空间去
//	cout << i << "  " << d << endl;
//	return 0;
//}

//int main()
//{
//	cout << "hello world\n";//可以用\n换行
//	//cout--输出流 流的理解：内容顺着 << 流入到cout（控制台显示黑框）中
//	cout << "hello world" << endl;//也可以用<<endl换行 C++更推荐这个
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
//using namespace N;//使用using namespace 命名空间名称引入，将所有名称全展开
//int main()
//{
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//namespace N1  //N1是命名空间的名称
//{
//	//用花括号{ }将命名空间的内容包起来
//	//命名空间的内容，即可以定义变量，也可以定义函数
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
//namespace N1  //再次定义命名空间 N1
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
//	namespace N3  //命名空间的嵌套定义
//	{
//		int c;
//		int d;
//		int Sub(int x, int y)
//		{
//			return x - y;
//		}
//	}
//}


//#include<iostream> //iostrem  就是C++的输入输出流  
//using namespace std;//C++库中所有东西都是放到std这个命名空间中的
////3种使用方式   1、全展开，好处是使用方便，坏处是库中的内容全部展开，若定义与库中名称相同的名称时，就会冲突了
//
//
//int main()
//{
//	return 0;
//}
