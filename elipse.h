/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   elipse.h
 * Author: ESCINF
 *
 * Created on 14 de octubre de 2019, 15:15
 */

#ifndef ELIPSE_H
#define ELIPSE_H

#include "figura.h"

class elipse : public figura {
    
public:
    elipse(double, double);
    virtual double calcularArea();
    virtual ~elipse();
    
private:
    double a; //radio mayor
    double b; //radio menor
    static const double PI;
 

};

#endif /* ELIPSE_H */

