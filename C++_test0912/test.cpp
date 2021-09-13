#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>
using namespace std;
int main() {
	//short x = -4321;
	//unsigned short y = (unsigned short)x;
	unsigned short x = 65535;
	short y = (short)x;
	cout <<"x = "<< x << endl;
	cout << " y = " << y << endl;
	return 0;
}