//
// Created by Oswald on 11.10.2019.
//

#ifndef SCREEN_CBUTTONS_H
#define SCREEN_CBUTTONS_H

#include "CGlobalParams.h"
#include "wiringPi.h"

class CButtons {

public:
    static void init();
    static bool isButtonOnePressed() { return digitalRead(CGlobalParams::BUTTON_ONE); };
    static bool isButtonTwoPressed() { return digitalRead(CGlobalParams::BUTTON_TWO); };
};


#endif //SCREEN_CBUTTONS_H
