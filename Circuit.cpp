//
// Created by Puma on 12/6/2020.
//

#include "Circuit.h"



void Circuit::run_circuit(Piece *root, vector<Piece*> visited) {
    bool done = false;
    string voltageType = typeid(VoltageSource).name();
    string resistorType = typeid(Resistor).name();
    vector<Piece*> stack = root->get_neighbours();
    visited.push_back(root);
    cout << "-------------------------------------"<<endl;
    cout<<"Actual Node: "<< root->get_value()<<endl;
    cout<<"Actual type: "<< root->get_type()<<endl;

    if(root->get_type()==voltageType){
        total_voltage+=root->get_value();
    }

    if(root->get_type()==resistorType){
        total_resistance+= root->get_value();
    }



    if(stack.empty() || this->closed) done = true;
    if(!done ){
        for(Piece *neighbour: stack){
            if(neighbour->get_type()==voltageType){
                cout << "CIRCUIT CLOSED"<< endl;
                this->closed = true;
                print_results();
                break;
            }
            if(std::count(visited.begin(), visited.end(), neighbour)){
                continue;
            }

            cout<< neighbour->get_value()<<endl;
            Circuit::run_circuit(neighbour, visited);

        }
    }else{
        try{
            if(!this->closed){
                throw "Error Circuit not closed";
            }
            print_results();

        }catch(char *err){
            cerr << err << endl;
            exit(1); //mal Fragen
        }
    }


}

void Circuit::print_results(){
    cout << "-------------------------------------"<<endl;
    cout << "TOTAL RESISTANCE: "<<this->total_resistance <<endl;
    cout << "TOTAL VOLTAGE: "<<this->total_voltage <<endl;
    try {
        if (total_resistance == 0) {
            throw "Division by Zero";
        }
        cout << "TOTAL AMPERAGE: "<< total_voltage/total_resistance <<endl;

    }catch(char *err){
        cerr << err<< endl;
    }

}
