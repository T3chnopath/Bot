#include "bot.h"
#include "motor.h"

void DisplayBot(Bot_t * bot){
    DisplayMotor(bot->FL);
    DisplayMotor(bot->FR);
    DisplayMotor(bot->BL);
    DisplayMotor(bot->BR);
}

void DriveBot(Bot_t *bot, Direction_t dir) {
	DriveMotor(bot->FL, dir);
	DriveMotor(bot->FR, dir);
	DriveMotor(bot->BL, dir);
	DriveMotor(bot->BR, dir);	
}

void RotateBot(Bot_t *bot, int angle) {
	if(angle > 0) {
		printf("Rotating bot right %d degrees.\n", angle);
		DriveMotor(bot->FL, FORWARD);
		DriveMotor(bot->BL, FORWARD);
		DriveMotor(bot->FR, BACKWARD);
		DriveMotor(bot->BR, BACKWARD);
	}

	if(angle < 0) {
		printf("Rotating bot left %d degrees.\n", angle);
		DriveMotor(bot->FR, FORWARD);
		DriveMotor(bot->BR, FORWARD);
		DriveMotor(bot->FL, BACKWARD);
		DriveMotor(bot->BL, BACKWARD);
	}

}
