/*             Programa de parpadeo del LED embebido en la placa ESP32 DEVKIT
 * Realizador:
 * Omar Abundis Noyola
 * 30/05/2023
 */

#include <Arduino.h>

#define LED 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH);
  Serial.println("LED is on");
  delay(1000);
  digitalWrite(LED, LOW);
  Serial.println("LED is off");
  delay(3000);
}