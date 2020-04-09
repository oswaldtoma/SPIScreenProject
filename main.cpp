#include <iostream>
#include "CMainScreen.h"
#include "CController.h"

extern "C" {
#include "driver/sh1106.h"
}

int main()
{
    //init
    CController::init();
    CMainScreen scr;
    scr.init();

    while(1) {
        scr.run(); //todo odswiezanie, zegar?
    }
}