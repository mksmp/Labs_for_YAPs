#pragma once
class Position
{
protected:
	/*��� �������� 2 ���������� ��� �������� ��� ���� ������� ����� �� ���������, ��� �������*/
	/*��� ����� 1 ���������� ��� ���������� ������, ��� ������*/
	int x = 0;//, x0 = 0, x_corner = 0;
	int y = 0;//, y0 = 0, y_corner = 0;
//	int length_of_side = 0;
//	int radius = 0, diametr = 0;
public:
	Position();
	Position(int x1, int y1);
	//Position(int x0_pos, int y0_pos, int rad, int diam); // ����������� ��� ����� �� ���������� ������ � �������
	//Position(int x_pos, int y_pos, int length); // ����������� ��� ������� ����� ����� �������� �� ��������� �������

	~Position();


};

