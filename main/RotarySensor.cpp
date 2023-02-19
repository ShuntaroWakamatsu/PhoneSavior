#include "RotarySensor.h"
#include "global.h"

void RotarySensorSetup() {
    Serial.begin(9600);
    Serial.println("RotarySensorInit");
    pinMode(ROTARY_ANGLE_PIN, INPUT);
}

void RotarySensor() {
  float voltage;
  int Rotary_Val = analogRead(ROTARY_ANGLE_PIN);
  voltage = (float) Rotary_Val / 1023 * ADC_REF;
  float degrees = (voltage / GROVE_VCC) * FULL_ANGLE;
  if (degrees > 59) {
    Serial.println(CMD::ROTARY_0);
  }
  else if (degrees > 119) {
    Serial.println(CMD::ROTARY_1);
  }
  else if (degrees > 179) {
    Serial.println(CMD::ROTARY_2);
  }
  else if (degrees > 239) {
    Serial.println(CMD::ROTARY_3);
  }
  else {
    Serial.println(CMD::ROTARY_4);
  }
}
