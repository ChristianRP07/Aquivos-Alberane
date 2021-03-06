#include <SevSeg.h>


SevSeg sevseg; 

void setup() {
  byte numDigits = 4;
  byte digitPins[] = {2, 3, 4, 5};
  byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
  bool resistorsOnSegments = true; // 'false' means resistors are on digit pins
  byte hardwareConfig = COMMON_ANODE; // See README.md for options
  bool updateWithDelays = false; // Default 'false' is Recommended
  bool leadingZeros = false; // Use 'true' if you'd like to keep the leading zeros
  bool disableDecPoint = false; // Use 'true' if your decimal point doesn't exist or isn't connected
  
  sevseg.begin(
    hardwareConfig, 
    numDigits, 
    digitPins, 
    segmentPins, 
    resistorsOnSegments,
    updateWithDelays, 
    leadingZeros, 
    disableDecPoint
  );
    
  sevseg.setBrightness(90);
}

void loop() {
  static unsigned long timer = millis();
  static int deciSeconds = 0;
  static int secreto = 5;
  static bool stopped = false;
  
  if (millis() - timer >= 100 && stopped == false ) {
    timer += 100;
    deciSeconds = random (20); 
    
    if (deciSeconds == secreto) { 
      sevseg.setNumber(secreto, 1);
      stopped = true;
    }else{
    sevseg.setNumber(deciSeconds, 1);
  }
  }
  sevseg.refreshDisplay(); 
  }
