#include <iostream>
#include <list>
using namespace std;

void Task1()
{
	// Створюємо список
	list<int> list1 = { 1, 2, 3, 4, 5 };

	// Використовуємо ітератори для перебору елементів списку
	for (auto it = list1.begin(); it != list1.end(); ++it)
	{
		// Виводимо значення кожного елемента на екран
		cout << *it << " ";
	}

}