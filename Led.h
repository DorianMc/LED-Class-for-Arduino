/*
An Led class created by Dorian McIntire
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
