#include <Ultrasonic.h>
#define trigger 8
#define echo 9
Ultrasonic ultrasonic (trigger, echo);

void setup(){
  Serial.begin(9600);
}

void loop(){
  float cm, pl;
  long ms = ultrasonic.timing();
  
  cm = ultrasonic.convert(ms, Ultrasonic::CM);
  Serial.print("Distancia:");
  Serial.print(cm);
  Serial.println("  Centimeters");
  
  pl = ultrasonic.convert(ms, Ultrasonic::IN);
  Serial.print("Distancia:");
  Serial.print(pl);
  Serial.println("  Inches");
  
  delay(2000);
}
