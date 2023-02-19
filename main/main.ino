#include "GestureSensor.h"
#include "IR.h"
#include "light.h"
#include "RotarySensor.h"
#include "TouchSensor.h"
#include "ultrasonic.h"
#include "global.h"

void setup(void) {
  GestureSensorSetup();
  IR_Setup();
  LightSetup();
  RotarySensorSetup();
  TouchSensorSetup();
  UltrasonicSetup();
  delay(2000);
  Serial.println(CMD::START);
}

void loop(void) {
  GestureSensor();
  IR();
  Light();
  RotarySensor();
  TouchSensor();
  Ultrasonic();
  delay(200);
}
