#include <Servo.h>

Servo door;
int sensorPin = 2;

void setup() {
  pinMode(sensorPin, INPUT);
  door.attach(9);
}

void loop() {
  int motion = digitalRead(sensorPin);

  if (motion == HIGH) {
    door.write(90); // Open door
  } else {
    door.write(0);  // Close door
  }
}
