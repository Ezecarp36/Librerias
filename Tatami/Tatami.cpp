#include "Tatami.h"

Tatami::Tatami(int p)
{
    pin = p;
    pinMode(pin, INPUT);
}

float Tatami::SensorRead()
{
    long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + analogRead(pin);
    }
    float read = suma / n;
    read = read * 1000 / 1024.0;

    return (read);
}

