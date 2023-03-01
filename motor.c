#include "motor.h"

void DisplayMotor(Motor_t motor) {
    printf("Name: %s\n", motor.name);
    printf("Speed: %d\n", motor.speed);
    printf("\n");
}

