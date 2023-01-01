/// @file    RGBSetDemo.ino
/// @brief   Demonstrates how to create an LED group with CRGBArray
/// @example RGBSetDemo.ino

#include <FastLED.h>

#include "test_color_array.h"


#define NB_SECTORS_MAX 30
#define NB_LEDS_PER_STRIP_MAX 35

CRGBArray<NUM_LEDS> leds;
CRGBArray<NUM_LEDS> leds2;
int val;
void setup() { 
  pinMode(10, INPUT); // Capteur de présence sur le pin 9  

  FastLED.addLeds<NEOPIXEL,3>(leds, NUM_LEDS); 
  FastLED.addLeds<NEOPIXEL,6>(leds2, NUM_LEDS); 
  FastLED.setBrightness(10);
}

void FillStrip1WithDifferentColors( CRGBArray<NUM_LEDS> leds, uint8_t sector)
{
  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i].setRGB(pgm_read_byte_near(&colorsForStrip[sector][i][0]), pgm_read_byte_near(&colorsForStrip[sector][i][1]), pgm_read_byte_near(&colorsForStrip[sector][i][2]));
  }   
}


void FillStrip2WithDifferentColors( CRGBArray<NUM_LEDS> leds, uint8_t sector)
{
  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i].setRGB(pgm_read_byte_near(&colorsForStrip2[sector][i][0]), pgm_read_byte_near(&colorsForStrip2[sector][i][1]), pgm_read_byte_near(&colorsForStrip2[sector][i][2]));
  }   
}

void loop(){

  if(digitalRead(10)) { // Début de séquence d'affichage
     FastLED.clear();  // clear all pixel data
     FastLED.show();
  } else {
    for (uint8_t sector = 0; sector < NB_SECTORS_USED; sector++)
    {
        FillStrip1WithDifferentColors(leds, sector);
        FillStrip2WithDifferentColors(leds2, sector);
        FastLED.show();
        delay(1);
    }
  }


//exit(0);
}