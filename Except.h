//
// Created by Puma on 12/19/2020.
//

#ifndef PRAKTIKUM_WIDERSTAND_EXCEPT_H
#define PRAKTIKUM_WIDERSTAND_EXCEPT_H
#include <exception>
#include<string>
#include <iostream>
class Except : virtual public std::exception{
protected:
        std::string errMsg;

public:
    explicit Except(const std::string& err):errMsg(err){};
    virtual const char* what() const throw(){
//        std::cout << "eXEC"<< std:endl;
    return errMsg.c_str();
    }
    };


#endif //PRAKTIKUM_WIDERSTAND_EXCEPT_H
