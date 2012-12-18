// EL test code

void setup()
{
  for(int i = 4; i<8; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

void setEL(int ch)
{
  for(int i = 4; i<8; i++)
  {
    digitalWrite(i, LOW);
  }
  digitalWrite(ch+3, HIGH);
}

int count = 0;
void loop()
{
  setEL(count%4+1);
  delay(2000);
  if(count++ > 1000)count = 0;
  
}
