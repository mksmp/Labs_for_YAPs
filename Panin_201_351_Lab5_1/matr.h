#pragma once
#include<iostream>

class matr
{
private:
	int cols;// number of columns
	int rows;//number of rows
	double* elems; // elements
public:
	matr();
	~matr();

	double input();//заготовим возможность считывать через файл
	double input2();//заготовим возможность считывать через файл
	void print();
	double get_elem(int i, int j);
	//прибавляет к текущей матрице, 
	//матрицу, которая указана в аргументе.
	//результат суммы записывается в текущую
	double sum(const matr* matr2); // исправить на bool
	int mult(const matr* matr2); // bool
	double trace();
	double det();
	double mult_by_num(); // bool || void
	//результат суммы возвращается
	//matr sum1(const matr* matr2);// оставим на потом, когда сможем проверить
};
