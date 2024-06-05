#define D7 14
#include <Adafruit_NeoPixel.h>

/***   Global variables   ***/
Adafruit_NeoPixel _led_strip_D7(7,D7, NEO_GRB + NEO_KHZ800);

/***   Function declaration   ***/
void clearpixels(Adafruit_NeoPixel *led_strip);
 void writepixels(Adafruit_NeoPixel *led_strip, uint32_t data0,uint32_t data1,uint32_t data2,uint32_t data3,uint32_t data4,uint32_t data5,uint32_t data6);

/***   Class declaration   ***/

/***   Tasks declaration   ***/

/***   ISR function declaration   ***/

/***   Additional Global variables   ***/

void setup()
{


  _led_strip_D7.begin();
  clearpixels(&_led_strip_D7);
  _led_strip_D7.setBrightness(map(10,0,100,0,255));

}


void loop()
{
    writepixels(&_led_strip_D7,0xffff00,0x008000,0xff0000,0x0000ff,0x00ffff,0xff00ff,0x00ff00);

}

/***   Function definition   ***/
void clearpixels(Adafruit_NeoPixel *led_strip)
{
  led_strip->fill(0,0,led_strip->numPixels());
  led_strip->show();
}
 void writepixels(Adafruit_NeoPixel *led_strip, uint32_t data0,uint32_t data1,uint32_t data2,uint32_t data3,uint32_t data4,uint32_t data5,uint32_t data6){
  led_strip->setPixelColor(0, led_strip->Color((data0>>16)&0x0000ff,(data0>>8)&0x0000ff,data0&0x0000ff));
  led_strip->setPixelColor(1, led_strip->Color((data1>>16)&0x0000ff,(data1>>8)&0x0000ff,data1&0x0000ff));
  led_strip->setPixelColor(2, led_strip->Color((data2>>16)&0x0000ff,(data2>>8)&0x0000ff,data2&0x0000ff));
  led_strip->setPixelColor(3, led_strip->Color((data3>>16)&0x0000ff,(data3>>8)&0x0000ff,data3&0x0000ff));
  led_strip->setPixelColor(4, led_strip->Color((data4>>16)&0x0000ff,(data4>>8)&0x0000ff,data4&0x0000ff));
  led_strip->setPixelColor(5, led_strip->Color((data5>>16)&0x0000ff,(data5>>8)&0x0000ff,data5&0x0000ff));
  led_strip->setPixelColor(6, led_strip->Color((data6>>16)&0x0000ff,(data6>>8)&0x0000ff,data6&0x0000ff));
  led_strip->show();
}