#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	//Встановлення кодування консолі на українське
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//2
	cout << "Завданння 2:" << endl;
	int  arr[5] = { 10,20,30,40,50 };
	int* pStar = &arr[0];
	int* pEnd = &arr[4];

	int d = pEnd - pStar;
	cout << "Відстань між pEnd та pStar: " << d << " елементів" << endl;
	cout << "Значення pStar: " << *pStar << " Адреса: " << pStar << endl;
	cout << "Значення pEnd: " << *pEnd << " Адреса: " << pEnd << endl;

	//3
	cout << endl;
	cout << "Завданння 3:" << endl;
	int* p = pStar;
	cout << "Початкове значення: " << *p << " Адреса:" << p << endl;
	p++;
	cout << "Значення після ++: " << *p << " Адреса:" << p << endl;
	p += 2; //p=p+2;
	cout << "Значення після +2: " << *p << " Адреса:" << p << endl;
	p--;
	cout << "Значення після --: " << *p << " Адреса:" << p << endl;
	p -= 2; //p=p-2;
	cout << "Значення після -2: " << *p << " Адреса:" << p << endl;

	return 0;
}