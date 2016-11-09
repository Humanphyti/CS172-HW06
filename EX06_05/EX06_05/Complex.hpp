//
//  Complex.hpp
//  EX06_05
//
//  Created by Eben Schumann on 11/8/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>
using namespace std;

class Complex
{
public:
    
    Complex();
    Complex(double);
    Complex(double, double);
    double add(double, double, double, double);
    double subtract(double, double, double, double);
    double multiply(double, double, double, double);
    double divide(double, double, double, double);
    double abs(double, double);
    string toString(double, double);
    double getRealPart();
    double getImaginaryPart();
    
private:
    double a, b, c, d;
    
};

#endif
