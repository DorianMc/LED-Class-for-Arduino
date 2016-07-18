#include "Arduino.h"
#include "Led.h"

Led::Led(int pin)
{
  _pin = pin;
  pinMode(_pin,OUTPUT);
}

 void Led::on()
{
  digitalWrite(_pin, HIGH);
_status = 1;
} 

 void Led::off()
{
  digitalWrite(_pin, LOW);
 _status = 0;} 

 bool Led::status()
{
  return _status;
} 

 void Led::blink(int delayTime)
{
  _delayTime = delayTime;

  if (millis() - previousMillis >= _delayTime) //if current system time - last time is greater then desired delay then make last system
  // equal to current system time 
  {
    previousMillis = millis();

    if (_status == 0)
    {
      on();
    }
    else
    {
      off();
    }
  
  }
 }