#include "TouchSensor.h"
#include "global.h"

bool state = false;
bool flag = false;
 
void TouchSensorSetup()  {
    Serial.begin(9600);
    Serial.println("TouchSensorInit");
    pinMode(TOUCH_PIN, INPUT);
    delay(100);
}
 
void TouchSensor()  {
  int sensorValue = digitalRead(TOUCH_PIN);
  flag = false;
  while(sensorValue == 1){
    flag = true;
    sensorValue = digitalRead(TOUCH_PIN);
  }
  if(flag){
    state = !state;
  }
  if(state){
    Serial.println(CMD::TOUCH_HIGH);
  }
  else{
    Serial.println(CMD::TOUCH_LOW);
  }
}
