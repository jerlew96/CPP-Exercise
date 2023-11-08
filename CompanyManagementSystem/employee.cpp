//
// Created by Xianming Liu on 07.11.23.
//

#include "employee.h"

Employee::Employee() {

    grade = 1;
    num = startNum++;
}

Employee::~Employee() {}


int Employee::startNum = 1000;