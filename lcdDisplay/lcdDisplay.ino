#include <LiquidCrystal.h>
#include <HCSR04.h>

LiquidCrystal lcd(5, 6, 7, 8, 9, 10);


#define TRIGGER 13
#define ECHO 12


void setup() {
  Serial.begin(9600);
  HCSR04.begin(TRIGGER, ECHO);
  
  lcd.begin(16, 2);
  lcd.print("Distance:");
}

void loop() {
  double* distances = HCSR04.measureDistanceCm();

  lcd.setCursor(0, 1);
  lcd.print(distances[0]);

  delay(250);
}
