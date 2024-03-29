﻿// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"

#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int right=0;
	int n=15;
	cout << "Решите уравнения:" << endl;
	while (right<(n*80/100))
	{
		srand(time(NULL));
		int i = 0;
		while (i < 1)
		{
			//Сделал числа до 100
			int a = 1 + rand() % 100,
				b = 1 + rand() % 100,
				c = 1 + rand() % 100;
			float D = (pow(b, 2) - (4 * a*c)),
				x1 = ((-1)*b + sqrt(D)) / (2 * a),
				x2 = ((-1)*b - sqrt(D)) / (2 * a);
			if (x1 == round(x1) && x2 == round(x2) && x1 < 10000 && x2 < 10000 && x1 > -10000 && x2 > -10000)
			{
				/*Возможно, можно было внести функцию, которая будет
				сама подбирать a,b,c так, чтобы корни были только целыми
				числами, что уменьшило бы кол-во итераций. Но пока что будет так)*/
				cout << "-----------------------\n";
				cout << "Всего уравнений " << n << endl << "Решено верно " << right << endl;
				cout << "Для завершения должно быть верных - " << (n * 80 / 100) << endl;
				cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
				/*cout << "x1 = " << x1 << endl;
				if (x1 != x2) cout << "x2 = " << x2 << endl;*/
				i++;
				int ans1, ans2;
				cout << "Введите корни уравнения, если корень один - введите его два раза" << endl << "x1 = ";
				cin >> ans1;
				cout << "x2 = ";
				cin >> ans2;
				cout << endl << endl;
				if ((ans1 == x1 && ans2 == x2) || (ans2 == x1 && ans1 == x2))
				{
					right += 1;
				}
				else if ((ans1 == x1 || ans2 == x2) || (ans2 == x1 || ans1 == x2))
				{
					n += 1;
				}
				else
				{
					n += 2;
				}

			}
		}

	}
	cout << "Поздравляю, вы справились!";

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
