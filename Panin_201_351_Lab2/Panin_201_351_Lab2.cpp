#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//функция для решения задачи 1
void task1()
{
	int n;
	cout << "Введите натуральное число n: ";
	cin >> n;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++)
			cout << j;
		cout << endl;
	}
}
//вспомогательная функция для поиска факториала
double fact(int a)
{
	double res = 1;
	for (int i = 1; i <= a; i++)
		res *= i;
	return res;
}
//функция для решения задачи 2
void task2()
{
	system("cls");
	double n, k = 0, fc;
	double result;
	cout << "Введите натуральное число n: ";
	cin >> n;
	fc = fact(n); //факториал главного n
	while (k <= n)
	{
		result = fc / (fact(n - k) * fact(k));
		cout << result << " ";
		k++;
	}
	cout << endl;
}
//функция для решения задачи 3
void task3()
{
	int sum = 0, k = 0;
	string s;
	cout << "Введите символ конца ввода: ";
	cin >> s;
	string r;
	cout << "\nВведите точки на прямой: ";
	while (true)
	{
		cin >> r;
		if (r != s)
		{
			sum += std::stoi(r);
			k++;
		}
		else
		{
			cout << "Среднее арифметическое точек: " << double(sum) / k << endl;
			break;
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int choice = 0; // в этой переменной будет храниться выбор пользователя
	while (true) // непрерывный цикл
	{
		std::cout << "Что вы хотите выполнить? \n"
			<< "1. задание 1\n"
			<< "2. задание 2\n"
			<< "3. задание 3\n"
			<< "4. выход\n";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
		{
			/*вызов функции для решения задания 1*/;
			task1();
			break; // если его не ставить, то после вызова task1(), начнет выполнятся task2()
		}
		case 2:
		{
			/*вызов функции для решения задания 2*/;
			task2();
			break;
		}
		case 3:
		{
			/*вызов функции для решения задания 3*/;
			task3();
			break;
		}
		case 4:
		{
			cout << "До свидания!";
			return 0;
		}
		default:
		{
			cout << "Такого номера нет.\nПопробуйте снова:" << endl;

		}
		}
	}
}

