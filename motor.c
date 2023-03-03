#include "motor.h"

void DriveMotor(Motor_t motor, Direction_t dir) {
	printf("Driving %s ", motor.name);
	
	if(dir) {
		printf("forward ");
	}

	else {
		printf("backward ");
	}

	printf("at speed %d. \n", motor.speed);
}


void DisplayMotor(Motor_t motor) {
    printf("Name: %s\n", motor.name);
    printf("Speed: %d\n", motor.speed);
    printf("\n");
}

