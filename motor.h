#ifndef MOTOR_H
#define MOTOR_H

#include <stdio.h>

typedef struct Motor_t{
    char name[20];
    int speed;
} Motor_t;

void DisplayMotor(Motor_t motor);
#endif
