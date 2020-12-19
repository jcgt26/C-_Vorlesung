
#include "VoltageSource.h"

VoltageSource::VoltageSource(float voltage): voltage{voltage},Piece(voltage, typeid(VoltageSource).name()){

}
float VoltageSource::get_value() {
    return Piece::get_value();
}