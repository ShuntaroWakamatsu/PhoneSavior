#include "IR.h"
#include "global.h"

void IR_Setup() {
        pinMode(IR_PIN, INPUT);
        Serial.begin(9600);
        Serial.println("IRInit");
}

void IR() {
        int sensorStatus = digitalRead(IR_PIN);
        if (sensorStatus == 1) {
          	        Serial.println(CMD::IR_MOTION);
        }
        else {
          	        Serial.println(CMD::IR_NO_MOTION);
        }
}
