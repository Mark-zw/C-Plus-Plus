#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Date
{
public:
	void print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	//void Init(int year, int month, int day)
	//{
	//	_year = year;
	//	_month = month;
	//	_day = day;
	//}

	Date(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2021,7,5);
	Date d2;
	//d1.Init(2021, 7, 4);
	d1.print();
	d2.print();
	return 0;
}