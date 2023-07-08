/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   figura.h
 * Author: ESCINF
 *
 * Created on 14 de octubre de 2019, 15:14
 */

#ifndef FIGURA_H
#define FIGURA_H

#include <sstream>
using std::string;

class figura {
    
public:
    figura();
    virtual double calcularArea();
    virtual ~figura();
    
private:
   
    

};

#endif /* FIGURA_H */

