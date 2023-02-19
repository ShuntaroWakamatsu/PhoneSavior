/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-light-sensor
 */
#include "light.h"
#include "global.h"

void LightSetup() {
  Serial.begin(9600);
  Serial.println("lightInit");
  delay(100);
}

void Light() {
  int lightVal = analogRead(LIGHT_PIN);
  if (lightVal < 200) {
    Serial.println(CMD::LIGHT_DARK);
  } 
  else {
    Serial.println(CMD::LIGHT_BRIGHT);
  }
}
