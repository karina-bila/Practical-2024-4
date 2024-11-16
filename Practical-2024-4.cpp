#include <iostream>
#include <queue>
#include <windows.h>
#include <unordered_map>
#include <string>

using namespace std;

static bool canFormWordFromQueue(std::queue<char>& q, const std::string& word) {
	size_t wordIndex = 0;
	size_t wordLength = word.length();

	// Прочитуємо чергу символ за символом
	while (!q.empty()) {
		// Дістаємо символ з черги
		char currentChar = q.front();
		q.pop();

		// Якщо символ співпав з поточним символом в слові, переходимо до наступного символа
		if (currentChar == word[wordIndex]) {
			wordIndex++;
		}

		// Якщо ми пройшли все слово, повертаємо true
		if (wordIndex == wordLength) {
			return true;
		}
	}

	// Якщо не всі символи були знайдені, повертаємо false
	return false;
}

int main()
{
	//встановлюємо українську мову на вивід консолі
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*Завдання 3*/
	//cтворюємо чергу символів
	queue<char> q;
	//додаємо символи в чергу від користувача з клавіатури
	cout << "Введіть символи черги, для завершення введіть 0 (нуль): \n";

	char ch;
	do
	{
		cin >> ch;
		if (ch != '0')
			q.push(ch);
	} while (ch != '0');


	if (canFormWordFromQueue(q, "студент")) {
		cout << "Можна скласти слово 'студент' з символів черги!" << std::endl;
	}
	else {
		cout << "Не можна скласти слово 'студент' з символів черги." << std::endl;
	}

	return 0;
}

