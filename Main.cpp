#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	//������������ ��������� ������ �� ���������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//2
	cout << "��������� 2:" << endl;
	int  arr[5] = { 10,20,30,40,50 };
	int* pStar = &arr[0];
	int* pEnd = &arr[4];

	int d = pEnd - pStar;
	cout << "³������ �� pEnd �� pStar: " << d << " ��������" << endl;
	cout << "�������� pStar: " << *pStar << " ������: " << pStar << endl;
	cout << "�������� pEnd: " << *pEnd << " ������: " << pEnd << endl;

	//3
	cout << endl;
	cout << "��������� 3:" << endl;
	int* p = pStar;
	cout << "��������� ��������: " << *p << " ������:" << p << endl;
	p++;
	cout << "�������� ���� ++: " << *p << " ������:" << p << endl;
	p += 2; //p=p+2;
	cout << "�������� ���� +2: " << *p << " ������:" << p << endl;
	p--;
	cout << "�������� ���� --: " << *p << " ������:" << p << endl;
	p -= 2; //p=p-2;
	cout << "�������� ���� -2: " << *p << " ������:" << p << endl;

	return 0;
}