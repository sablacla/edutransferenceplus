#define A0 2

/***   Global variables   ***/
int Latidos=0;

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
    Latidos=analogRead(A0);
    Serial.println(Latidos);
    delay(1000);

}

/***   Function definition   ***/