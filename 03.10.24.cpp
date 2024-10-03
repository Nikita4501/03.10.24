#include<string>
#include<windows.h>
#include <iostream>
using namespace std;

int main()
{
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	int a1[6] = { 5, 12, 9, 13, 15, 7};

	// 1) Суммирование значений массива
	float Sum = 0.0;
	for (int i = 0; i < 6; i++) 
	{
		Sum += a1[i];
	}
	cout << "Сумма элементов массива: " << Sum << endl;

	// 2) Найти среднее значение
	float sred = Sum / 6;
	cout << "Среднее значение элементов массива: " << sred << endl;

	// 3) Найти положительные и отрицательные числа массива
	cout << "Положительные числа: ";
	for (int i = 0; i < 6; i++) 
	{
		if (a1[i] > 0) 
		{
			cout << a1[i] << " ";
		}
	}
	cout << endl;

	cout << "Отрицательные числа: ";
	for (int i = 0; i < 6; i++) 
	{
		if (a1[i] < 0) 
		{
			cout << a1[i] << " ";
		}
	}
	cout << endl;

	// 4) Найти четные и нечетные числа массива
	cout << "Четные числа: ";
	for (int i = 0; i < 6; i++) 
	{
		if (a1[i] % 2 == 0) 
		{
			cout << a1[i] << " ";
		}
	}
	cout << endl;

	cout << "Нечетные числа: ";
	for (int i = 0; i < 6; i++) 
	{
		if (a1[i] % 2 != 0) 
		{
			cout << a1[i] << " ";
		}
	}
	cout << endl;

	return 0;
}
