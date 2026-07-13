#include <Arduino.h>

constexpr int MOTOR_DRIVER_IN1 = 5;
constexpr int MOTOR_DRIVER_IN2 = 6;

void stop_motor_2_steps() {
  digitalWrite(MOTOR_DRIVER_IN1, LOW);
  digitalWrite(MOTOR_DRIVER_IN2, LOW);
  delay(500);
  digitalWrite(MOTOR_DRIVER_IN1, HIGH);
  digitalWrite(MOTOR_DRIVER_IN2, HIGH);
  delay(500);

}

void setup() {
  pinMode(MOTOR_DRIVER_IN1, OUTPUT);
  pinMode(MOTOR_DRIVER_IN2, OUTPUT);
}

void loop() {
  digitalWrite(MOTOR_DRIVER_IN1, HIGH);
  digitalWrite(MOTOR_DRIVER_IN2, LOW);
  delay(5000);
  stop_motor_2_steps();
  digitalWrite(MOTOR_DRIVER_IN1, LOW);
  digitalWrite(MOTOR_DRIVER_IN2, HIGH);
  delay(5000);
  stop_motor_2_steps();
}