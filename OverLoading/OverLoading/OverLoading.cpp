// OverLoading.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h"


#include <iostream>
#include <iomanip>
#include "OverLoadTest/PhoneNumber.h"
using namespace std;

int main() {
	PhoneNumber phone;
	cout << "Enter phone number in the form (123) 456-7890:" << endl;
	cin >> phone;
	cout << "The Phone number entered was: ";
	cout << phone << endl;
	system("pause");
	return 0;
}

