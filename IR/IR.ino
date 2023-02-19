#define IR_PIN 2

void setup() {
        pinMode(IR_PIN, INPUT);
        Serial.begin(9600);
        Serial.println("Serial Working");
}

void loop() {
        int sensorStatus = digitalRead(IR_PIN);
        if (sensorStatus == 1) {
                Serial.println("detected motion");
        }
        else {
                Serial.println("motion ended");
        }
}
