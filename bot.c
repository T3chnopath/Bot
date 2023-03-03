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


