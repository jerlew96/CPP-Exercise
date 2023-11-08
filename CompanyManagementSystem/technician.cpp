//
// Created by Xianming Liu on 07.11.23.
//
#include <iostream>
#include "technician.h"
Technician::Technician() {

    moneyPerHour = 100;
}
void Technician::init() {
    cout<<"请输入技术人员姓名：";
    cin>>name;
    cout<<"请输入技术人员的工时:";
    cin>>workingHour;
}
void Technician::calcSalary(){
    salary = workingHour*moneyPerHour;
}

void Technician::promotion(){
    grade = 3;

}
void Technician::disInfo(){
    cout<<"姓名:"<<name<<endl;
    cout<<"工号:"<<num<<endl;
    cout<<"级别:"<<grade<<endl;
    cout<<"薪水:"<< salary<<endl;
}

Technician::~Technician() {}