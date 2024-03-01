/* Tone - barebone example | AIRLAB

   Tone function syntax:
   Tone(Pin, Frequency, OPTIONAL:Duration)

*/

int soundPin = 8;

void setup() {
  pinMode(soundPin, OUTPUT);
}

void loop() {
  //Version one: The tone overwrites itself:
  tone(soundPin,  440);
  delay(500);
  tone(soundPin,  880);
  delay(500);



  //Version two: The tone plays for a short duration:
  /*
    tone(soundPin,  440, 250);
    delay(500);
    tone(soundPin,  880, 250);
    delay(500);
  */
}
