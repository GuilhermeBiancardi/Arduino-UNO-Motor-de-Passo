/**
 * Motor 5v
 */

#include <Arduino.h>
#include <Stepper.h>

const int passosPorVolta = 32;

#define pinIN1 8
#define pinIN2 9
#define pinIN3 10
#define pinIN4 11

Stepper myStepper(passosPorVolta, pinIN1, pinIN3, pinIN2, pinIN4); 

// Funções Bult-In
void movimentaMotorPasso();

void setup() {
    Serial.begin (9600);
    // Velocidade em RPM até +/- 1200
    myStepper.setSpeed(500);
}

void loop() {
    movimentaMotorPasso();
}

void movimentaMotorPasso() {

    // Uma volta completa
    myStepper.step(2048);

    // Uma volta completa ao contrário.
    myStepper.step(-2048);

}