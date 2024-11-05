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
  pinMode(8, OUTPUT);
  Serial.begin(9600);    
}

void loop() {

  lectura_sensor = analogRead(sensor);  //Si detecta señal almacena en variable
  if (lectura_sensor != anterior_lectura) { // Se distingue entre pulso y pulso, y si es diferente al anterior (0)
    if (lectura_sensor >= miliVoltMinimo) { // Si la lectura del sensor es mayor o igual a 1000
      sumar_contador(); 
      verificadorDeModulo(decena, LED10);
      verificadorDeModulo(treintena, LED30);
      anteriorTiempo = millis();
    }
    anterior_lectura = lectura_sensor;
  }
  // si la lectura del sensor es menor a 1000 y 
  if (lectura_sensor <= miliVoltMinimo && millis() - anteriorTiempo >= tiempoEnDesuso) { 
    anteriorTiempo = millis();
    contador_act = 0;
    digitalWrite(LED10, LOW);
    digitalWrite(LED30, LOW);
    // se reinicia el contador y se apagan los LED

  }
}
