#define A0 2

/***   Global variables   ***/
int Gas=0;

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
    Gas=analogRead(A0);
    Serial.println(Gas);
    delay(1000);

}

/***   Function definition   ***/