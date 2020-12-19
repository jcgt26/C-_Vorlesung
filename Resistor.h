
#ifndef PRAKTIKUM_WIDERSTAND_RESISTOR_H
#define PRAKTIKUM_WIDERSTAND_RESISTOR_H



#include<iostream>
#include<string>
#include<vector>
#include"Band.h"
#include "Piece.h"
#include "VoltageSource.h"
using namespace std;
class Resistor: public Piece {
    using Piece::Piece;
public:

    Resistor(vector<Color> band);
    vector<Color> get_band();


private:
    float resistance;
    vector<Color> myband;
};


#endif //PRAKTIKUM_WIDERSTAND_RESISTOR_H
