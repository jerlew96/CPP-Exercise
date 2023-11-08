#include <iostream>
#include "employee.h"
#include "manager.h"
#include "salesman.h"
#include "salesmanager.h"
#include "technician.h"

int main() {

//    Technician tech;
//    tech.calcSalary();
//    tech.promotion();
//    tech.disInfo();
//
//    Technician tech2;
//    tech2.calcSalary();
//    tech2.promotion();
//    tech2.disInfo();

    Employee *emp[] = {new Technician, new Manager, new Salesman, new Salesmanager};
    for(int i = 0;i <(sizeof(emp) / sizeof(emp[0])); i++){

        emp[i]->init();
        if(typeid(*emp[i])== typeid(Manager)){
            Manager* t;
            t = dynamic_cast<Manager*>(emp[i]);
            t->addSalary(5000);
        }
        emp[i]->calcSalary();
        emp[i]->promotion();
        emp[i]->disInfo();
    }

    for(int i = 0;i <(sizeof(emp) / sizeof(emp[0])); i++){
        delete emp[i];
    }



    return 0;
}
