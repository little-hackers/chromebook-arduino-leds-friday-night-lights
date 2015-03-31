#include <Adafruit_NeoPixel.h>

#define PIN            6
#define NUMPIXELS      4

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 100; // how many milliseconds

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {

  pixels.setPixelColor(0, pixels.Color(50,0,0)); 
  pixels.setPixelColor(1, pixels.Color(0,50,0));
  pixels.setPixelColor(2, pixels.Color(0,0,50));
  pixels.setPixelColor(3, pixels.Color(50,50,50));
  pixels.show(); // This sends the updated pixel color to the hardware.

}
