// PR5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Operator_overload.h"
#include "Array.h"
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
	SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення
	Operator_overload dr1, dr2, dr3;
	Array ar1, ar2, ar3;
	int choice;

	do 
	{
		cout << "1.Додати два дроби\n";
		cout << "2.Відняти два дроби\n";
		cout << "3.Додати два дробових масива\n";
		cout << "4.Відняти два дробових масива\n";
		cout << "0.Вийти\n";
		cin >> choice;

		if (choice == 0) break;

		switch (choice)
		{
		case 1:
			dr1.set_random();
			dr2.set_random();
			dr1.print();
			cout << "\n";
			dr2.print();
			cout << "\n";
			dr3 = dr1 + dr2;
			dr3.print();
			cout << "\n";
			break;
		case 2: 
			dr1.set_random();
			dr2.set_random();
			dr1.print();
			cout << "\n";
			dr2.print();
			cout << "\n";
			dr3 = dr1 - dr2;
			dr3.print();
			cout << "\n";
			break;
		case 3:
			ar1.set_random();
			ar2.set_random();
			ar3.set_random();
			ar1.print();
			cout << "\n";
			ar2.print();
			cout << "\n";
			ar3 = ar1 + ar2;
			ar3.print();
			cout << "\n";
			break;
		case 4:
			ar1.set_random();
			ar2.set_random();
			ar3.set_random();
			ar1.print();
			cout << "\n";
			ar2.print();			
			cout << "\n";
			ar3 = ar1 - ar2;
			ar3.print();
			cout << "\n";
			break;
		default:
			break;
		}
	} while (choice != 0);
	
	return 0;
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
