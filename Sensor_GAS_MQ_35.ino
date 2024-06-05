#define A1 4

/***   Global variables   ***/
int Movimiento=0;

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
    Movimiento=analogRead(A1);
    Serial.println(Movimiento);
    delay(1000);

}

/***   Function definition   ***/