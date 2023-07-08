/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rectangulo.cpp
 * Author: ESCINF
 * 
 * Created on 14 de octubre de 2019, 15:15
 */

#include <sstream>
#include <string>
using std::stringstream;

#include "rectangulo.h"

rectangulo::rectangulo(double base, double altura):
    figura(), base(base), altura(altura){
}

double rectangulo::calcularArea() {
    return base * altura;
}

rectangulo::~rectangulo() {
}


