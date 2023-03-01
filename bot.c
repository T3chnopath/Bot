#include "bot.h"
#include "motor.h"

void DisplayBot(Bot_t * bot){
    DisplayMotor(bot->FL);
    DisplayMotor(bot->FR);
    DisplayMotor(bot->BL);
    DisplayMotor(bot->BR);
}


