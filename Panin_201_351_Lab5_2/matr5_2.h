#pragma once
#include<iostream>

class matr
{
private:
	int i = 0, j = 0;
	int cols;// number of columns
	int rows;//number of rows
	double* elems; // elements
	double* arr = nullptr; // elems too
public:
	matr();
	matr(int i, int j);
	matr(int i, int j, const double* arr);
	~matr();

	double input();
	//заготовим возможность считывать через файл
	double input2();//заготовим возможность считывать через файл
	bool input3(); // ¬вод двоичной
	bool input3(int i, int j); // ¬вод двоичной перегрузка
	bool input3(int i, int j, double* arr); // ¬вод двоичной перегрузка
	void print();
	double get_elem(int i, int j);
	//прибавл€ет к текущей матрице, 
	//матрицу, котора€ указана в аргументе.
	//результат суммы записываетс€ в текущую
	double sum(const matr* matr2);
	double sum(int i, int j, const double* arr);
	bool mult(const matr* matr2);
	bool mult(int i, int j, const double* arr);
	double trace();
	double det();
	double mult_by_num();
	//результат суммы возвращаетс€
	//matr sum1(const matr* matr2);// оставим на потом, когда сможем проверить
};
