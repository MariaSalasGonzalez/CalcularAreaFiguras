/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   elipse.cpp
 * Author: ESCINF
 * 
 * Created on 14 de octubre de 2019, 15:15
 */

#include <sstream>
#include <string>
using std::stringstream;

#include "elipse.h"

elipse::elipse(double a, double b): 
    figura(),
    a(a),
    b(b){
}


elipse::~elipse() {
}


double elipse::calcularArea() {
    return a * b * PI;
}

const double elipse::PI= 3.14156;