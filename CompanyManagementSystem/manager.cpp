//
// Created by Xianming Liu on 07.11.23.
//

#include "manager.h"
#include <iostream>
Manager::Manager() {
    fixedSalary = 8000;
}

void Manager::init() {
    cout<<"请输入经理姓名：";
    cin>>name;
}

void Manager::calcSalary(){
    salary = fixedSalary;
}

void Manager::promotion(){
    grade = 4;

}
void Manager::disInfo(){
    cout<<"姓名:"<<name<<endl;
    cout<<"工号:"<<num<<endl;
    cout<<"级别:"<<grade<<endl;
    cout<<"薪水:"<< salary<<endl;
}

void Manager::addSalary(float bonus) {
    fixedSalary += bonus;
}

Manager::~Manager() noexcept {}