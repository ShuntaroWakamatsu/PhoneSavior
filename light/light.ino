/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-light-sensor
 */

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // reads the input on analog pin A0 (value between 0 and 1023)
  int light_Val = analogRead(A0);

  Serial.print("Analog reading: ");
  Serial.print(light_Val);   // the raw analog reading

  // We'll have a few threshholds, qualitatively determined
  if (light_Val < 200) {
    Serial.println("Dark");
  } 
  else {
    Serial.println("Bright");
  } 
}
