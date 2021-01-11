#include "square.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void square::corner_square()
{
	x_corner = x + length_of_side;
	y_corner = y - length_of_side;
}

void square::print_square()
{
	cout << "���������� ����� ������� ����� ��������: (" << x << ";" << y << ")\n"
		<< "����� �������: " << length_of_side << "\n"
		<< "���������� ������ ������ �����: (" << x_corner << ";" << y_corner << ")\n\n"
		<< "��������� ������� �� �����:" << endl;
	for (int i = 0; i < length_of_side; i++) {
		for (int j = 0; j < length_of_side; j++)
			cout << ". ";
		cout << endl;
	}
	cout << endl;
}
