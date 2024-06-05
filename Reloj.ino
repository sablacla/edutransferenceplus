
Funciones
Control
Lógica
Matemáticas
Variables
Texto
E/S básica
Pantalla
Luz
Comunicación
Distancia
Sonido
Movimiento
Sistema
Ambiente
#define A2 35

/***   Global variables   ***/
int Ruido=0;

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
    Ruido=analogRead(A2);
    Serial.println(Ruido);
    delay(1000);

}

/***   Function definition   ***/
