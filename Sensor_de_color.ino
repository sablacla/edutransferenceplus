#define A0 2

/***   Global variables   ***/
int Luz=0;

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
    Luz=analogRead(A0);
    Serial.println(Luz);
    delay(1500);

}

/***   Function definition   ***/