#include <Adafruit_NeoPixel.h>

#define PIN            6
#define NUMPIXELS      40

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 10; 
int iRED = 100;
int iGREEN = 100;
int iBLUE = 100;

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
    iGREEN = Serial.parseInt();
    iBLUE = Serial.parseInt();
    
    Serial.print("Current value: ");
    Serial.print(iRED, DEC);
    Serial.print(",");
    Serial.print(iGREEN, DEC);
    Serial.print(",");
    Serial.println(iBLUE, DEC);
  }
    

  pixels.setPixelColor(0, pixels.Color(iRED,iGREEN,iBLUE)); 
  pixels.show(); 
  
  delay(delayval);
}
