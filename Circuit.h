//
// Created by Puma on 12/6/2020.
//

#ifndef PRAKTIKUM_WIDERSTAND_CIRCUIT_H
#define PRAKTIKUM_WIDERSTAND_CIRCUIT_H
#include"Piece.h"
#include"Resistor.h"
#include"VoltageSource.h"
#include<vector>
#include<iostream>
using namespace std;
class Circuit {
public:
    Circuit() =  default;
    void run_circuit(Piece*,vector<Piece*>);
    void print_results();

private:
    float total_voltage =0;
    float total_resistance = 0;
    bool closed = false;
    };


#endif //PRAKTIKUM_WIDERSTAND_CIRCUIT_H
