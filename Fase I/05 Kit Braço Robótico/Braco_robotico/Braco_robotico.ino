#include <Servo.h>

Servo servo;
int pos;

void setup()
{
  servo.attach(2);
}

void loop()
{
  for(pos = 0;pos <= 180; pos++){
  	servo.write(pos);
    delay(20);
  }
  for(pos = 180;pos >= 0; pos--){
  	servo.write(pos);
    delay(20);
  }
}