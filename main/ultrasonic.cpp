#include "ultrasonic.h"
#include "global.h"

void UltrasonicSetup() {
        pinMode(TRIG_PIN, OUTPUT);
        pinMode(ECHO_PIN, INPUT);
        Serial.begin(9600);
        Serial.println("ultrasonicInit");
        delay(100);
}

void Ultrasonic() {
        digitalWrite(TRIG_PIN, LOW);
        delayMicroseconds(2);
        digitalWrite(TRIG_PIN, HIGH);
        delayMicroseconds(10);
        digitalWrite(TRIG_PIN, LOW);
        uint32_t duration = pulseIn(ECHO_PIN, HIGH);
        float distance = duration * 0.034 / 2;
        if (distance < 49) {
                Serial.println(CMD::ULTRASONIC_0);
        }
        else if (distance < 99) {
                Serial.println(CMD::ULTRASONIC_1);
        }
        else if (distance < 149) {
                Serial.println(CMD::ULTRASONIC_2);
        }
        else {
                Serial.println(CMD::ULTRASONIC_3);
        }
}
