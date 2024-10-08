//Codigo motor DC usando PWM

int motorPin = 9;  // Pin conectado a la base del transistor

void setup() {
  pinMode(motorPin, OUTPUT);  // Configurar el pin como salida
}

void loop() {
  for (int speed = 0; speed <= 255; speed++) {  // Incrementar velocidad
    analogWrite(motorPin, speed);  // Enviar señal PWM al transistor
    delay(20);  // Esperar 20ms entre cambios
  }
  
  for (int speed = 255; speed >= 0; speed--) {  // Decrementar velocidad
    analogWrite(motorPin, speed);  // Enviar señal PWM al transistor
    delay(20);  // Esperar 20ms entre cambios
  }
}
