#include <iostream>
#include <errno.h>
#include <wiringPi.h>
#include <wiringPiSPI.h>
#include <unistd.h>
#include "testScreen.h"

using namespace std;


int main()
{
    wiringPiSetup();
    testScreen scr;
    scr.run();
}