#pragma once
class Position
{
protected:
	/*для квадрата 2 координаты это значения для двух крайних точек по диагонали, его сторона*/
	/*для круга 1 координата это координата центра, его радиус*/
	int x = 0;//, x0 = 0, x_corner = 0;
	int y = 0;//, y0 = 0, y_corner = 0;
//	int length_of_side = 0;
//	int radius = 0, diametr = 0;
public:
	Position();
	Position(int x1, int y1);
	//Position(int x0_pos, int y0_pos, int rad, int diam); // конструктор для круга со значениями сдвига и радиуса
	//Position(int x_pos, int y_pos, int length); // конструктор для верхней левой точки квадрата со значением стороны

	~Position();


};

