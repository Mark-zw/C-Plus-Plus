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
	Date(int year = 0, int month = 1, int day = 1) {
		_year = year;
		_month = month;
		_day = day;
	}
	//�������캯��
	Date(const Date& d) {
		_year = d._year;
		_month = d._month;
		_day = d._day;
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
	return 0;
}
//func1(int i) {
//	//�����ڲ�����
//}
//int main() {
//	int j = 0;
//	func1(j);//����func1��ʱ��Ҫ�Ƚ�j����i
//}