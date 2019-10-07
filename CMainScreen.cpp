//
// Created by Oswald on 03.10.2019.
//

#include "CMainScreen.h"
extern "C" {
#include "driver/sh1106.h"
}
void CMainScreen::run()
{


    const char* cos = "TEST 123 BEZ POLSKICH ZNAKOW";
    SH1106_begin();
    SH1106_string(0, 0, cos, 12, 1);
    SH1106_display();
}