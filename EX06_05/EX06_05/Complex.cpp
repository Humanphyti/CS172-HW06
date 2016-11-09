//
//  Complex.cpp
//  EX06_05
//
//  Created by Eben Schumann on 11/8/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#include "Complex.hpp"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

Complex::Complex()
{
    
}

Complex::Complex(double a)
{
    a = 0;
}

Complex::Complex(double a, double b)
{
    a = 0;
    b = 0;
}

double add(double a, double b, double c, double d)
{
    double i = sqrt(-1);
    double add=(a + b*i) +( c + d*i) == (a + c) + (b + d)*i;
    return add;
}

double subtract(double a, double b, double c, double d)
{
    double i = sqrt(-1);
    double sub = (a + b*i) - (c + d*i) == (a - c) + (b - d)*i;
    return sub;
}

double multiply(double a, double b, double c, double d)
{
    double i = sqrt(-1);
    double mult = (a + b*i)*(c + d*i) == (a*c - b*d) + (b*c + a*d)*i;
    return mult;
}

double divide(double a, double b, double c, double d)
{
    double i = sqrt(-1);
    double div = (a + b*i) / (c + d*i) == (a*c + b*d) / (c*c + d*d) + ((b*c - a*d)*i) / (c*c + d*d);
    return div;
}

double abs(double a, double b)
{
    double i = sqrt(-1);
    double absolute = abs(a + b*i) == sqrt(a*a + b*b);
    return absolute;
}

string toString(double a, double b)
{
    double i = sqrt(-1);
    if (b == 0)
        return to_string(a);
    else
        return to_string(a + b*i);
}

double getRealPart()
{
    
}

double getImaginaryPart()
{
    
}
