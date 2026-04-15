#include <Servo.h>

Servo door;
int sensorPin = 2;

void setup() {
  pinMode(sensorPin, INPUT);
  door.attach(9);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(sensorPin);

  if (motion == HIGH) {
    Serial.println("Door Opening");
    door.write(90);
    delay(3000);
  } else {
    Serial.println("Door Closing");
    door.write(0);
  }
}
