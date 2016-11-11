// Libraries 
#include <LiquidCrystal.h>
#include <LCDKeypad.h>
//Controls
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

//Real switches
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
  Serial.begin(9600);

  //Labels for continous testing.
  Serial.println("US: \t MFS: \t DS: \t IVS: \t LS: \t VFS:");	
}

void loop() {
//Code block for testing continous and for getting data for in a spreadsheet.
    Serial.print(analogRead(UpdateSwitch));
    Serial.print("\t");
    Serial.print(analogRead(MultiFlashSwitch));
    Serial.print("\t");
    Serial.print(analogRead(DetectorSwitch));
    Serial.print("\t");
    Serial.print(analogRead(IVSwitch));  
    Serial.print("\t");
    Serial.print(analogRead(LightningSwitch));
    Serial.print("\t");
    Serial.println(analogRead(ValveFlushSwitch));
    Serial.println("");	





  delay(200);



//Code block for testing when ] key is pressed.
//  if (Serial.available() > 0) {
//    incomingByte = Serial.read();
//    if(incomingByte == 93) {  //93 = ]
//      Serial.println("Switch Test: ");
//      Serial.println("LCD Control: ");
//
//      Serial.print("\t LeftButton: ");
//      Serial.println(analogRead(LeftButton));
//      Serial.print("\t RightButton: ");
//      Serial.println(analogRead(RightButton));
//      Serial.print("\t DownButton: ");
//      Serial.println(analogRead(DownButton));
//      Serial.print("\t UpButton: ");
//      Serial.println(analogRead(UpButton));
//      Serial.print("\t EnterButton: ");
//      Serial.println(analogRead(EnterButton));
//
//
//      Serial.println("\"real switches\"");
//      Serial.print("\t LaunchButton: ");
//      Serial.println(analogRead(LaunchButton));
//      Serial.print("\t UpdateSwitch: ");
//      Serial.println(analogRead(UpdateSwitch));
//      Serial.print("\t MultiFlashSwitch: ");
//      Serial.println(analogRead(MultiFlashSwitch));
//      Serial.print("\t DetectorSwitch: ");
//      Serial.println(analogRead(DetectorSwitch));
//      Serial.print("\t IVSwitch: ");
//      Serial.println(analogRead(IVSwitch));  
//      Serial.print("\t LightningSwitch: ");
//      Serial.println(analogRead(LightningSwitch));
//      Serial.print("\t ValveFlushSwitch: ");
//      Serial.println(analogRead(ValveFlushSwitch));
//      Serial.println("");
//    }
//  }
}
