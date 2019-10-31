#include <Wire.h>
#include<SoftWire.h> 
#include "Adafruit_VCNL4010.h"

Adafruit_VCNL4010 vcnl;

void setup() {
  Serial.begin(9600); //i2c address 13
  Serial.println("VCNL4010 test");
  pinMode(PA6, OUTPUT);
  Wire.begin(); 
  digitalWrite(PA6, LOW);
 
  if (! vcnl.begin()){
    Serial.println("Sensor not found :(");
    while (1);
  }
  Serial.println("Found VCNL4010");
}

void loop() {
  if(vcnl.readProximity() >= 2250){ 
    digitalWrite(PA6, HIGH);
  }
  else{
    digitalWrite(PA6, LOW);
  }
   Serial.print("Ambient: "); Serial.println(vcnl.readAmbient());
   Serial.print("Proximity: "); Serial.println(vcnl.readProximity());
   delay(100);
}
