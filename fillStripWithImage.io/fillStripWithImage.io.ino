// python-build-start
// upload
// arduino:avr:uno
// /dev/ttyACM0
// python-build-end

#include <FastLED.h>

#include "test_color_array.h"


CRGBArray<NUM_LEDS> leds;
CRGBArray<NUM_LEDS> leds2;

unsigned long lastSensorTime = 0; // Temps de la dernière interruption
float speed = 0; // Vitesse actuelle
bool swap = false;
void setup() { 
  pinMode(10, INPUT); // Capteur de présence sur le pin 9  
  Serial.begin(9600); // Initialiser la communication série pour afficher les résultats

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
  if(!digitalRead(10))  // Début de séquence d'affichage
   {
    unsigned long currentSensorTime = micros(); // Temps actuel
    speed = 1000000.0 /(currentSensorTime - lastSensorTime) * 60;
    Serial.print("Vitesse : ");
    Serial.println(speed);

    lastSensorTime = currentSensorTime; // Mettre à jour le temps de la dernière interruption
    for (uint8_t sector = 0; sector < NB_SECTORS_USED; sector++)
    {
        if(swap) {
            FillStrip1WithDifferentColors(leds2, sector);
            FillStrip2WithDifferentColors(leds, sector);
        } else {
            FillStrip1WithDifferentColors(leds, sector);
            FillStrip2WithDifferentColors(leds2, sector);
        }
        
        FastLED.show();
        
    }
    swap = !swap ;
  }

//exit(0);
}
