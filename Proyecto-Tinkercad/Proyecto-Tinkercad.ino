#include <Servo.h>  // Incluye la biblioteca Servo para el control de servomotores

// Definición de pines
const int mot1 = 5;        // Pin digital para el motor DC (terminal 1)
const int mot2 = 6;        // Pin digital para el motor DC (terminal 2)
const int potmet = A0;     // Pin analógico para el potenciómetro
const int servo = A2;      // Pin analógico para el control del servomotor

Servo myservo;             // Crea un objeto de tipo Servo

// Variables para almacenar valores de sensores y cálculos
int potValue;              // Valor leído del potenciómetro
int angle;                 // Ángulo calculado para el servomotor

void setup() {
  // Configuración de pines de entrada y salida
  pinMode(mot1, OUTPUT);   // Configura el pin 5 como salida (control del motor DC)
  pinMode(mot2, OUTPUT);   // Configura el pin 6 como salida (control del motor DC)
  pinMode(potmet, INPUT);  // Configura el pin A0 como entrada (potenciómetro)
  myservo.attach(servo);   // Asocia el pin del servomotor (A2)
  Serial.begin(9600);      // Inicializa la comunicación serial a 9600 baudios
}

void loop() {
  potValue = analogRead(potmet);  // Lee el valor del potenciómetro
  angle = map(potValue, 0, 1023, 0, 180);  // Mapea el valor del potenciómetro a un ángulo entre 0 y 180

  myservo.write(angle);  // Mueve el servomotor al ángulo calculado
  Serial.print("Ángulo del servomotor: ");
  Serial.println(angle);  // Imprime el ángulo calculado en el monitor serial

  // Control simple del motor DC (gira en una sola dirección)
  digitalWrite(mot1, HIGH);  // Activa el motor en una dirección
  digitalWrite(mot2, LOW);   // Mantiene el otro pin del motor en LOW
  delay(1000);               // Espera 1 segundo con el motor activado
  
  digitalWrite(mot1, LOW);   // Apaga el motor
  digitalWrite(mot2, LOW);   // Ambos pines en LOW
  delay(1000);               // Espera 1 segundo con el motor apagado
}

