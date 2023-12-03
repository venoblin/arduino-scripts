#define RED 10
#define GREEN 8
#define BLUE 6

void rgbWrite(int r, int g, int b) {
  digitalWrite(RED, r);
  digitalWrite(GREEN, g);
  digitalWrite(BLUE, b);
}

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  rgbWrite(0, 0, 255);
}

void loop() {

}
