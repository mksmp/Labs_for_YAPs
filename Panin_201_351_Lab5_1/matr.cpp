#include "matr.h"
#include <vector>

using std::vector;

matr::matr()
{
	cols = 0;
	rows = 0;
	elems = nullptr;
}


matr::~matr()
{
	if (elems != nullptr)
		delete[] elems;
}

double matr::input()
{
	std::cout << "Input number of rows:";
	std::cin >> rows;
	std::cout << "Input number of columns:";
	std::cin >> cols;
	if (elems != nullptr)
		delete[] elems;
	elems = new double[rows * cols];
	for (int i = 0; i < rows * cols; i++)
		elems[i] = i * 37 % 8;
	return true;
}
double matr::input2()
{
	std::cout << "Input number of rows:";
	std::cin >> rows;
	std::cout << "Input number of columns:";
	std::cin >> cols;
	if (elems != nullptr)
		delete[] elems;
	elems = new double[rows * cols];
	for (int i = 0; i < rows * cols; i++)
		elems[i] = i * 42 % 8;
	return true;
}


void matr::print()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			std::cout << get_elem(i, j) << "\t";
		std::cout << std::endl;
	}
}

double matr::get_elem(int i, int j)
{
	return elems[i * cols + j];
}


double matr::sum(const matr* matr2)
{
	if(rows != matr2->rows || cols != matr2->cols)
		return false;
	for (int i = 0; i < rows * cols; i++)
		elems[i] = double(elems[i] + matr2->elems[i]);
	return true;
}

int matr::mult(const matr* matr2)
{
	if (cols != matr2->rows)
		return false;
	//vector <vector <int>> buff(rows, vector <int>(rows, matr2->cols));
	matr buff;
	buff.cols = matr2->cols;
	buff.rows = this->rows;
	buff.elems = new double[buff.cols * buff.rows];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < matr2->cols; j++)
		{
			buff.elems[i * buff.cols + j] = 0;

			for (int q = 0; q < matr2->rows; q++)
			{
				buff.elems[i* buff.cols + j] += elems[i * cols + q] * matr2->elems[q * matr2->cols + j];
			}
		}
	}
		
	delete[] this->elems;
	this->cols = buff.cols;
	this->rows = buff.rows;
	this->elems = new double[cols * rows];
	for (int i = 0; i < cols * rows; i++)
		elems[i] = buff.elems[i];
	return true;
}

double matr::trace()
{
	int k = 0;
	if (rows != cols)
		std::cout << "Error! Programm couldn't complete operation.";
	else {
		for (int i = 0; i < rows * cols; i = i + cols) {
			k = k + elems[i];
			i += 1;
		}

		std::cout << "Summa elementov po diagonali: " << k << std::endl;
	}
	return true;
}

double matr::det()
{
	int det1;
	int det2;
	if (((rows != 2) && (cols != 2)) && ((rows != 3) && (cols != 3)))
		std::cout << "Error! Programm couldn't complete operation.";
	else {
		if ((rows == 2) && (cols == 2)) {
			det1 = elems[0] * elems[3] - elems[1] * elems[2];
			std::cout << det1;
		}
		if ((rows == 3) && (cols == 3)) {
			det2 = elems[0] * elems[4] * elems[8] + elems[6] * elems[1] * elems[5] + elems[3] * elems[7] * elems[2] - elems[6] * elems[4] * elems[2] - elems[0] * elems[7] * elems[5] - elems[3] * elems[1] * elems[8];
			std::cout << det2;
		}

	}
	return true;
}

double matr::mult_by_num()
{
	double num;
	std::cout << "Enter number: ";
	std::cin >> num;
	for (int i = 0; i < rows * cols; i++) {
		elems[i] = elems[i] * num;
	}
	return true;
}

