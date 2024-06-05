#define D2 26
#define D3 25
#define D4 17
#define D5 16
#define D6 27

/***   Global variables   ***/

/***   Function declaration   ***/
int getRawColourWhite(int s2, int s3, int out);

/***   Class declaration   ***/

/***   Tasks declaration   ***/

/***   ISR function declaration   ***/

/***   Additional Global variables   ***/

void setup()
{


  pinMode((D2),OUTPUT);

  digitalWrite((D2),HIGH);

  pinMode((D3),OUTPUT);

  digitalWrite((D3),LOW);

  pinMode((D4),OUTPUT);

  pinMode((D5),OUTPUT);

  pinMode((D6),INPUT);

  Serial.begin(115200);

}


void loop()
{
    Serial.println(getRawColourWhite((D4),(D5),(D6)));
    delay(1000);

}

/***   Function definition   ***/
int getRawColourWhite(int s2, int s3, int out) {
digitalWrite(s2,HIGH);
digitalWrite(s3,LOW);
int white = pulseIn(out, LOW);
return white;
}