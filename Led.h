/*
An Led class with on, off, status and blink methods
Copyright (c) 2016 Dorian McIntire
dorianmc@gmail.com
*/

#ifndef Led_h
#define Led_h

#include "Arduino.h"

class Led
{
public:
Led(int pin);
void on();
void off();
bool status();
void blink(int delayTime);

private:
int _pin;
bool _status;
int _delayTime;
int _rate;
unsigned long previousMillis = millis();
};

#endif
