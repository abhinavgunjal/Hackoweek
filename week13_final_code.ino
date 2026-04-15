#include <Servo.h>

Servo door;
int sensorPin = 2;
int buzzer = 3;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(buzzer, OUTPUT);
  door.attach(9);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(sensorPin);

  if (motion == HIGH) {
    Serial.println("Access Detected");
    digitalWrite(buzzer, HIGH);
    door.write(90);
    delay(3000);
  } else {
    digitalWrite(buzzer, LOW);
    door.write(0);
  }
}
