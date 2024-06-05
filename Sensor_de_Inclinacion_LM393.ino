#define A0 2

/***   Global variables   ***/
int Temperatura=0;

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
    Temperatura=analogRead(A0);
    Serial.println(Temperatura);
    delay(1000);

}

/***   Function definition   ***/