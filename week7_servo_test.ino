#include <Servo.h>

Servo door;

void setup() {
  door.attach(9);
}

void loop() {
  door.write(90); // Open
  delay(2000);
  door.write(0);  // Close
  delay(2000);
}
