#include <Adafruit_NeoPixel.h>

#define PIN            6
#define NUMPIXELS      1

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 100; // how many milliseconds

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {

  // sets the Pixel color
  //   pixels.setPixelColor(pixel number, pixel color);
  // pixels.Color(red, green, blue);
  pixels.setPixelColor(0, pixels.Color(50,0,0));
  // set the pixel to green
  // set the pixel to blue
    pixels.show(); // This sends the updated pixel color to the hardware.

}
