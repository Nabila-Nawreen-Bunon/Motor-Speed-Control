// C++ code
//
int p1=11,p2=10;
void setup()
{
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);
}

void loop()
{
analogWrite(p1,120);
 analogWrite(p2,0);
  delay(200);
  analogWrite(p1,199);
  analogWrite(p2,10);
  delay(200);
  analogWrite(p1,10);
  analogWrite(p2,250);
  delay(900);
  
}