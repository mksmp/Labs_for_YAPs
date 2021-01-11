// Panin_201_351_Lab5_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include "matr.h"
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{   
	setlocale(LC_ALL, "Russian");
	//Сложение матриц
	cout << "Сложение матриц:" << endl;
	matr matrA, matrB;
	matrA.input();
	matrB.input2();
	cout << "Matr 1:" << endl;
	matrA.print();
	cout << "Matr 2:" << endl;
	matrB.print();
	matrA.sum(&matrB);
	cout << "Sum:\n ";
	matrA.print();
	cout << endl;

	//Умножение матриц
	cout << "Умножение матриц:" << endl;
	matr matrC, matrD;
	matrC.input();
	matrD.input2();
	cout << "Matr 1:" << endl;
	matrC.print();
	cout << "Matr 2:" << endl;
	matrD.print();
	matrC.mult(&matrD);
	cout << "Mult:\n ";
	matrC.print();
	cout << endl;

	//След матрицы
	cout << "След матрицы:" << endl;
	matr matrE;
	matrE.input2();
	cout << "Matr: " << endl;
	matrE.print();
	matrE.trace();
	cout << endl;

	//Определитель матрицы. Частный случай: матрица 2x2 и матрица 3x3.
	cout << "Определитель матрицы:" << endl;
	matr matrH;
	matrH.input();
	cout << "Matr: " << endl;
	matrH.print();
	matrH.det();
	cout << endl;

	//Умножение матрицы на число
	cout << "Умножение матрицы на число" << endl;
	matr matrF;
	matrF.input2();
	cout << "Matr: " << endl;
	matrF.print();
	matrF.mult_by_num();
	cout << "Mult by num:\n";
	matrF.print();
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
