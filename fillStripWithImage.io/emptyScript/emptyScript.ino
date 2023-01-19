#include <FastLED.h>

#include "test_color_array.h"



CRGBArray<NUM_LEDS> leds;
CRGBArray<NUM_LEDS> leds2;

void setup() { 
  FastLED.addLeds<NEOPIXEL,3>(leds, NUM_LEDS); 
  FastLED.addLeds<NEOPIXEL,6>(leds2, NUM_LEDS); 
  FastLED.setBrightness(10); 
}


void loop(){  
  FastLED.clear();  // clear all pixel data
  FastLED.show();
  exit(0);
}
