#define Rotary_Angle_Pin A1
//#define LED 3
#define ADC_REF 5 // reference voltage of ADC
#define Grove_VCC 5 // VCC of the Grove sensory interface
#define Full_Angle 300 // full value of rotary angle is 300 degrees

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(Rotary_Angle_Pin, INPUT);
    //pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float voltage;
  int Rotary_Val = analogRead(Rotary_Angle_Pin); // voltage in analog range
  voltage = (float)Rotary_Val/1023*ADC_REF; // voltage in 5V range
  float degrees = (voltage/Grove_VCC)*Full_Angle; // degree should be from 0 to 300
  Serial.print("The angle between the mark and the starting position:");
  Serial.println(degrees);
  Serial.print("\n");

//  int brightness; 
//  brightness = map (degrees, 0, Full_Angle, 0,255);
//  analogWrite(LED, brightness);
 // delay (500);
}

  
