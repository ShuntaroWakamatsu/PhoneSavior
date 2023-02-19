#define EMG 0
#define Buzzer 7
#define THRESHOLD 160

void setup() {
  // put your setup code here, to run once:
    pinMode(Buzzer, OUTPUT);
    Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
    int value = analogRead(EMG);
    if(value > THRESHOLD){
        tone(Buzzer, 1000); // Send 1KHz sound signal...
    }
    else{
        noTone(Buzzer);     // Stop sound...
    }
    Serial.println(value);
}
