#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	//������������ ��������� ���� �� ���� ������
	setlocale(LC_ALL, "ukr");

	/**
	* ��������1
	*/
	//��������� ������'����� ������
	forward_list<int> flist = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "������'����� ������: ";

	//�������� ������
	for (int i : flist)
		cout << i << " ";
	cout << endl;

	/**
	* ��������2
	*/
	//��������� ������'����� ������
	forward_list<int> flist2 = { 10 };

	//���������� �������� � ������� ������
	flist2.push_front(15);
	flist2.push_front(20);
	flist2.push_front(25);
	flist2.push_front(30);

	//��������� ������ �������
	flist2.pop_front();

	//�������� ������
	cout << "������'����� ������ 2: ";
	for (int i : flist2)
		cout << i << " ";
	cout << endl;

	/**
	* ��������3
	*/
	//��������� ������'����� ������
	forward_list<int> flist3 = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	//������ ������� � ���������� 15 �� 40 � ���� �������� �������� �����������
	// ��� �� �� ������� ��������, ���� � - ����������� ��� �� �� ������� �� ��������
	if (find(flist3.begin(), flist3.end(), 15) != flist3.end())
		cout << "������� 15 �������� � ������ 3" << endl;
	else
		cout << "������� 15 �� �������� � ������ 3" << endl;

	if (find(flist3.begin(), flist3.end(), 40) != flist3.end())
		cout << "������� 40 �������� � ������ 3" << endl;
	else
		cout << "������� 40 �� �������� � ������ 3" << endl;

	/**
	* ��������4
	*/
	//��������� ������'����� ������
	forward_list<int> flist4 = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	//���������� ���� �������� ������
	int sum = 0;
	for (int i : flist4)
		sum += i;
	cout << "���� �������� ������ 4: " << sum << endl;

	/**
	* ��������5
	*/
	//��������� ������'����� ������
	forward_list<int> flist5 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//��������� ������
	flist5.reverse();

	//�������� ������
	cout << "������������ ������'����� ������ 5: ";
	for (int i : flist5)
		cout << i << " ";




	return 0;
}