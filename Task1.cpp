#include <iostream>
#include <list>
using namespace std;

void Task1()
{
	// ��������� ������
	list<int> list1 = { 1, 2, 3, 4, 5 };

	// ������������� ��������� ��� �������� �������� ������
	for (auto it = list1.begin(); it != list1.end(); ++it)
	{
		// �������� �������� ������� �������� �� �����
		cout << *it << " ";
	}

}