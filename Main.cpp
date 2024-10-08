#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <limits>


using namespace std;

void Task1();
void Task6();

int main()
{
	//Встановлення кодування консолі на українське
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	string success = "\n\nВірний ключ, програма виконана успішно.";

	string key = "";
	while (key != "exit")
	{
		//Виводимо меню програми
		cout << "Введіть номер завдання 1, 6 або exit для виходу: ";
		cin >> key;

		// Очищення буферу вводу та консолі
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
				std::cout << "Вихід з програми." << std::endl;
			}
			else {
				std::cout << "Невірний ключ" << std::endl;
			}
			break;
		default:
			std::cout << "Невірний ключ" << std::endl;
			continue;
		}
	}

	return 0;
}
