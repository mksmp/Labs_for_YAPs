// Lab_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <limits>
#include <bitset>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int k, a1, b1, x1, x2;
    cout << "1." << endl;
    cout << "Panin Maxim Sergeevich, 201-351" << endl;
    cout << "2." << endl;
    cout << "min int = " << INT_MIN << " max int = " << INT_MAX << " size of int = " << sizeof(int) << endl;
    cout << "min unsigned int = " << "0" << " max unsigned int = " << UINT_MAX << " size of unsigned int = " << sizeof(unsigned int) << endl;
    cout << "min short = " << SHRT_MIN << " max int = " << SHRT_MAX << " size of short = " << sizeof(short) << endl;
    cout << "min unsigned short = " << "0" << " max unsigned short = " << USHRT_MAX << " size of unsigned short = " << sizeof(unsigned short) << endl;
    cout << "min long = " << LONG_MIN << " max long = " << LONG_MAX << " size of long = " << sizeof(long) << endl;
    cout << "min long long = " << LLONG_MAX << " max long long = " << LLONG_MAX << " size of long long = " << sizeof(long long) << endl;
    cout << "min double = " << DBL_MIN << " max double = " << DBL_MAX << " size of double = " << sizeof(double) << endl;
    cout << "min char = " << CHAR_MIN << " max char = " << CHAR_MAX << " size of char = " << sizeof(char) << endl;
    cout << "min bool = " << "false" << " max bool = " << "true" << " size of bool = " << sizeof(bool) << endl;
    setlocale(LC_ALL, "Russian");
    cout << "3." << endl << "Введите число: ";
    cin >> k;
    cout << "Бинарный: " << std::bitset<16>(k);
    cout << endl << "Шестнадцатиричный: " << std::hex << k;
    cout << endl << "bool: " << bool(k);
    cout << endl << "double: " << double(k);
    cout << endl << "char: " << char(k);
    cout << endl << "4.";
    cout << endl;
    cout << "Введите коэфиценты a * x = b: ";
    cin >> a1 >> b1;
    cout << endl;
    cout << a1 << " * x = " << b1 << endl;
    cout << "x = " << b1 << " / " << a1 << endl;
    cout << "x = " << double(b1) / a1 << endl;
    cout << "Ответ: " << double(b1) / a1 << endl;
    cout << "5." << endl;
    cout << "Введите координаты отрезка на прямой: ";
    cin >> x1 >> x2;
    cout << "Середина отрезка находится в точке с координатой: " << (x1 + x2) / 2.0;
}


