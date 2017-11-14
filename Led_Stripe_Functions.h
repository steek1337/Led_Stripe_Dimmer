/*

#define NUMPIXELS 50

// ******************************-- >> Funtion Light_up <<-- ************************

void steady_light_mode(int red, int green, int blue)
{
    for (int i = 0; i < NUMPIXELS; i++)
    {
        strip.setPixelColor (i, red, green, blue);
    }
    strip.show();
}

// ******************************-- >> Function Fade_down <<-- ************************

void fade_mode(int blink_delay)
{
    for (int fade_led = 0; fade_led < 100; fade_led++)
    {
        for (int i = 0; i < 50; i++)
        {
            strip.setPixelColor (i, fade_led, fade_led, fade_led);
        }
        strip.show();
        delay(blink_delay);
    }
    for (int fade_led = 100; fade_led > 0; fade_led--)
    {
        for (int i = 0; i < 50; i++)
        {
            strip.setPixelColor (i, fade_led, fade_led, fade_led);
        }
        strip.show();
        delay(blink_delay);
    }

*/
