#include <stdio.h>
#include <string.h>

typedef struct Motor_t{
    char name[20];
    int speed;
} Motor_t;

typedef struct Bot_t{
    Motor_t FL;
    Motor_t FR;
    Motor_t BL;
    Motor_t BR;

} Bot_t;


void DisplayMotor(Motor_t motor) {
    printf("Name: %s\n", motor.name);
    printf("Speed: %d\n", motor.speed);
    printf("\n");
}

void DisplayBot(Bot_t * bot){
    DisplayMotor(bot->FL);
    DisplayMotor(bot->FR);
    DisplayMotor(bot->BL);
    DisplayMotor(bot->BR);
}

int main() {

    Motor_t FL = {"Front Left", 10};    
    Motor_t FR = {"Front Right", 10};
    Motor_t BL = {"Back Left", 10};
    Motor_t BR = {"Back Right", 10};
    
    Bot_t Bot = {FL, FR, BL, BR};
    DisplayBot(&Bot); 
    return 0;
}
