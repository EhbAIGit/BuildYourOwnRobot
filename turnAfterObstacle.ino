/*
zorg dat hij het zelfde doet maar nadat hij is gestopt moet hij zich omdraaien
*/


#include <Servo.h>

const int triggerPin = D15;
const int echoPin = D2;
const int leftServoPin = D11;
const int rightServoPin = D12;
Servo leftServo;
Servo rightServo;

void setup() {
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  leftServo.attach(leftServoPin);
  rightServo.attach(rightServoPin);
}

void loop() {
  // Stuur ultrasone puls
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  // Meet de echo-tijd
  unsigned long duration = pulseIn(echoPin, HIGH);

  // Bereken de afstand in centimeters
  unsigned long distance = duration * 0.034 / 2;

  // Geef de afstand weer op de seriële monitor
  Serial.print("Afstand: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Controleer of er een obstakel is binnen 15 cm
  if (distance > 15 || distance == 0) {
    // Rijd rechtdoor als er geen obstakel is
    leftServo.write(180);
    rightServo.write(0);
  } else {
    // Stop de robot en draai naar links om het obstakel te vermijden
    leftServo.write(90);
    rightServo.write(90);
    delay(1000); // Verander deze vertraging indien nodig om de draai aan te passen

    // Draai de robot om voordat hij verder gaat
    leftServo.write(180);
    rightServo.write(180);
    delay(1000); // Verander deze vertraging indien nodig om de draai aan te passen
  }
}
