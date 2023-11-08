//
// Created by Xianming Liu on 07.11.23.
//

#include "salesmanager.h"
Salesmanager::Salesmanager() {
    fixedSalary = 6000;
}


void Salesmanager::init() {
    cout<<"请输入销售经理姓名：";
    cin>>name;
    cout<<"输入销售额：";
    cin>>salesAmount;
}

void Salesmanager::calcSalary(){
    salary = fixedSalary + salesAmount*rate;
}

void Salesmanager::promotion(){
    grade = 3;

}
void Salesmanager::disInfo(){
    cout<<"姓名:"<<name<<endl;
    cout<<"工号:"<<num<<endl;
    cout<<"级别:"<<grade<<endl;
    cout<<"薪水:"<< salary<<endl;
}

Salesmanager::~Salesmanager() {}