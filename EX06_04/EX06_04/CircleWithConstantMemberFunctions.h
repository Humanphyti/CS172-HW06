//
//  CircleWithConstantMemberFunctions.h
//  EX06_04
//
//  Created by Eben Schumann on 11/8/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
    Circle();
    Circle(double);
    double getArea() const;
    double getRadius() const;
    void setRadius(double);
    static int getNumberOfObjects();
    bool operator<(Circle& that);
    
private:
    double radius;
    static int numberOfObjects;
};

#endif /* CircleWithConstantMemberFunctions_h */
