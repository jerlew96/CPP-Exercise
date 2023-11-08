//
// Created by Xianming Liu on 07.11.23.
//

#ifndef CPPEX11_COMPANYMANAGEMENTSYSTEM_SALESMAN_H
#define CPPEX11_COMPANYMANAGEMENTSYSTEM_SALESMAN_H
#include "employee.h"

class Salesman :virtual public Employee{
public:
    Salesman();
    virtual void init();
    virtual void calcSalary();
    virtual void promotion();
    virtual void disInfo();
    ~Salesman();
protected:
    int salesAmount;
    float rate;


};


#endif //CPPEX11_COMPANYMANAGEMENTSYSTEM_SALESMAN_H
