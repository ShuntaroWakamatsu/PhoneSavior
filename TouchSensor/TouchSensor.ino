int ledPin = 7;    // LED connected to digital pin 7
int Touch = 8;
bool state = false;
bool flag = false;
 
void setup()  {
    pinMode(ledPin, OUTPUT);
    pinMode(Touch, INPUT);
}
 
void loop()  {
  int sensorValue = digitalRead(Touch);
  flag = false;
  while(sensorValue == 1){
    flag = true;
    sensorValue = digitalRead(Touch);
  }
  if(flag){
    state = !state;
  }
  if(state){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
}