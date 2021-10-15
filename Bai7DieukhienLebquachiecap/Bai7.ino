// C++ code
//
int x = 0;
void setup()
{
  pinMode(A0, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  x = analogRead(A0);
  int brightness = map(x,0,1023,0,255);
  analogWrite(9,brightness);
}
