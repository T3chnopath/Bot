#ifndef BOT_H
#define BOT_H

#include "motor.h"
#include "stdio.h"

typedef struct Bot_t{
    Motor_t FL;
    Motor_t FR;
    Motor_t BL;
    Motor_t BR;

} Bot_t;

void DisplayBot(Bot_t *bot);
#endif
