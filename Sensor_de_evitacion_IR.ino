#define A0 2

/***   Global variables   ***/

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
    Serial.println(analogRead(A0));
    delay(1000);

}

/***   Function definition   ***/