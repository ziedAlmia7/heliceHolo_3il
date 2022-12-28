/// @file    RGBSetDemo.ino
/// @brief   Demonstrates how to create an LED group with CRGBArray
/// @example RGBSetDemo.ino

#include <FastLED.h>

#include "test_color_array.h"


#define NB_SECTORS_MAX 30
#define NB_LEDS_PER_STRIP_MAX 35

CRGBArray<NUM_LEDS> leds;
CRGBArray<NUM_LEDS> leds2;




void setup() { 

  FastLED.addLeds<NEOPIXEL,3>(leds, NUM_LEDS); 
  FastLED.addLeds<NEOPIXEL,6>(leds2, NUM_LEDS); 
  FastLED.setBrightness(10);

    
}

void FillStrip1WithDifferentColors( CRGBArray<NUM_LEDS> leds, uint8_t sector)
{
  for(int i = 0
  
  ; i < NUM_LEDS; i++) {
    leds[i].setRGB(pgm_read_byte_near(&colorsForStrip[sector][i][0]), pgm_read_byte_near(&colorsForStrip[sector][i][1]), pgm_read_byte_near(&colorsForStrip[sector][i][2]));
  }   
  FastLED.show();
}


void FillStrip2WithDifferentColors( CRGBArray<NUM_LEDS> leds, uint8_t sector)
{
  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i].setRGB(pgm_read_byte_near(&colorsForStrip2[sector][i][0]), pgm_read_byte_near(&colorsForStrip2[sector][i][1]), pgm_read_byte_near(&colorsForStrip2[sector][i][2]));
  }   
  FastLED.show();
}

void loop(){ 
  int nbSectorsUsed = NB_SECTORS_USED;
  int nbColorPoints = 2*NB_SECTORS_USED*NUM_LEDS;
 
  for (uint8_t sector = 0; sector < nbSectorsUsed; sector++)
  {
      FillStrip1WithDifferentColors(leds, sector);
      FillStrip2WithDifferentColors(leds2, sector);
      //delay(30);

  }

FastLED.clear();  // clear all pixel data
FastLED.show();

exit(0);
}
