#include <Adafruit_NeoPixel.h>

#define PIN            6
#define NUMPIXELS      40

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 100; // how many milliseconds

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
  for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(0,0,0));
  }
}

void loop() {

  pixels.setPixelColor(28, pixels.Color(10,0,0)); 
  pixels.setPixelColor(19, pixels.Color(0,10,0));
  pixels.setPixelColor(20, pixels.Color(0,0,10));
  pixels.setPixelColor(27, pixels.Color(10,10,10));
  pixels.show(); // This sends the updated pixel color to the hardware.

}
