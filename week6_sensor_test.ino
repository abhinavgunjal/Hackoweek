int sensorPin = 2;

void setup() {
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(sensorPin);

  if (motion == HIGH) {
    Serial.println("Motion Detected");
  } else {
    Serial.println("No Motion");
  }
  delay(500);
}
