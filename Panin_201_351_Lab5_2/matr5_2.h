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
	//��������� ����������� ��������� ����� ����
	double input2();//��������� ����������� ��������� ����� ����
	bool input3(); // ���� ��������
	bool input3(int i, int j); // ���� �������� ����������
	bool input3(int i, int j, double* arr); // ���� �������� ����������
	void print();
	double get_elem(int i, int j);
	//���������� � ������� �������, 
	//�������, ������� ������� � ���������.
	//��������� ����� ������������ � �������
	double sum(const matr* matr2);
	double sum(int i, int j, const double* arr);
	bool mult(const matr* matr2);
	bool mult(int i, int j, const double* arr);
	double trace();
	double det();
	double mult_by_num();
	//��������� ����� ������������
	//matr sum1(const matr* matr2);// ������� �� �����, ����� ������ ���������
};
