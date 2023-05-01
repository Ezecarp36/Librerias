#ifndef _TATAMI_H
#define _TATAMI_H
#include "Arduino.h"

class Tatami
{
private:
    int pin;
    int minValue = 300;
    int maxValue = 700;
    int n = 5;

public:
    Tatami(int p);
    float SensorRead();
};
#endif