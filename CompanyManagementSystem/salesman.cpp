//
// Created by Xianming Liu on 07.11.23.
//

#include "salesman.h"

Salesman::Salesman() {
    rate = 0.04;
}

void Salesman::init() {
    cout<<"请输入销售员姓名：";
    cin>>name;
    cout<<"输入销售额：";
    cin>>salesAmount;
}

void Salesman::calcSalary(){
    salary = salesAmount*rate;
}

void Salesman::promotion(){
    grade = 2;

}
void Salesman::disInfo(){
    cout<<"姓名:"<<name<<endl;
    cout<<"工号:"<<num<<endl;
    cout<<"级别:"<<grade<<endl;
    cout<<"薪水:"<< salary<<endl;
}

Salesman::~Salesman(){}