#include <vector>
#include "Resistor.h"
 #include "Decoder.h"
#include"Circuit.h"
using namespace std;

int main(int argc, char const *argv[])
{

/////////////////////////////////////////////////// BAND
     vector<Color> colorCode, colorCode2, colorCode3, colorCode4;
     Band band;

     colorCode.push_back(band.black);
     colorCode.push_back(band.brown);
     colorCode.push_back(band.orange);
     colorCode.push_back(band.gold);

    colorCode2.push_back(band.black);
    colorCode2.push_back(band.black);
    colorCode2.push_back(band.black);

    colorCode3.push_back(band.red);
    colorCode3.push_back(band.brown);
    colorCode3.push_back(band.blue);
    colorCode3.push_back(band.silver);

////////////////////////////////////////////Wrong band
    colorCode4.push_back(band.red);
    colorCode4.push_back(band.brown);
    colorCode4.push_back(band.blue);
    colorCode4.push_back(band.red);
    colorCode4.push_back(band.silver);

////////////////////////////////////////////////////CREATE PIECES

//Decoder
     Decoder decoder;

//Resistors
     Resistor r(colorCode);
     Resistor r2(colorCode2);
     Resistor r3(colorCode3);
     Resistor r4(colorCode3);
//Voltage source
    VoltageSource voltage(10);

    Circuit circuit;
/////////////////////////////////////////////////////////////////////////CONNECT PIECES
    voltage.set_neighbour(&r);
    r.set_neighbour(&r);
    r2.set_neighbour(&r4);
//    r4.set_neighbour(&r);
//    r.set_neighbour(&voltage);
//    r4.set_neighbour(&r3);



///////////////////////////////////////////////////////////////////////RUN CIRCUIT
    vector<Piece*>visited;
    circuit.run_circuit(&voltage,visited);
    return 0;
}
