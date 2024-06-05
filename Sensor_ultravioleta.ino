#include <Stepper.h>
#define A0 2

/***   Global variables   ***/
Stepper _stepper_26_25_17_16(2048,26,25,17,16);
int Velocidad=0;

/***   Function declaration   ***/

/***   Class declaration   ***/

/***   Tasks declaration   ***/

/***   ISR function declaration   ***/

/***   Additional Global variables   ***/

void setup()
{


  Serial.begin(115200);

}


void loop()
{
    _stepper_26_25_17_16.setSpeed(Serial.parseFloat());
    Velocidad=analogRead(A0);
    Serial.println(Velocidad);
    delay(1500);

}

/***   Function definition   ***/