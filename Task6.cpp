#include <iostream>
#include <list>
using namespace std;

void Task6()
{
	// ��������� ������ ���������� ������ � ������ �����
	list <double> list2 = { 12.5, 20.3, 15.0, 30.1, 10.0, 27.8, 14.5, 35.0 };

	// ��������� ������ �������� �������� ������ � ���������� ����� ��� ������ 15
	double sum = 0;
	int count = 0;
	for (auto it = list2.begin(); it != list2.end(); ++it)
	{
		if (*it <= 15)
		{
			sum += *it;
			count++;
		}
	}
	double average = sum / count;

	// �������� ������ �������� �������� ������ � ���������� ����� ��� ������ 15
	cout << "������ �������� �������� ������ � ���������� ����� ��� ������ 15: "
		<< average << endl;

	// �������� � ������ ��������, �� ����� 25
	for (auto it = list2.begin(); it != list2.end();)
	{
		if (*it > 25)
		{
			it = list2.erase(it);
		}
		else
		{
			++it;
		}
	}

	// �������� ������ ���� ��������� ��������, �� ����� 25
	cout << "������ ���� ��������� ��������, �� ����� 25: ";
	for (auto it = list2.begin(); it != list2.end(); ++it)
	{
		cout << *it << " ";
	}
}