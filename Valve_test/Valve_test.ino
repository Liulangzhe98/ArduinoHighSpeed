#include <LiquidCrystal.h>
#include <LCDKeypad.h>
#include <EXROM.h>

LCDKeypad lcd;

int ValveATrigger = 38;
int ValveBTrigger = 40;
int ValveCTrigger = 42;
int ValveDTrigger = 44;

void setup() {
  // put your setup code here, to run once:
  for(int i = 38; i< 53; i+=2)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ValveATrigger,HIGH);
  digitalWrite(ValveBTrigger,LOW);
  digitalWrite(ValveCTrigger,HIGH);
  digitalWrite(50,LOW);
  digitalWrite(48, HIGH);
}
