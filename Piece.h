

#ifndef PRAKTIKUM_WIDERSTAND_PIECE_H
#define PRAKTIKUM_WIDERSTAND_PIECE_H
#include <vector>
#include <string>
#include<iostream>
using namespace std;
class Piece {

public:
    Piece(float,string);
    //getter
    virtual float get_value();
    virtual vector<Piece*> get_neighbours();
    virtual string get_type();
    //setter
    virtual void set_neighbour(Piece*);
    virtual void set_value(float);
//

private:
protected :
    float value = 0;
    vector<Piece*> neighbours;
    string myType;
};





#endif //PRAKTIKUM_WIDERSTAND_PIECE_H
