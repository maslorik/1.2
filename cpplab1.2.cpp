#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <ctime>
#include <stdlib.h>

using namespace std;
int main()

{
	int getch();
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	const int N = 15;
	double z = 0, a[N];
	int x, j, c = 0;
	cout << "Определите характер заполнения: 1 - ручное, 2 - автоматическое" << endl;
	cin >> x;
	if (x == 2)
	{
		for (int i = 0; i < N; i++) // Автоматический ввод рандомных вещественных значений
		{
			a[i] = ((-50 + rand() % 100) * 1.2);
			cout << "a[" << i << "] = " << a[i] << endl;
		}
	}
	if (x == 1)
	{
		for (int b = 0; b < N; b++)
		{
			cout << "a[" << b << "] = ";
			cin >> a[b]; //Ручной ввод значений для массива 
		}
	}
	for (int i = 0; i < N; i++)// Счётчик положительных элементов
	{

		if (a[i] == 0)
		{
			j = i;
			z = 0;
			for (j; j < N; j++)
			{
				z = z + a[j];
			}
		}

	}
	cout << "Кол-во положительных элементов = " << c << endl;
	cout << "Сумма элементов массива = " << z << endl;
	getch();
}