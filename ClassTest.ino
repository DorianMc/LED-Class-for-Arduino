class LED{
public:

LED(int pin);
void begin();
void on();
void off();
bool status();
void blink();

private:
int _pin;
bool _status;
int _delay;
int _rate;};

LED::LED(int pin){
  _pin = pin;}

 void LED::begin(){
  pinMode(_pin, OUTPUT);}

 void LED::on(){
  digitalWrite(_pin, HIGH);
_status = 1;} 

 void LED::off(){
  digitalWrite(_pin, LOW);
 _status = 0;} 

 bool LED::status(){
  return _status;} 

//--------------------

LED LED1(3);
LED LED2(4);

void setup()
{
LED1.begin();
LED2.begin();
}

void loop()
{
LED1.on();
delay(500);
LED1.off();
delay (500);
LED2.on();
delay(500);
LED2.off();
delay(500);

}



 
