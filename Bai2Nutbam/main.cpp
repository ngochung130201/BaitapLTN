#include <Arduino.h>
int x = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x = digitalRead(2);
  if (x==HIGH) {
    //Bac led
    digitalWrite(13,HIGH);
  }
  else {
    //tat led
    digitalWrite(13,LOW);
  }
  delay(1000);
}