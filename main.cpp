/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ESCINF
 *
 * Created on 14 de octubre de 2019, 15:13
 */



#include "figura.h"
#include "elipse.h"
#include "rectangulo.h"

#include <sstream>
#include <iostream>

using namespace std;



int main() {

    figura* f1= new rectangulo(10,15);
    figura* f2= new elipse(5,12);    
    
    cout<<"Rectangulo: "<<f1->calcularArea();
    cout<<"Elipse: "<<f2->calcularArea();       
            
    return 0;
}

