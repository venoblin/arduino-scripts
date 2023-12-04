#include <HCSR04.h>

#define TRIGGER 12
#define ECHO 11

void setup () {
  Serial.begin(9600);
  HCSR04.begin(TRIGGER, ECHO);
}

void loop () {
  double* distances = HCSR04.measureDistanceCm();

  Serial.print(distances[0]);
  Serial.print(" cm");
  
  Serial.println("");
  delay(500);
}