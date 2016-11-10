// Libraries 
#include <LiquidCrystal.h>
#include <LCDKeypad.h>

int LeftButton = A1;
int LeftValue = 0;
int RightButton = A2;
int RightValue = 0;
int DownButton = A3;
int DownValue = 0;
int UpButton = A4;
int UpValue = 0;
int EnterButton = A5;
int EnterValue = 0;
int LaunchButton = A6;
int LaunchButtonValue = 0;
int UpdateSwitch = A7;
int UpdateValue = 0;
int MultiFlashSwitch = A8;
int MultiFlashValue = 1;
int IRDetect = A9;
int IRValue = 0;
int PeizoDetect = A10;
int PeizoValue = 0;
int DetectorSwitch = A15;
int DetectorValue = 0;
int IVSwitch = A13;
int IVValue = 0;
int LightningSwitch = A14;
int LightningValue = 0;
int LightningDetect = A11;
int LightningDetectValue = 0;
int ValveFlushSwitch = A12;
int ValveFlushSwitchValue = 0;


int incomingByte = 0;   

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    if(Serial.read() = 93){
      Serial.print("LaunchButton: ");
      Serial.println(analogRead(LaunchButton));
      Serial.print("UpdateSwitch: ");
      Serial.println(analogRead(UpdateSwitch));
      Serial.print("MultiFlashSwitch: ");
      Serial.println(analogRead(MultiFlashSwitch));
      Serial.print("DetectorSwitch: ");
      Serial.println(analogRead(DetectorSwitch));
      Serial.print("IVSwitch: ");
      Serial.println(analogRead(IVSwitch));  
      Serial.print("LightningSwitch: ");
      Serial.println(analogRead(LightningSwitch));
      Serial.print("ValveFlushSwitch: ");
      Serial.println(analogRead(ValveFlushSwitch));
      Serial.println("");
    }
  }
}
