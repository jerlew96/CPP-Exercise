//
// Created by Xianming Liu on 07.11.23.
//

#ifndef CPPEX11_COMPANYMANAGEMENTSYSTEM_SALESMANAGER_H
#define CPPEX11_COMPANYMANAGEMENTSYSTEM_SALESMANAGER_H
#include "employee.h"
#include "salesman.h"
#include "manager.h"

class Salesmanager :public Salesman, public Manager{
public:
    Salesmanager();
    virtual void init();
    virtual void calcSalary();
    virtual void promotion();
    virtual void disInfo();
    ~Salesmanager();



};


#endif //CPPEX11_COMPANYMANAGEMENTSYSTEM_SALESMANAGER_H
