
#include "Piece.h"


Piece::Piece(float val, string type):myType(type),value(val){

}
void Piece::set_value(float val) {
    this->value = val;
}

float Piece::get_value() {
    return this->value;
}

vector<Piece*>Piece::get_neighbours(){
    return this->neighbours;
}
void Piece::set_neighbour(Piece *p) {
    this->neighbours.push_back(p);

}
string Piece::get_type() {
    return this->myType;
}
