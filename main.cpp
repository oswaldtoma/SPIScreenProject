#include "CMainScreen.h"
#include "CController.h"

using namespace std;

int main()
{
    //init
    CController::init();

    //CMainScreen
    CMainScreen scr;
    scr.run();
}