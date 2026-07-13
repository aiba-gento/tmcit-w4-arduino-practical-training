#include <Arduino.h>

constexpr int LED1 = 13;
constexpr int LED2 = 9;
constexpr int LED3 = 10;
constexpr int LED4 = 11;
constexpr int LED5 = 12;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);
  delay(1000);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(1000);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  delay(1000);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  delay(1000);
  digitalWrite(LED5, LOW);
}