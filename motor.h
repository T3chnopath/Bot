#ifndef MOTOR_H
#define MOTOR_H

#include <stdio.h>

typedef enum direction {BACKWARD, FORWARD} Direction_t;

typedef struct Motor_t{
    char name[20];
    int speed;
} Motor_t;

void DisplayMotor(Motor_t motor);
void DriveMotor(Motor_t motor, Direction_t dir);
#endif
