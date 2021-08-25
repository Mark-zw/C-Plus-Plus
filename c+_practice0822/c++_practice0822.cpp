#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>
using namespace std;
//class Stack {
//public:
//	//���캯������ɳ�ʼ��
//	Stack(int n = 10) {
//		_array = (int*)malloc(sizeof(int) * n);
//		_size = 0;
//		_capacity = 10;
//	}
//	//���������������Դ����
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
//	//���캯��
//	Date(int year = 0, int month = 1, int day = 1) {
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "�Զ����ù��캯��" << endl;
//	}
//	////��������
//	//~Date() {
//	//	cout << "�Զ�������������~" << endl;
//	//}
//	void Display()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//		//cout << this->_year << "-" << this->_month << "-" <<this-> _day << endl;
//	}
//
//private:
//	int _year;//��
//	int _month;//��
//	int _day;//��
//	Time _t;//�Զ�������
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
	int GetMonthDay(int year, int month) {
		static int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		//�������2�¾ͷ���29
		if (month == 2 && ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0)) {
			return 29;
		}
		return monthDays[month];
	}
	Date(int year = 0, int month = 1, int day = 1) {
		if (year >= 0 && month >= 1 && month <= 12 && day >= 1 && day <= GetMonthDay(year, month)) {
			_year = year;
			_month = month;
			_day = day;
		}
		else {
			cout << "�Ƿ�����" << endl;
		}
	}
	//�������캯��
	Date(const Date& d) {
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	void Print() {
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	//Ϊ����ʹ����������أ�����ŵ�class������public������
	//������м�����������operator���صĺ������м�������
	bool operator==(const Date& d) {  //bool operator == (Date* this,const Date& d)
		return _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}
	//�����Ż�
	bool operator>(const Date& d) {
		if (_year > d._year)
			return true;
		else if (_year == d._year && _month > d._month)
			return true;
		else if (_year == d._year && _month == d._month && _day > d._day)
			return true;
		return false;
	}
	bool operator>=(const Date& d) {
		return *this > d || *this == d;
	}
	bool operator!=(const Date& d) {
		return !(*this == d);
	}
	bool operator<(const Date& d) {
		return !(*this > d);
	}
	bool operator<=(const Date& d) {
		return *this < d || *this == d;
	}
	Date operator+(int day) {
		Date ret(*this);
		ret._day += day;
		while (ret._day > GetMonthDay(ret._year, ret._month)) {
			ret._day -= GetMonthDay(ret._year, ret._month);
			ret._month++;
			if (ret._month == 13) {
				ret._year++;
				ret._month = 1;
			}
		}
		return ret;
	}
	Date operator+=(int day);
	Date operator-(int day);
	Date operator-=(int day);
	Date operator++(int day);
	Date operator--(int day);

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
	bool ret = d2 > d1;//�ᱻ������ת���ɣ�operator > (Date* this,const Date& d)
	d1.Print();
	d2.Print();
	Date d5(2021, 2, 29);
	//cout << (d1 == d2) << endl;
	//cout << (d1 != d2) << endl;
	//cout << (d1 < d2) << endl;
	//cout << (d1 <= d2) << endl;
	//cout << (d1 > d2) << endl;
	//cout << (d1 >= d2) << endl;
	Date d6 = d2 + 1000;
	d6.Print();
	return 0;
}
//func1(int i) {
//	//�����ڲ�����
//}
//int main() {
//	int j = 0;
//	func1(j);//����func1��ʱ��Ҫ�Ƚ�j����i
//}
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
//Ϊ������operator==�������ã���ʱ����˽��pravate���޶���
//ʵ����ʹ�õ�ʱ���Ա��������private��