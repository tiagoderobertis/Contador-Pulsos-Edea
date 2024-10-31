//Constantes
uint8_t LED30 = 3;
uint8_t LED10 = 4;
uint8_t sensor = A0;
uint8_t decena = 10;
uint8_t treintena = 30;
uint16_t miliVoltMinimo = 1000;

//Variables
long lectura_sensor = 0;
long anterior_lectura = 0;
uint8_t contador_act = 0;
uint8_t contador_ant = 0;


//Muestra contador actual y segundos
void mensaje() {
  Serial.print("contador_actual: ");
  Serial.println(contador_act);
  Serial.print("contador_anterior: ");
  Serial.println(contador_act);
}

// Suma conador
void sumar_contador(){
  contador_act++;
  if (contador_act > 240) contador_act = 1;
}

int verificadorDeModulo (int modulo, uint8_t led) {
  if (contador_act % modulo == 0) {
      digitalWrite(led, HIGH);
  } else {
      digitalWrite(led, LOW);
  }
}



