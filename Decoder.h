

#ifndef PRAKTIKUM_WIDERSTAND_DECODER_H
#define PRAKTIKUM_WIDERSTAND_DECODER_H


#include<vector>
#include <string>
#include<iostream>
#include"Band.h"
#include "Resistor.h"
#include "Piece.h"

// using namespace std;
class Decoder
{
public:
    Decoder();
    ~Decoder();
    float decode(Resistor resistor);
    float decode_band(vector<Color>);
    vector<Color> encode(float resistance, int bandSize);

private:

    Band band;
    vector<Color> create_band(float resistance, int bandtype);//to check
    Color find_color(char color); //to check
    Color find_multiplier(int firstValues, int resistance); //to chek

};



#endif //PRAKTIKUM_WIDERSTAND_DECODER_H
