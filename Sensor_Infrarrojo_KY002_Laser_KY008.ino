#define D7 14
#define D8 12

/***   Global variables   ***/
int Distancia=0;

/***   Function declaration   ***/
long US_init(int trigger_pin, int echo_pin);
long distance(int trigger_pin, int echo_pin);

/***   Class declaration   ***/

/***   Tasks declaration   ***/

/***   ISR function declaration   ***/

/***   Additional Global variables   ***/

void setup()
{


  pinMode((D7),INPUT);

  pinMode((D8),OUTPUT);

  Serial.begin(115200);

}


void loop()
{
    Distancia=distance((D8),(D7));
    Serial.println(Distancia);
    delay(1500);

}

/***   Function definition   ***/
long US_init(int trigger_pin, int echo_pin)
{
  digitalWrite(trigger_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger_pin, LOW);
  long microseconds = pulseIn(echo_pin ,HIGH);
  return microseconds;
}
long distance(int trigger_pin, int echo_pin)
{
  long microseconds = US_init(trigger_pin, echo_pin);
  long distance;
  distance = microseconds/29/2;
  if (distance == 0){
	distance = 999;
  }
  return distance;
}