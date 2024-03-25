// inclui bibilioteca do servomotor
#include <Servo.h> 

// define pinos dos servos
#define pinServ1 2
#define pinServ2 3
#define pinServ3 4
#define pinServ4 5

// define as portas dos potenciometros
#define pot1 A1
#define pot2 A2
#define pot3 A3
#define pot4 A4

// nomeia os servos
Servo serv1,serv2,serv3,serv4;

// cria as variavies dos angulos de cada motor
int motor1,motor2,motor3,motor4;


void setup() {

  //inicia o monitor serial
  Serial.begin(9600); 

  // atribui pinos dos servos
  serv1.attach(pinServ1);
  serv2.attach(pinServ2);
  serv3.attach(pinServ3);
  serv4.attach(pinServ4);
  
}

void loop(){

  // leitura dos potenciometros
  motor1 = map(analogRead(pot1),0,1023,0,180);
  motor2 = map(analogRead(pot2),0,1023,0,180);
  motor3 = map(analogRead(pot3),0,1023,0,180);
  motor4 = map(analogRead(pot4),0,1023,0,180);
 
  serv1.write(motor1);
  serv2.write(motor2);
  serv3.write(motor3);
  serv4.write(motor4);


  delay(100);

}