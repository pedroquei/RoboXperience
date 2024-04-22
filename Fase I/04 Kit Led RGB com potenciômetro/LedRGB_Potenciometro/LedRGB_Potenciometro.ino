#define LedGreen 10
#define LedRed 11
#define LedBlue 9

int pot1;
int rgbRed;
int pot2;
int rgbGreen;
int pot3;
int rgbBlue;


void setup() {
pinMode (LedGreen, OUTPUT);
pinMode (LedRed, OUTPUT);
pinMode (LedBlue, OUTPUT);
}

void loop() {

pot3 = analogRead(1);
rgbBlue = map(pot3,0,1023,0,255);
analogWrite(LedBlue, rgbBlue);
pot1 = analogRead(3);
rgbGreen = map(pot1,0,1023,0,255);
analogWrite(LedGreen, rgbGreen);
pot2 = analogRead(2);
rgbRed = map(pot2,0,1023,0,255);
analogWrite(LedRed, rgbRed);
}