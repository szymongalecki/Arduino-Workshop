/* LEDstrip Scroller | AIRLAB CCC#2

   The code provides a scrolling motion on the LED strip

   Syntax for changing color:
   leds[number of LED] = CRGB(Red value, Green value, Blue value); (Values are 0-255)
   FastLED.show()

*/

#include <FastLED.h>
#define NUM_LEDS 10
#define DATA_PIN 3
CRGB leds[NUM_LEDS];

int i = 0;
long timer = 0;
int interval = 100;

void setup()
{
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);

  // turn off the LED
  leds[0] = CRGB(0, 0, 0);
  FastLED.show();
}


void loop()
{

  if (millis() - timer > interval) { // the code in this block runs every interval (100 milliseconds)
    timer = millis(); // Zero the timer to "now"
    
    i++;  //increment index variable
    if (i == 10) i = 0; // reset to zero at i == 10, to match amount of LEDs on strip

    FastLED.clear();
    leds[i] = CRGB(255, 80, 190);
    FastLED.show();
  }
}
