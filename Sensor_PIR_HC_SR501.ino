#define A0 2
#define A1 4

/***   Global variables   ***/
int X=0;
int Y=0;

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
    X=analogRead(A0);
    Y=analogRead(A1);
    Serial.print("X");
    Serial.print(X);
    Serial.println("");
    Serial.print("Y");
    Serial.print(Y);
    Serial.println("");
    delay(2000);

}

/***   Function definition   ***/