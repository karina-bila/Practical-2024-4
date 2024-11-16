#include <iostream>
#include <queue>
#include <windows.h>
#include <unordered_map>
#include <string>

using namespace std;

static bool canFormWordFromQueue(std::queue<char>& q, const std::string& word) {
	size_t wordIndex = 0;
	size_t wordLength = word.length();

	// ��������� ����� ������ �� ��������
	while (!q.empty()) {
		// ĳ����� ������ � �����
		char currentChar = q.front();
		q.pop();

		// ���� ������ ������ � �������� �������� � ����, ���������� �� ���������� �������
		if (currentChar == word[wordIndex]) {
			wordIndex++;
		}

		// ���� �� ������� ��� �����, ��������� true
		if (wordIndex == wordLength) {
			return true;
		}
	}

	// ���� �� �� ������� ���� �������, ��������� false
	return false;
}

int main()
{
	//������������ ��������� ���� �� ���� ������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*�������� 3*/
	//c�������� ����� �������
	queue<char> q;
	//������ ������� � ����� �� ����������� � ���������
	cout << "������ ������� �����, ��� ���������� ������ 0 (����): \n";

	char ch;
	do
	{
		cin >> ch;
		if (ch != '0')
			q.push(ch);
	} while (ch != '0');


	if (canFormWordFromQueue(q, "�������")) {
		cout << "����� ������� ����� '�������' � ������� �����!" << std::endl;
	}
	else {
		cout << "�� ����� ������� ����� '�������' � ������� �����." << std::endl;
	}

	return 0;
}

