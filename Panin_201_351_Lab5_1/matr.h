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

	double input();//��������� ����������� ��������� ����� ����
	double input2();//��������� ����������� ��������� ����� ����
	void print();
	double get_elem(int i, int j);
	//���������� � ������� �������, 
	//�������, ������� ������� � ���������.
	//��������� ����� ������������ � �������
	double sum(const matr* matr2); // ��������� �� bool
	int mult(const matr* matr2); // bool
	double trace();
	double det();
	double mult_by_num(); // bool || void
	//��������� ����� ������������
	//matr sum1(const matr* matr2);// ������� �� �����, ����� ������ ���������
};
