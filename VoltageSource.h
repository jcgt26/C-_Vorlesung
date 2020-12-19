
#ifndef PRAKTIKUM_WIDERSTAND_VOLTAGESOURCE_H
#define PRAKTIKUM_WIDERSTAND_VOLTAGESOURCE_H
//#include "Piece.h"
#include "Resistor.h"

class VoltageSource : public Piece{
public:
    VoltageSource(float voltage);
    float get_value();
private:

    float voltage;
};


#endif //PRAKTIKUM_WIDERSTAND_VOLTAGESOURCE_H
