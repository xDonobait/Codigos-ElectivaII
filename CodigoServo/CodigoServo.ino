//Codigo Servomotor - Donoban Peralta
#include <Servo.h>

Servo myServo;  // Crear un objeto Servo

void setup() {
  myServo.attach(9);  // Conectar el servomotor al pin 9 de Arduino
}

void loop() {
  myServo.write(90);  // Mover el servomotor a 90 grados
  delay(1000);        // Esperar 1 segundo

  myServo.write(0);   // Mover el servomotor a 0 grados
  delay(1000);        // Esperar 1 segundo
}
