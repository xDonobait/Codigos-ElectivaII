//Ejemplo Proyecto Servo - Donoban Peralta

#include <Servo.h>  // Incluir la biblioteca Servo

Servo servoMotor;   // Crear un objeto servo

void setup() {
  servoMotor.attach(9);  // Conectar el servomotor al pin 9 de Arduino
}

void loop() {
  // Mover a 0 grados
  servoMotor.write(0);   
  delay(1000);  // Esperar 1 segundo

  // Mover a 90 grados
  servoMotor.write(90);  
  delay(1000);  // Esperar 1 segundo

  // Mover a 180 grados
  servoMotor.write(180);  
  delay(1000);  // Esperar 1 segundo
}
