int soundPin = 8;
long timer;
int interval = 500;
int count = 0;

int frequencies [6] =   {100, 200, 300, 400, 200,  50}; // notes
int rythm [6] =         {200, 200, 400, 200, 200, 400}; // the rythm described in milliseconds
int noteDuration [6] =  {100, 100, 300, 100, 100, 300}; // duration of a note, NB: must be equal or shorter than corrosponding rythm value

void setup() {
  // put your setup code here, to run once:
  pinMode(soundPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (millis() - timer > interval){
    timer = millis(); // prepare timer for next iteration
    
    // increment the count variable
    count++;
    if (count == 6) count = 0; // reset it at zero if reached the limit

    tone(soundPin, frequencies[count], noteDuration[count]); // play the note
    
    interval = rythm[count]; // set the waiting time until next time to enter the timer if statement
  }
}
