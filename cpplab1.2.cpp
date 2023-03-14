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