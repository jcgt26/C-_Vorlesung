#ifndef PRAKTIKUM_WIDERSTAND_PIECE_H
#define PRAKTIKUM_WIDERSTAND_PIECE_H
#include <vector>
#include <string>
#include<iostream>
using namespace std;

/**
 * @brief Piece objects can be connected with other Piece objects
 */
class Piece {

public:
    /**
     *
     * @param value - A Piece can contains a value in relation with his functionality - which is abstract
     * @param type - String to keep tracking the original object
     */
    Piece(float value,string type);
    //////////////////////////////////////////getter
    virtual float get_value();
    /**
     *
     * @return  - Vector of Pieces -> Neighbours
     */
    virtual vector<Piece*> get_neighbours();
    virtual string get_type();
    ////////////////////////////////////////////setter
    /**
     *
     * @param neighbour - Connect this Piece to another Piece
     */
    virtual void set_neighbour(Piece* neighbour);
    virtual void set_value(float);
//

private:
protected :
    float value = 0;
    vector<Piece*> neighbours;
    string myType;
};





#endif //PRAKTIKUM_WIDERSTAND_PIECE_H
