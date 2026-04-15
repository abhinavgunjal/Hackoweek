#include <Servo.h>

Servo door;
int sensorPin = 2;
int state = 0;

void setup() {
  pinMode(sensorPin, INPUT);
  door.attach(9);
}

void loop() {
  int motion = digitalRead(sensorPin);

  if (motion == HIGH && state == 0) {
    door.write(90);
    delay(3000);
    state = 1;
  }

  if (motion == LOW && state == 1) {
    door.write(0);
    state = 0;
  }
}
