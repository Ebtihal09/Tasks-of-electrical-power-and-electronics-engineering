int Led1 = 7;
int Led2 = 13;
int Led3 = 2;
int Led4 = 4;
int Led5 = 8;
int Led6 = 2;

void setup()
{
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  pinMode(Led6, OUTPUT);
}

void loop()
{
  digitalWrite(Led1, HIGH);
  delay(500); 
  digitalWrite(Led1, LOW);
  delay(500);
  
  digitalWrite(Led2, HIGH);
  delay(500); 
  digitalWrite(Led2, LOW);
  delay(500);
  
  digitalWrite(Led3, HIGH);
  delay(500); 
  digitalWrite(Led3, LOW);
  delay(500);
  
  digitalWrite(Led4, HIGH);
  delay(500); 
  digitalWrite(Led4, LOW);
  delay(500);
  
  digitalWrite(Led5, HIGH);
  delay(500); 
  digitalWrite(Led5, LOW);
  delay(500); 
  
  
}