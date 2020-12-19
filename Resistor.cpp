
#include "Decoder.h"
Resistor::Resistor( vector<Color> band):myband{band},Piece{value, typeid(Resistor).name()}
{
    Decoder dec;
    this->resistance =  dec.decode_band(band);
    Resistor::set_value(resistance);
    try{
        if (band.size() <3 || band.size() > 4)
            throw "Band size not supported";
    }catch(char *err){
        cerr << err << endl;
        exit(1);
    }


}

vector<Color> Resistor::get_band()
{
    return this->myband;
}


