#define A0 2

/***   Global variables   ***/
int Inclinacion=0;

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
    Inclinacion=analogRead(A0);
    Serial.println(Inclinacion);
    delay(1000);

}

/***   Function definition   ***/