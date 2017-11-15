/*
Creator: Stefan Ekström
Project started: 13th November, 2017
Project Declaration: Led stripes with a Pirsensor.
*/
#include <Adafruit_DotStar.h>
#include "Led_Stripe_Functions.h"

// **************************-- >> Declaration <<-- ****************************
#define NUMPIXELS 50
#define Pirsensor 8 // Pir sensor, vit kabel
#define CLOCKPIN 9 // Led slinga, grön kabel
#define DATAPIN 10 // Led Slinga, blå kabel


Adafruit_DotStar strip = Adafruit_DotStar(NUMPIXELS,DATAPIN,CLOCKPIN,DOTSTAR_BRG);

// **************************-- >> Setup <<-- ****************************
void setup()
{
    pinMode(Pirsensor, INPUT);
    strip.begin();
    strip.setBrightness(100);
    Serial.begin(9600);
}

// ******************************-- >> Loop <<-- ************************
void loop()

{
    if(digitalRead(Pirsensor) == HIGH)
    {
        steady_light_mode();
    }
    if(digitalRead(Pirsensor) == LOW)
    {
        lights_off();
    }
}
// ******************************-- >> End <<-- ************************
