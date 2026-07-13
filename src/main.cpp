#include <Arduino.h>

constexpr int LED1 = 13;
constexpr int LED2 = 9;
constexpr int LED3 = 10;
constexpr int LED4 = 11;
constexpr int LED5 = 12;

constexpr int MOTOR_DRIVER_IN1 = 5;
constexpr int MOTOR_DRIVER_IN2 = 6;

constexpr int VR1 = A0;

void run_motor(int speed) {
  if (speed > 0) {
    digitalWrite(MOTOR_DRIVER_IN1, HIGH);
    digitalWrite(MOTOR_DRIVER_IN2, LOW);
  } else if (speed < 0) {
    digitalWrite(MOTOR_DRIVER_IN1, LOW);
    digitalWrite(MOTOR_DRIVER_IN2, HIGH);
  } else {
    digitalWrite(MOTOR_DRIVER_IN1, HIGH);
    digitalWrite(MOTOR_DRIVER_IN2, HIGH);
  }
}

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(MOTOR_DRIVER_IN1, OUTPUT);
  pinMode(MOTOR_DRIVER_IN2, OUTPUT);
  pinMode(VR1, INPUT);
}

void loop() {
  run_motor(1);
  delay(50000);
  run_motor(0);
  delay(3000);
}