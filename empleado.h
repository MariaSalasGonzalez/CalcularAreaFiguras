/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   empleado.h
 * Author: ESCINF
 *
 * Created on 3 de octubre de 2019, 18:41
 */

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <sstream>
#include <string>
#include <iostream>
using std::string;



class empleado {
public:
    empleado(string, string);
    virtual double calcularSalario() = 0;
    virtual ~empleado();
    
private:
    string nombre;
    string cedula;
};

#endif /* EMPLEADO_H */

