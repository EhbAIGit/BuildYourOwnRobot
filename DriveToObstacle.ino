/*

ChatGPT 3.5 Turbo prompt :

Ik heb een WEMOS D1 R2 met een ultrasone sensor (triggerpin D15 en echopin D2).  
Kan je een programma schrijven in arduino dat continu de afstand weergeeft?  
Doe dit zonder de bibliotheek te gebruiken, maar gebruik gewoon een tijdmeting.

*/

const int triggerPin = D15;
const int echoPin = D2;

void setup() {
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
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

  // Wacht een korte tijd voordat de meting opnieuw wordt uitgevoerd
  delay(100);
}
