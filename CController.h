//
// Created by Oswald on 07.10.2019.
//

#ifndef SCREEN_CCONTROLLER_H
#define SCREEN_CCONTROLLER_H

#include "CButtons.h"

class CController {

public:
    static CButtons buttonOne;
    static CButtons buttonTwo;
    static void init();
};


#endif //SCREEN_CCONTROLLER_H
