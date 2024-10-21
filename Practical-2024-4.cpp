#include <iostream>
#include <windows.h>
#include <stack>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// створити стек символів і перевірити чи є введений рядок паліндромом
	string str;

	while (true) {
		// очищаємо введений рядок
		str.clear();
		cout << "Введіть рядок: ";
		getline(cin, str);

		// створюємо стек
		stack<char> stack;

		// Заповнюємо стек символами рядка
		for (int i = 0; i < str.length(); i++) {
			stack.push(str[i]);
		}

		// Перевіряємо чи є рядок паліндромом
		bool isPalindrome = true;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] != stack.top()) {
				isPalindrome = false;
				break;
			}
			stack.pop();
		}

		if (isPalindrome) {
			cout << "Рядок є паліндромом" << endl;
		}
		else {
			cout << "Рядок не є паліндромом" << endl;
		}
	}

	return 0;
}
