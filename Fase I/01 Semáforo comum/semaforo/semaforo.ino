#define Verde 0
#define Amarelo 1
#define Vermelho 2
#define Verde2 3
#define Vermelho2 4

void setup()
{
  pinMode(Verde, OUTPUT);
  pinMode(Amarelo, OUTPUT);
  pinMode(Vermelho, OUTPUT);
  pinMode(Vermelho2, OUTPUT);
  pinMode(Verde2, OUTPUT);
}

void loop()
{
  digitalWrite(Vermelho, HIGH);
  digitalWrite(Verde2, HIGH);
  digitalWrite(Vermelho2, LOW);
  delay(2000);
  digitalWrite(Vermelho, LOW);
  digitalWrite(Verde2, LOW);
  
  digitalWrite(Verde, HIGH);
  digitalWrite(Vermelho2, HIGH);
  delay(1000);
  digitalWrite(Verde, LOW);
  
  digitalWrite(Amarelo, HIGH);
  delay(1000);
  digitalWrite(Amarelo, LOW);
  
}