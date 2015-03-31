#include <Adafruit_NeoPixel.h>

#define PIN            6
#define NUMPIXELS      40

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 10; 
int iRED = 100;

void setup() {
  pixels.begin(); 
  Serial.begin(9600);
  
  for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(0,0,0));
  }
}

void loop() {
  
  if (Serial.available() > 0 ) {
    iRED = Serial.parseInt();
    Serial.print("Current value: ");
    Serial.println(iRED, DEC);
  }
  
  pixels.setPixelColor(0, pixels.Color(iRED,0,0)); 
  pixels.show(); 
  
  delay(delayval);
}
