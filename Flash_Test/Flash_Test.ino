#include <LiquidCrystal.h>
#include <LCDKeypad.h>
#include <EXROM.h>

LCDKeypad lcd;

int Flash = 24;


void setup() {
  // put your setup code here, to run once:
  for(int i = 20; i< 26; i+=2)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Flash,HIGH);
  delay(100);
  digitalWrite(Flash,LOW);
  delay(1000);
}
