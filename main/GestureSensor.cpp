#include "GestureSensor.h"
#include "global.h"

void GestureSensorSetup() {
	uint8_t error = 0;
	Serial.begin(9600);
	Serial.println("GestureSensorInit");
	error = paj7620Init();
	if (error) {
		Serial.println("INIT ERROR,CODE:");
		Serial.println(error);
	}
	else {
		Serial.println("INIT OK");
	}
	Serial.println("Please input your gestures:\n");
}
 
void GestureSensor() {
	uint8_t data = 0, data1 = 0, error;
	error = paj7620ReadReg(0x43, 1, &data);
	if (!error) {
		switch (data) {
			case GES_RIGHT_FLAG:
				paj7620ReadReg(0x43, 1, &data);
				Serial.println(CMD::GESTURE_RIGHT);
				break;
			case GES_LEFT_FLAG: 
				paj7620ReadReg(0x43, 1, &data);
				Serial.println(CMD::GESTURE_LEFT);
				break;
			case GES_UP_FLAG:
				paj7620ReadReg(0x43, 1, &data);
				Serial.println(CMD::GESTURE_UP);
				break;
			case GES_DOWN_FLAG:
				paj7620ReadReg(0x43, 1, &data);
				Serial.println(CMD::GESTURE_DOWN);
				break;
			case GES_CLOCKWISE_FLAG:
				Serial.println(CMD::GESTURE_CLOCKW);
				break;
			case GES_COUNT_CLOCKWISE_FLAG:
				Serial.println(CMD::GESTURE_ANTICLOCKW);
				break;  
			default:
				paj7620ReadReg(0x44, 1, &data1);
				if (data1 == GES_WAVE_FLAG) {
				  Serial.println(CMD::GESTURE_EMPTY);
				}
				break;
		}
	}
	delay(100);
}
