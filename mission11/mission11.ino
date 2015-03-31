
#include <Adafruit_NeoPixel.h>
#define PIN            6
#define NUMPIXELS      40
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


int delayval = 50; // delay for half a second
int p = 1;
int analogPin = 0;
int analogPin1 = 1;
int raw = 0;
int raw1 = 0;

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {
  for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(0,0,0));
  }

  raw = analogRead(analogPin);
  raw1 = analogRead(analogPin1);

  if (raw < 110) p = p-1;
  if (raw > 220) p = p+1;
  if (raw1 < 110) p = p+8;
  if (raw1 > 220) p = p-8;//(16 - (2*(p % 8) -8));
  
  if ( p > 39 ) p = 0;
  if ( p < 0 ) p = 39;
  
  pixels.setPixelColor(p,pixels.Color(255,0,0));
  pixels.show(); 
  
  delay(delayval); 
 

}




