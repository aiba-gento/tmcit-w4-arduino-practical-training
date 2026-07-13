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
  // 半固定抵抗の値の応じて２週する時間を変化し丁度いいタイムに変更する
  int vr_value = analogRead(VR1);
  int loop_time = map(vr_value, 0, 1023, 10000, 100000);
  run_motor(1);
  delay(loop_time);
  run_motor(0);
  delay(1000);
}