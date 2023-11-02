
#include <iostream>
#ifndef UNTITLED_CLOCK_H
#define UNTITLED_CLOCK_H

class Clock{

public:
    Clock();

    void run();
private:

    void show();
    void tick();
    int Hour;
    int Minute;
    int Second;

};


#endif //UNTITLED_CLOCK_H
