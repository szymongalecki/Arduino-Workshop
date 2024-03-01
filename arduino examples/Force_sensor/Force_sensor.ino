/*
/* Force sensor | AIRLAB
 * 
 * The code serves as an absolut minimum for working with the force sensor sensor
 *
 * It reads the sensor and prints the value in the serial monitor (tools->serial monitor)
 * 
 * NB: this example needs a 10K resistor in the circuit. Make sure to check the cheatsheet for wiring it up correctly.
 */

int sensorPin = A0;

void setup() {
  Serial.begin(9600); // setup the serial connection
  pinMode(sensorPin, INPUT); // set pinMode to INPUT
}

void loop() {
  int sensorValue = analogRead(sensorPin); // read the sensor
  Serial.println(sensorValue); // print the value
  delay(1); // slow down the code a little (1 millisecond)
}
