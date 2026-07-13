#include <Arduino.h>

constexpr int LED1 = 13;
constexpr int LED2 = 9;
constexpr int LED3 = 10;
constexpr int LED4 = 11;
constexpr int LED5 = 12;

constexpr int MOTOR_DRIVER_IN1 = 5;
constexpr int MOTOR_DRIVER_IN2 = 6;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(MOTOR_DRIVER_IN1, OUTPUT);
  pinMode(MOTOR_DRIVER_IN2, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);
  delay(500);
  digitalWrite(LED1, LOW);
  delay(500);
}