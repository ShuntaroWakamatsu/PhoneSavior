#define TRIG_PIN 2
#define ECHO_PIN 3

void setup() {
        pinMode(TRIG_PIN, OUTPUT);
        pinMode(ECHO_PIN, INPUT);
        Serial.begin(9600);
}

void loop() {
        digitalWrite(TRIG_PIN, LOW);
        delayMicroseconds(2);
        digitalWrite(TRIG_PIN, HIGH);
        delayMicroseconds(10);
        digitalWrite(TRIG_PIN, LOW);
        uint32_t duration = pulseIn(ECHO_PIN, HIGH);
        float distance = duration * 0.034 / 2;
        Serial.print("Distance");
        Serial.println(distance);
}
