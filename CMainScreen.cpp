//
// Created by Oswald on 03.10.2019.
//

extern "C" {
#include "driver/sh1106.h"
}
#include "CMainScreen.h"
#include "CController.h"

void CMainScreen::init()
{
    SH1106_begin();
}

void CMainScreen::run()
{
    SH1106_clear();
    SH1106_string(0, 0, "test123", 10, 1);
    SH1106_display();

    if(CButtons::isButtonOnePressed())
    {
        SH1106_clear();
        SH1106_string(0, 10, "wcisniety przycisk!", 10, 1);
        SH1106_display();
    }
}