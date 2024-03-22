/*
This program can be used as a base.  You can feed it to CHATGPT and ask to adapt is or add features.  
To use this program  adapt the ssid and password, to set it to your own local wifi network

When you connect in the Arduino IDE and open the serial monitor it will tell you the IP of the robot.
Once you wrote down this IP,  you can navigate with your PC or mobile phone to that IP for example  http://192.168.0.100.  
In this basic program you will be able to control the robot :  FORWARD, BACKWARD, LEFT and RIGHT
*/


#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

#ifndef APSSID
#define APSSID "ESPap"
#define APPSK  "thereisnospoon"
#endif

/* Set these to your desired credentials. */
const char *ssid = "ROBOT";
const char *password = "geheim123";

String left = "S";
String right= "S";
String power = "0";
int servospeed1 = 90;
int servospeed2 = 90;
String url;

#include "Servo.h"

#include "SRF05.h"

const int servo_pin1 = D11; 
const int servo_pin2 = D12;

const int trigger = D15;
const int echo    = D2;

SRF05 SRF(trigger, echo);

Servo myservo1;
Servo myservo2;

int angle = 0;


long duration;          // Variabele om de tijd van het signaal te bewaren
int distance;           // Variabele om de berekende afstand te bewaren



/**
 * Get distance
 */
float getDistance() {
    // Stuur een 10µs puls naar de HC-SR04 om een meting te starten
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  // Meet de duur van het echo signaal
  duration = pulseIn(echo, HIGH);

  //Serial.println(duration);
  // Bereken de afstand in centimeters
  distance = duration * 0.034 / 2;
  return distance;  
}

ESP8266WebServer server(80);

/* Just a little test message.  Go to http://192.168.4.1 in a web browser
   connected to this access point to see it.
*/
void handleRoot() {
  server.send(200, "text/html", "<h1>ESP8266 Robot</h1><br><a href=?left=90&right=90>STOP MOTORS</a><br><a href=?left=180&right=0>FORWARD</a><br><a href=?left=0&right=180>BACKWARD</a><br><a href=?left=0&right=0>LEFT</a><br><a href=?left=180&right=180>RIGHT</a><br><br>Distance: " + String(getDistance()) + " cm");
}

void handleDistance() {
  server.send(200, "text/plain", String(getDistance()));
}


void setup() {
  delay(1000);
  Serial.begin(9600);
  Serial.println();
  Serial.print("Configuring access point...");
  // You can remove the password parameter if you want the AP to be open.
  /*WiFi.softAP(ssid, password);
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);
  */
  SRF.setCorrectionFactor(1.035);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.on("/distance", handleDistance);
  server.begin();
  Serial.println("HTTP server started");

  myservo1.attach(servo_pin1);
  myservo2.attach(servo_pin2);
}

void loop() {
  server.handleClient();

  if (server.hasArg("left") && server.hasArg("right")) {
      if (left!=server.arg("left") or right != server.arg("right")) {
        left = server.arg("left");
        right = server.arg("right");
        servospeed1 = left.toInt();
        servospeed2 = right.toInt();
        myservo1.write(servospeed1);
        myservo2.write(servospeed2);
      }     
  }

  delay(15);
}
