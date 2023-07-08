/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   empleadoFijo.cpp
 * Author: ESCINF
 * 
 * Created on 3 de octubre de 2019, 18:41
 */

#include "empleadoFijo.h"

empleadoFijo::empleadoFijo(double salarioFijo): 
    empleado(), salarioFijo(salarioFijo) {
}

empleadoFijo::~empleadoFijo() {
}

double empleadoFijo::calcularSalario(){
    return salarioFijo = (salarioFijo * deduccion);
}

const double empleadoFijo::deduccion = 0.12;