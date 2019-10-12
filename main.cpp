#include "CMainScreen.h"
#include "CController.h"

using namespace std;

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