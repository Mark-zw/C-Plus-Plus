#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>
using namespace std;
//class Stack {
//public:
//	//构造函数，完成初始化
//	Stack(int n = 10) {
//		_array = (int*)malloc(sizeof(int) * n);
//		_size = 0;
//		_capacity = 10;
//	}
//	//析构函数，完成资源清理
//	~Stack() {
//		free(_array);
//		_array = NULL;
//		_size = 0;
//		_capacity = 0;
//	}
//private:
//	int* _array;
//	int _size;
//	int _capacity;
//};
//int main() {
//	Stack st;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Time {
//public:
//	~Time() {
//		cout << "~Time()" << endl;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//public:
//	//构造函数
//	Date(int year = 0, int month = 1, int day = 1) {
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "自动调用构造函数" << endl;
//	}
//	////析构函数
//	//~Date() {
//	//	cout << "自动调用析构函数~" << endl;
//	//}
//	void Display()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//		//cout << this->_year << "-" << this->_month << "-" <<this-> _day << endl;
//	}
//
//private:
//	int _year;//年
//	int _month;//月
//	int _day;//日
//	Time _t;//自定义类型
//};
//int main()
//{
//	Date d1(2021, 10, 1);
//	Date d2;
//	d1.Display();
//	d2.Display();
//	return 0;
//}
#include<iostream>
using namespace std;
class Date {
public:
	Date(int year = 0, int month = 1, int day = 1) {
		_year = year;
		_month = month;
		_day = day;
	}
	//拷贝构造函数
	Date(const Date& d) {
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	//为了能使用运算符重载，将其放到class类里面public函数中
	//运算符有几个操作数，operator重载的函数就有几个参数
	bool operator==(const Date& d) {  //bool operator == (Date* this,const Date& d)
		return _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}
	//代码优化
	bool operator>(const Date& d) {
		if (_year > d._year)
			return true;
		else if (_year == d._year && _month > d._month)
			return true;
		else if (_year == d._year && _month == d._month && _day > d._day)
			return true;
		return false;
	}
	//bool operator>(const Date& d) {
	//	if (_year > d._year)
	//		return true;
	//	else if (_year < d._year)
	//		return false;
	//	if (_month > d._month)
	//		return true;
	//	else if (_month < d._month)
	//		return false;
	//	if (_day > d._day)
	//		return true;
	//	else if (_day < d._day)
	//		return false;
	//	else
	//		return false;
	//}
//为了能让operator==重载能用，暂时屏蔽私有pravate的限定符
//实际上使用的时候成员变量都是private的
private: 
	int _year;
	int _month;
	int _day;
};
int main() {
	Date d1(2021, 10, 1);
	Date d2(2021, 10, 2);
	Date d3(d1);
	Date d4 = d1;
	bool ret = d2 > d1;//会被编译器转换成：operator > (Date* this,const Date& d)
	return 0;
}
//func1(int i) {
//	//函数内部代码
//}
//int main() {
//	int j = 0;
//	func1(j);//调用func1的时候，要先将j传给i
//}