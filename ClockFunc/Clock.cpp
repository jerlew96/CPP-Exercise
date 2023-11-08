//
// Created by Xianming Liu on 02.11.23.
//
#include "Clock.h"
#include <iostream>
#include <time.h>
#include <iomanip>
#include <unistd.h>

using namespace std;

Clock::Clock()
{
    time_t t = time(nullptr);
    struct tm ti = *localtime(&t);

    Hour = ti.tm_hour;
    Minute = ti.tm_min;
    Second = ti.tm_sec;
}

void Clock::run(){

    while(1){
//        system("clear");
        show();
        tick();
        sleep(1);
    }
}

void Clock::show(){

    cout<<setw(2)<<setfill('0')<<Hour<<":";
    cout<<setw(2)<<setfill('0')<<Minute<<":";
    cout<<setw(2)<<setfill('0')<<Second;

}

void Clock::tick(){
    sleep(1);
    if(++Second ==60){
        Second = 0;
        Minute += 1;
        if(++Minute == 60){
            Minute = 0;
            Hour += 1;
            if(++Hour == 24){
                Hour = 0;

            }

        }
    }
}
