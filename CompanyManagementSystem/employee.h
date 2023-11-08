//
// Created by Xianming Liu on 07.11.23.
//

#ifndef CPPEX11_COMPANYMANAGEMENTSYSTEM_EMPLOYEE_H
#define CPPEX11_COMPANYMANAGEMENTSYSTEM_EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee {
public:
    Employee();
    virtual void init() = 0;
    virtual void calcSalary() = 0;
    virtual void promotion() = 0;
    virtual void disInfo() = 0;
    virtual ~Employee();

protected:
    string name;
    int grade;
    int num;
    float salary;

protected:
    static int startNum;

};


#endif //CPPEX11_COMPANYMANAGEMENTSYSTEM_EMPLOYEE_H
