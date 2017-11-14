/*
    Creator: Stefan Ekström
    Project started: 13th November, 2017
    Project Declaration: Led stripes with a Pirsensor.
*/
#include <Adafruit_DotStar.h>
//#include "funktioner.h"

// **************************-- >> Declaration <<-- ****************************
#define NUMPIXELS 50
#define Pirsensor 8 // Pir sensor, vit kabel
#define CLOCKPIN 9 // Led slinga, grön kabel
#define DATAPIN 10 // Led Slinga, blå kabel
//#define delay 10000 // Lägg delay här för att stryra tiden

Adafruit_DotStar strip = Adafruit_DotStar(NUMPIXELS,DATAPIN,CLOCKPIN,DOTSTAR_BRG);

// **************************-- >> Setup <<-- ****************************
void setup()
{
    pinMode(Pirsensor, INPUT);
    strip.begin();
    strip.setBrightness(100);
    Serial.begin(9600);
}

// *****************************-- >> Function <<-- **************************
void steady_light_mode(int red, int green, int blue)
{
    for (int i = 0; i < NUMPIXELS; i++)
    {
        strip.setPixelColor (i, red, green, blue);
    }
    strip.show();
}

// ******************************-- >> Loop <<-- ************************
void loop()

{
    if(digitalRead(Pirsensor) == HIGH)
    {
        //steady_light_mode(100,100,100);
        steady_light_mode(255,255,255);
        Serial.println("Tänd lamporna");
        delay(10000);
    }
    else
    {
        if(digitalRead(Pirsensor) == LOW)
        steady_light_mode(0,0,0);
        Serial.println("Ständ av lamporna");
    }
    // ******************************-- >> End <<-- ************************

}
