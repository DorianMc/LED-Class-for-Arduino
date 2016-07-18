class LED
{
public:
LED(int pin);
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


LED::LED(int pin)
{
  _pin = pin;
  pinMode(_pin,OUTPUT);
}

 void LED::on()
{
  digitalWrite(_pin, HIGH);
_status = 1;
} 

 void LED::off()
{
  digitalWrite(_pin, LOW);
 _status = 0;} 

 bool LED::status()
{
  return _status;
} 

 void LED::blink(int delayTime)
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
 
//--------------------

LED LED1 = LED(3);
LED LED2 = LED(4);
LED LED3 = LED(2);


void setup()
{

}

void loop()
{
LED1.blink(100);
LED2.blink(1000);
LED3.blink(500);
}



 
