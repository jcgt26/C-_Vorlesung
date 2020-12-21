#ifndef PRAKTIKUM_WIDERSTAND_CIRCUIT_H
#define PRAKTIKUM_WIDERSTAND_CIRCUIT_H
#include"Piece.h"
#include"Resistor.h"
#include"VoltageSource.h"
#include<vector>
#include<iostream>
using namespace std;


/**
 * @details Circuit controls the flow of the assembled pieces; they're already connected
 */
class Circuit {
public:
    Circuit() =  default;
    /**
     *
     * @param root - The first piece to be visited
     * @param visited - vector of visited pieces
     */
    void run_circuit(Piece* root,vector<Piece*> visited);
    /**
     * @details Formatting output for the user
     */
    void print_results();

private:
    float total_voltage =0;
    float total_resistance = 0;
    bool closed = false;
    };


#endif //PRAKTIKUM_WIDERSTAND_CIRCUIT_H
