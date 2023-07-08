/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   empleadoDestajo.h
 * Author: ESCINF
 *
 * Created on 3 de octubre de 2019, 18:43
 */

#ifndef EMPLEADODESTAJO_H
#define EMPLEADODESTAJO_H

#include "empleado.h"

class empleadoDestajo : public empleado {
public:
    empleadoDestajo(int, double);
    virtual ~empleadoDestajo();
    
private:
   int horasTrabajadas;
   double precioPorHora;

};

#endif /* EMPLEADODESTAJO_H */

