//
// Created by Oswald on 03.10.2019.
//

extern "C" {
#include "driver/sh1106.h"
}

#include "CMainScreen.h"
#include <iostream>

void CMainScreen::init()
{
    SH1106_begin();
    SH1106_clear();
    SH1106_display();
}

void CMainScreen::run()
{
    wchar_t buffer[] = L"W";


    if(CButtons::isButtonOnePressed())
    {
        SH1106_string(0, 10, buffer, 12, 1);
        SH1106_display();
    }
}