/*
Test program for Led class with on, off, status and blink methods
Copyright (c) 2016 Dorian McIntire
dorianmc@gmail.com

Methods are:
Led1.off()
Led1.on()
Led1.status()
Led1.blink(delay)
where delay is in milliseconds
*/

#include <Led.h>

Led Led1 = Led(3);
Led Led2 = Led(4);
Led Led3 = Led(2);

void setup()
{
  //no setup necessary for Led class
}

void loop()
{
Led1.blink(100);
Led2.blink(1000);
Led3.blink(500);
}
