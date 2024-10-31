#include "funciones.h"
/*
Contador DEROQUE
De Robertis, Choque 
Sensor infrarrojo contador
Detecta Señales infrraojas continuas con la finalidad de contarlas durante un minuto, una vez llegadas las 10 prende un led, de igual manera con las 30, 
Mostrar contador con display 7 segmentos, Cada 1, 5 0 10 segundos. En un principio con leds cada 10 o 30.
*/
void setup() {
  pinMode(LED30, OUTPUT);
  pinMode(LED10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lectura_sensor = analogRead(sensor);  //Si detecta señal almacena en variable
   if (lectura_sensor != anterior_lectura) { 
    if (lectura_sensor >= miliVoltMinimo) {
      sumar_contador();
      verificadorDeModulo(decena, LED10);
      verificadorDeModulo(treintena, LED30);
      mensaje();
    }
    anterior_lectura = lectura_sensor;
  }

}
