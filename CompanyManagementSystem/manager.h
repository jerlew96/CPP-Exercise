//
// Created by Xianming Liu on 07.11.23.
//

#ifndef CPPEX11_COMPANYMANAGEMENTSYSTEM_MANAGER_H
#define CPPEX11_COMPANYMANAGEMENTSYSTEM_MANAGER_H
#include "employee.h"


class Manager :virtual public Employee{
public:
    Manager();
    virtual void init();
    virtual void calcSalary();
    virtual void promotion();
    virtual void disInfo();
    void addSalary(float bonus);
    ~Manager();
protected:
    float bonus;
    float fixedSalary;

};


#endif //CPPEX11_COMPANYMANAGEMENTSYSTEM_MANAGER_H
