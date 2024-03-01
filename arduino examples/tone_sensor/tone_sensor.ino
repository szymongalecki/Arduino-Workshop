int soundPin = 8;
int sensorPin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(soundPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(soundPin, analogRead(sensorPin)); // updating the frequence to the new sensorreading
  delay(10);
}
