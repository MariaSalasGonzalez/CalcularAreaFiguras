/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   empleadoFijo.h
 * Author: ESCINF
 *
 * Created on 3 de octubre de 2019, 18:41
 */

#ifndef EMPLEADOFIJO_H
#define EMPLEADOFIJO_H

#include "empleado.h"

class empleadoFijo : public empleado {
public:
    empleadoFijo(double);
    double calcularSalario();
    virtual ~empleadoFijo();
     
private:
    double salarioFijo;
    static const double deduccion;//0.12

};

#endif /* EMPLEADOFIJO_H */

