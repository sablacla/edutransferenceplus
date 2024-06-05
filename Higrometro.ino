#define D8 12
#include <ESP32_Servo.h>

/***   Global variables   ***/
Servo _servoD8;

/***   Function declaration   ***/

/***   Class declaration   ***/

/***   Tasks declaration   ***/

/***   ISR function declaration   ***/

/***   Additional Global variables   ***/

void setup()
{
  _servoD8.attach(D8);
    _servoD8.write(0);

  Serial.begin(115200);

}


void loop()
{
    _servoD8.write(Serial.parseFloat());

}

/***   Function definition   ***/