/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rectangulo.h
 * Author: ESCINF
 *
 * Created on 14 de octubre de 2019, 15:15
 */

#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "figura.h"

class rectangulo : public figura {
   
public:
    rectangulo(double, double);
    virtual double calcularArea();
    virtual ~rectangulo();
    
    
private:
    double base;
    double altura;

};

#endif /* RECTANGULO_H */

