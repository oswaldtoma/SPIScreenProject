//
// Created by Oswald on 07.10.2019.
//

#include "CController.h"
#include "CGlobalParams.h"
#include <wiringPi.h>

void CController::init()
{
    wiringPiSetup();
    CButtons::init();
}
