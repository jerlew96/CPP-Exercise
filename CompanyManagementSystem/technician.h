//
// Created by Xianming Liu on 07.11.23.
//

#ifndef CPPEX11_COMPANYMANAGEMENTSYSTEM_TECHNICIAN_H
#define CPPEX11_COMPANYMANAGEMENTSYSTEM_TECHNICIAN_H
#include "employee.h"

class Technician : public Employee{

public:
    Technician();
    virtual void init();
    virtual void calcSalary();
    virtual void promotion();
    virtual void disInfo();
    ~Technician();

private:
    int workingHour;
    int moneyPerHour;




};


#endif //CPPEX11_COMPANYMANAGEMENTSYSTEM_TECHNICIAN_H
