
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int sort_chot(int* arr2, int *size)
{
	int* arr2_copy = new int[*size];//Создание массива такой же длины для хранения сумм четных мест числа
	int k, s1, s2, ch;
	for (int i = 0; i < *size; i++)
	{
		k = 0; s1 = 0; s2 = 0;//счетчик и суммы четных или нечетных мест
		ch = arr2[i];
		while (ch > 0)
		{
			k++;
			if (k % 2 == 1) s1 += ch % 10;
			else s2 += ch % 10;
			ch /= 10;
		}
		if (k % 2 == 0) arr2_copy[i] = s1;
		else arr2_copy[i] = s2;
	}
	for (int i = 0; i < *size - 1; i++)//Сортировка пузырьком
	{
		for (int j = 0; j < *size - i - 1; j++)
		{
			if (arr2_copy[j] > arr2_copy[j + 1])
			{
				arr2_copy[j] += arr2_copy[j + 1];
				arr2_copy[j + 1] = arr2_copy[j] - arr2_copy[j + 1];
				arr2_copy[j] = arr2_copy[j] - arr2_copy[j + 1];
				arr2[j] += arr2[j + 1];
				arr2[j + 1] = arr2[j] - arr2[j + 1];
				arr2[j] = arr2[j] - arr2[j + 1];
			}
		}
	}
	cout << "Отсортированный массив:\n";
	for (int i = 0; i < *size; i++)
		cout << arr2[i] << " ";
	cout << endl;
	return 0;
}

int sort_lastch(int* arr3, int *size)
{
	int* arr3_copy = new int[*size];
	for (int i = 0; i < *size; i++)
		arr3_copy[i] = arr3[i] % 10;
	for (int i = 0; i < *size - 1; i++)//Сортировка пузырьком
	{
		for (int j = 0; j < *size - i - 1; j++)
		{
			if (arr3_copy[j] > arr3_copy[j + 1])//Проверка на последние числа
			{
				arr3_copy[j] += arr3_copy[j + 1];
				arr3_copy[j + 1] = arr3_copy[j] - arr3_copy[j + 1];
				arr3_copy[j] = arr3_copy[j] - arr3_copy[j + 1];
				arr3[j] += arr3[j + 1];
				arr3[j + 1] = arr3[j] - arr3[j + 1];
				arr3[j] = arr3[j] - arr3[j + 1];
			}
			else if (arr3_copy[j] == arr3_copy[j + 1])//При совпадении последних цифр
			{
				if (arr3[j] < arr3[j + 1])
				{
					arr3[j] += arr3[j + 1];
					arr3[j + 1] = arr3[j] - arr3[j + 1];
					arr3[j] = arr3[j] - arr3[j + 1];
				}
			}
		}
	}
	cout << "Отсортированный массив:\n";
	for (int i = 0; i < *size; i++)
		cout << arr3[i] << " ";
	cout << endl;
	return 0;
}

int print_all(int* arr1, int* arr2, int* arr3, int *size)
{
	cout << "Массив для вывода: \n";
	for (int i = 0; i < *size; i++)
		cout << arr1[i] << " ";
	cout << endl;
	cout << "Массив для первой сортировки: \n";
	for (int i = 0; i < *size; i++)
		cout << arr2[i] << " ";
	cout << endl;
	cout << "Массив для второй сортировки: \n";
	for (int i = 0; i < *size; i++)
		cout << arr3[i] << " ";
	cout << endl;
	return 0;
}

int in_arr(int* arr1, int* arr2, int* arr3, int *size)
{
	for (int i = 0; i < *size; i++)
	{
		arr1[i] = rand() % 98 + 1;
		arr2[i] = rand() % 9999999;
		arr3[i] = rand() % 998 + 1;
	}
	cout << "Массив заполнен!\n";
	return 0;
}

int new_arr(int*& arr1, int*& arr2, int*& arr3, int size)
{
	arr1 = new int[size];//Для вывода
	arr2 = new int[size];//Для сорт по сумме цифр
	arr3 = new int[size];//Для сорт по возр по ласт цифре
	cout << "Массивы созданы!\n";
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int size;
	int* arr1 = nullptr;
	int* arr2 = nullptr;
	int* arr3 = nullptr;
	int value;
	while (true)
	{
		cout << "1. Изменить длину массива сортировок\n";
		cout << "2. Заполнить массив\n";
		cout << "3. Вывести массив\n";
		cout << "4. Сортировка по сумме цифр на четных местах\n";
		cout << "5. Сортировка по возрастанию последней цифры\n";
		cout << "6. Удаление массивов\n";
		cout << "7. Выход\n";
		cin >> value;
		switch (value)
		{
		case 1:
		{
			cout << "Введите длину массива сортировок: ";
			cin >> size;
			new_arr(arr1, arr2, arr3, size);
			break;
		}
		case 2:
		{
			in_arr(arr1, arr2, arr3, &size);
			break;
		}
		case 3:
		{
			print_all(arr1, arr2, arr3, &size);
			break;
		}
		case 4:
		{
			sort_chot(arr2, &size);
			break;
		}
		case 5:
		{
			sort_lastch(arr3, &size);
			break;
		}
		case 6:
		{
			delete[] arr1;
			delete[] arr2;
			delete[] arr3;
			break;
		}
		case 7:
		{
			cout << "До свидания!";
			delete[] arr1;
			delete[] arr2;
			delete[] arr3;
			return 0;
		}
		default:
		{
			cout << "Такой цифры нет. Повторите попытку.";
		}
		}
	}

}
