#pragma once
#include "Position.h"
class square :
    public Position
{
private: 
    int length_of_side = 0;
    int x_corner = 0;
    int y_corner = 0;
public: 
    square(int x_pos, int y_pos, int len) : Position(x_pos, y_pos) { length_of_side = len; }
    void corner_square();
    void print_square();
};
