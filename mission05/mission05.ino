#include <Adafruit_NeoPixel.h> 

#define DELAY 200
#define NUMLEDS 40
#define PORT 6

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMLEDS, PORT, NEO_GRB + NEO_KHZ800);
              
int BLANK[40] = {0,0,0,0,0,0,0,0, \
              0,0,0,0,0,0,0,0, \
              0,0,0,0,0,0,0,0, \
              0,0,0,0,0,0,0,0, \
              0,0,0,0,0,0,0,0};
                                   
int C[40]  = {1,0,0,0,0,0,0,1, \
              1,0,0,0,0,0,0,1, \
              1,0,0,0,0,0,0,1, \
              1,0,0,0,0,0,0,1, \
              1,1,1,1,1,1,1,1};

int E[40] =  {1,0,0,0,0,0,0,1, \
              1,0,0,0,0,0,0,1, \
              1,0,0,1,0,0,0,1, \
              1,0,0,1,0,0,0,1, \
              1,1,1,1,1,1,1,1 };
                          
int F[40] =  {1,0,0,0,0,0,0,0, \
              1,0,0,0,0,0,0,0, \
              1,0,0,1,0,0,0,0, \
              1,0,0,1,0,0,0,0, \
              1,1,1,1,1,1,1,1 };       
             
int BLUE[3] = {0, 0, 255};
int BLACK[3] = {0, 0, 0};

void setup() 
{
  strip.begin();
}

void loop()
{
  showit(C,     BLUE,  DELAY, NUMLEDS);
  showit(BLANK, BLACK, DELAY, NUMLEDS);
  showit(E,     BLUE,  DELAY, NUMLEDS);
  showit(BLANK, BLACK, DELAY, NUMLEDS);
  showit(F,     BLUE,  DELAY, NUMLEDS);
  showit(BLANK, BLUE,  DELAY, NUMLEDS);
  delay(1000);
}

void showit(int Letter[], int RGB[], int do_delay, int count)
{
  for (int j = 0; j < count; j++) { int on = Letter[j]; strip.setPixelColor(j, RGB[0]*on, RGB[1]*on, RGB[2]*on);}; strip.show(); delay(do_delay);
}
