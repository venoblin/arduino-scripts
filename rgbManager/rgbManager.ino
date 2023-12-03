#define RED 10
#define GREEN 8
#define BLUE 6

void rgbPins(int r, int g, int b) {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void rgbWrite(int r, int g, int b) {
  digitalWrite(RED, r);
  digitalWrite(GREEN, g);
  digitalWrite(BLUE, b);
}

void setup() {
  rgbPins(RED, GREEN, BLUE);
  rgbWrite(0, 0, 255);
}

void loop() {

}
