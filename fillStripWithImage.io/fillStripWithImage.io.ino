/// @file    RGBSetDemo.ino
/// @brief   Demonstrates how to create an LED group with CRGBArray
/// @example RGBSetDemo.ino

#include <FastLED.h>

#include "test_color_array.h"


#define NUM_LEDS 28
#define NB_SECTORS_USED 9
#define NB_SECTORS_MAX 30
#define NB_LEDS_PER_STRIP_MAX 35

CRGBArray<NUM_LEDS> leds;
CRGBArray<NUM_LEDS> leds2;




void setup() { 

  FastLED.addLeds<NEOPIXEL,3>(leds, NUM_LEDS); 
  FastLED.addLeds<NEOPIXEL,6>(leds2, NUM_LEDS); 
  FastLED.setBrightness(5);

    
}

void FillWithDifferentColors( CRGBArray<NUM_LEDS> leds, uint8_t colorsForStrip[][3])
{
  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i].setRGB(colorsForStrip[i][0], colorsForStrip[i][1], colorsForStrip[i][2]);
  }   
  FastLED.show();
}

void loop(){ 
  int nbSectorsUsed = NB_SECTORS_USED;
  int nbColorPoints = 2*NB_SECTORS_USED*NUM_LEDS;
 

  
  // uint8_t colorsForStrip[NB_SECTORS_MAX][NB_LEDS_PER_STRIP_MAX][3];
  // // uint8_t colorsForStrip2[NB_SECTORS_MAX][NB_LEDS_PER_STRIP_MAX][3];
  
  // for (int i = 0; i < nbColorPoints; i++)
  // {
  //   uint8_t sectorIndex = colorPoints[i][0];
  //   int rIndex = colorPoints[i][1];
  //   if (rIndex >= 0)
  //   {
  //     colorsForStrip[sectorIndex][rIndex][0] = colorPoints[i][2];
  //     colorsForStrip[sectorIndex][rIndex][1] = colorPoints[i][3];
  //     colorsForStrip[sectorIndex][rIndex][2] = colorPoints[i][4];
  //   }
  //   // else
  //   // {
  //   //   rIndex = -rIndex;
  //   //   colorsForStrip2[sectorIndex][rIndex][0] = colorPoints[i][2];
  //   //   colorsForStrip2[sectorIndex][rIndex][1] = colorPoints[i][3];
  //   //   colorsForStrip2[sectorIndex][rIndex][2] = colorPoints[i][4];
  //   // }
  // }    
//   for(int i = 0; i < NUM_LEDS; i++) {   
//     // fade everything out
// //    leds[i].setRGB( 255, 68, 221);
//     FastLED.show();
//     leds[i].setRGB( 0, 0, 0);
//     FastLED.show();

//   }
  for (uint8_t sector = 0; sector < nbSectorsUsed; sector++)
  {
      FillWithDifferentColors(leds, colorsForStrip[sector]);
      FillWithDifferentColors(leds2, colorsForStrip2[sector]);
      delay(50);

  }

FastLED.clear();  // clear all pixel data
FastLED.show();

exit(0);
}

