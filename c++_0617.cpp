#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//半缺省参数 --- 缺省部分参数
void Func2(int a = 10 , int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
int main()
{
	//Func1();所有参数不传 程序错误
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
