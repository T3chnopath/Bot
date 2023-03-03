#include "motor.h"
#include "bot.h"
#include <stdio.h>
#include <string.h>

int main() {

    Motor_t FL = {"Front Left", 10};    
    Motor_t FR = {"Front Right", 10};
    Motor_t BL = {"Back Left", 10};
    Motor_t BR = {"Back Right", 10};
    
    Bot_t Bot = {FL, FR, BL, BR};
    DisplayBot(&Bot);

	DriveBot(&Bot, FORWARD); 
	RotateBot(&Bot, 45);
	RotateBot(&Bot, -45);
    return 0;
}
