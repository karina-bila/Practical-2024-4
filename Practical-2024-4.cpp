#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	//встановлюємо українську мову на вивід консолі
	setlocale(LC_ALL, "ukr");

	/**
	* Завдання1
	*/
	//створюємо однозв'язний список
	forward_list<int> flist = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "Однозв'язний список: ";

	//виводимо список
	for (int i : flist)
		cout << i << " ";
	cout << endl;

	/**
	* Завдання2
	*/
	//створюємо однозв'язний список
	forward_list<int> flist2 = { 10 };

	//добавляємо елементи в початок списку
	flist2.push_front(15);
	flist2.push_front(20);
	flist2.push_front(25);
	flist2.push_front(30);

	//видаляємо перший елемент
	flist2.pop_front();

	//виводимо список
	cout << "Однозв'язний список 2: ";
	for (int i : flist2)
		cout << i << " ";
	cout << endl;

	/**
	* Завдання3
	*/
	//створюємо однозв'язний список
	forward_list<int> flist3 = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	//шукаємо елемент зі значеннями 15 та 40 і якщо знайдено виводимо повідомлення
	// про те що елемент знайдено, якщо ні - повідомлення про те що елемент не знайдено
	if (find(flist3.begin(), flist3.end(), 15) != flist3.end())
		cout << "Елемент 15 знайдено в списку 3" << endl;
	else
		cout << "Елемент 15 не знайдено в списку 3" << endl;

	if (find(flist3.begin(), flist3.end(), 40) != flist3.end())
		cout << "Елемент 40 знайдено в списку 3" << endl;
	else
		cout << "Елемент 40 не знайдено в списку 3" << endl;

	/**
	* Завдання4
	*/
	//створюємо однозв'язний список
	forward_list<int> flist4 = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	//обчислюємо суму елементів списку
	int sum = 0;
	for (int i : flist4)
		sum += i;
	cout << "Сума елементів списку 4: " << sum << endl;

	/**
	* Завдання5
	*/
	//створюємо однозв'язний список
	forward_list<int> flist5 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//реверсуємо список
	flist5.reverse();

	//виводимо список
	cout << "Реверсований однозв'язний список 5: ";
	for (int i : flist5)
		cout << i << " ";




	return 0;
}