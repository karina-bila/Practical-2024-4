#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <limits>


using namespace std;

void Task1();
void Task6();

int main()
{
	//������������ ��������� ������ �� ���������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	string success = "\n\n³���� ����, �������� �������� ������.";

	string key = "";
	while (key != "exit")
	{
		//�������� ���� ��������
		cout << "������ ����� �������� 1, 6 ��� exit ��� ������: ";
		cin >> key;

		// �������� ������ ����� �� ������
		system("cls");
		cin.clear();

		switch (key[0]) {
		case '1':
			Task1();
			std::cout << success << std::endl;
			break;
		case '6':
			Task6();
			std::cout << success << std::endl;
			break;
		case 'e':
			if (key == "exit") {
				std::cout << "����� � ��������." << std::endl;
			}
			else {
				std::cout << "������� ����" << std::endl;
			}
			break;
		default:
			std::cout << "������� ����" << std::endl;
			continue;
		}
	}

	return 0;
}
