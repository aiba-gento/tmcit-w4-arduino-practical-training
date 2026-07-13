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
  if (speed > 50) {
    analogWrite(MOTOR_DRIVER_IN1, speed);
    analogWrite(MOTOR_DRIVER_IN2, 0);
  } else if (speed < -50) {
    analogWrite(MOTOR_DRIVER_IN1, 0);
    analogWrite(MOTOR_DRIVER_IN2, -speed);
  } else {
    analogWrite(MOTOR_DRIVER_IN1, 0);
    analogWrite(MOTOR_DRIVER_IN2, 0);
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
  int vr_value = analogRead(VR1);
  int speed = map(vr_value, 0, 1023, -255, 255);
  run_motor(speed);
  delay(50);
}