#define D2 26
#define A0 2

/***   Global variables   ***/

/***   Function declaration   ***/

/***   Class declaration   ***/

/***   Tasks declaration   ***/

/***   ISR function declaration   ***/

/***   Additional Global variables   ***/

void setup()
{


  pinMode(D2,OUTPUT);

  Serial.begin(115200);

}


void loop()
{
    digitalWrite(D2,HIGH);
    Serial.println(analogRead(A0));
    delay(1000);

}

/***   Function definition   ***/