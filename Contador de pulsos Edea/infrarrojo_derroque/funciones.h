//Constantes
const uint8_t LED30 = 3;
const uint8_t LED10 = 4;
const uint8_t sensor = A0;
const uint8_t decena = 10;
const uint8_t treintena = 30;
const uint16_t miliVoltMinimo = 1000;
const uint16_t tiempoEnDesuso = 5000;

//Variables
bool condicion;
long lectura_sensor = 0;
long anterior_lectura = 0;
uint8_t contador_act = 0;
uint8_t contador_ant = 0;
unsigned long anteriorTiempo = 0;

// Funcion para pruebas de desarrollo
// void mensaje() {
//   Serial.print("contador_actual: ");
//   Serial.println(contador_act);
//   Serial.print("contador_anterior: ");
//   Serial.println(contador_act);
// }

// Aumenta contador
void sumar_contador(){
  contador_act++;
  if (contador_act > 240) contador_act = 1; // reiniciador de variable a 1
}

void verificadorDeModulo (int modulo, uint8_t led) {
  if (contador_act % modulo == 0) {
      digitalWrite(led, HIGH);
  } else {
      digitalWrite(led, LOW);
  }
}



