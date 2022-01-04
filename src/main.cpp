#include <Arduino.h>
#include <Mouse.h>

void setup() { } // no setup needed
void loop() {
  int i;
  for (i=0; i<5; i++) {
    Mouse.move(2, -1);
    delay(1);
  }
  for (i=0; i<5; i++) {
    Mouse.move(2, 2);
    delay(1);
  }
  for (i=0; i<5; i++) {
    Mouse.move(-4, -1);
    delay(1);
  }
  delay(30 * 1000);
}