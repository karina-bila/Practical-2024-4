#include <iostream>
#include <windows.h>
#include <stack>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// �������� ���� ������� � ��������� �� � �������� ����� ����������
	string str;

	while (true) {
		// ������� �������� �����
		str.clear();
		cout << "������ �����: ";
		getline(cin, str);

		// ��������� ����
		stack<char> stack;

		// ���������� ���� ��������� �����
		for (int i = 0; i < str.length(); i++) {
			stack.push(str[i]);
		}

		// ���������� �� � ����� ����������
		bool isPalindrome = true;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] != stack.top()) {
				isPalindrome = false;
				break;
			}
			stack.pop();
		}

		if (isPalindrome) {
			cout << "����� � ����������" << endl;
		}
		else {
			cout << "����� �� � ����������" << endl;
		}
	}

	return 0;
}
