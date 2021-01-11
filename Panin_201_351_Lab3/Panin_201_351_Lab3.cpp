#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::rand;



using std::vector;

int sort_bubble(vector<int> arr) // Функция для сортировки пузырьком
{
	int a; // Темп
	for (int i = 0; i < arr.size() - 1; i++)
		for (int j = 0; j < arr.size() - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
			for (int k = 0; k < arr.size(); k++) cout << arr[k] << " ";
			cout << endl;
		}
	cout << "Конечный массив:" << endl;
	for (int i = 0; i < arr.size(); i++) cout << arr[i] << " "; // Вывод массива
	cout << endl;
	return 0;
}

int sort_counting(vector<char> arr) // Функция для сортировки подсчетом
{
	int const ch = 26;
	int arr_count[ch] = { 0 }, i, j; //Вспомогательный массив [0-25], с хранением: сколько раз встречается буква в ряде
	cout << "\nСчетчик элементов:\n";
	for (i = 0; i < arr.size(); i++)
	{
		arr_count[int(arr[i]) - 97]++; // Счетчик букв
	}
	for (int i = 0; i < ch; i++) cout << arr_count[i] << " "; // Вывод счетчика
	cout << "\n\nКонечный массив:\n";
	for (int i = 0; i < ch; i++)
	{
		for (int j = 0; j < arr_count[i]; j++)
			cout << char(i + 97); // Вывод самого массива
		cout << " ";
	}
	cout << endl;
	return 0;
}

int Merge(int* A, int first, int last)
{
	int middle, start, final, j;
	int mas[1000];
	middle = (first + last) / 2; //вычисление среднего элемента
	start = first; //начало левой части
	final = middle + 1; //начало правой части
	for (j = first; j <= last; j++) //выполнять от начала до конца
	{
		if ((start <= middle) && ((final > last) || (A[start] < A[final])))
		{
			mas[j] = A[start];
			start++;
		}
		else
		{
			mas[j] = A[final];
			final++;
		}
		cout << mas[j] << " ";
	}
	//возвращение результата в массив
	for (j = first; j <= last; j++) A[j] = mas[j];
	return 0;
}

int MergeSort(int* A, int first, int last)
{
	if (first < last)
	{
		MergeSort(A, first, (first + last) / 2); //сортировка левой части
		MergeSort(A, (first + last) / 2 + 1, last); //сортировка правой части
		Merge(A, first, last); //слияние двух частей
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int choice = 0; // в этой переменной будет храниться выбор пользователя
	while (true) // непрерывный цикл
	{
		std::cout << "Что вы хотите выполнить? \n"
			<< "1. сортировка пузырьком;\n"
			<< "2. сортировка подсчетом;\n"
			<< "3. сортировка слиянием;\n"
			<< "4. выход.\n";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
		{
			int N; // Пузырек
			cout << "Введите размер массива для сортировки пузырьком: ";
			cin >> N;
			vector<int> arr1(N); //Вектор
			for (int i = 0; i < N; i++)
				arr1[i] = rand() % 90 + 10; //Заполнение вектора рандомными двузначными числами
			cout << "Первоначальный массив с числами: " << endl;
			for (int i = 0; i < arr1.size(); i++) cout << arr1[i] << " ";
			cout << endl;
			cout << "Алгоритм соритровки:" << endl;

			sort_bubble(arr1);

			break;
		}
		case 2:
		{
			int N;
			cout << "Введите размер массива для сортировки подсчетом: ";
			cin >> N;
			vector<char> arr2(N); //Вектор
			cout << "\nПервоначальный массив:\n";
			for (int i = 0; i < N; i++)
			{
				arr2[i] = char(rand() % 26 + 97);
				cout << arr2[i] << " ";
			}
			cout << endl;

			sort_counting(arr2);

			break;
		}
		case 3:
		{
			int i;
			int n;
			cout << "Размер массива > "; cin >> n;
			int A[1000] = { 0 };
			for (i = 1; i <= n; i++)
			{
				A[i] = rand() % 90 + 10;
				cout << i << " элемент > " << A[i];
				cout << endl;
			}
			MergeSort(A, 1, n); //вызов сортирующей процедуры
			cout << "Упорядоченный массив: "; //вывод упорядоченного массива
			for (i = 1; i <= n; i++) cout << A[i] << " ";
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

