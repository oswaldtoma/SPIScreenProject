//
// Created by Oswald on 11.10.2019.
//

#include "CButtons.h"
#include "CGlobalParams.h"
#include <wiringPi.h>

void CButtons::init()
{
        pinMode(CGlobalParams::BUTTON_ONE, INPUT);
        pullUpDnControl(CGlobalParams::BUTTON_ONE, PUD_UP);

        pinMode(CGlobalParams::BUTTON_TWO, INPUT);
        pullUpDnControl(CGlobalParams::BUTTON_TWO, PUD_UP); //for future refactoring
}
