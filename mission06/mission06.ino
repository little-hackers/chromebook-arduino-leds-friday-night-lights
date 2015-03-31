#include <Adafruit_NeoPixel.h>

#define PIN            6
#define NUMPIXELS      1

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 1000; 

void setup() {
  pixels.begin(); 
  Serial.begin(9600);
}

void loop() {

  pixels.setPixelColor(0, pixels.Color(1,0,0)); 
  pixels.show(); 
  Serial.print("Hello World\n");
  delay(delayval);
}
