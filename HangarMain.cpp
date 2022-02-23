/*
    This will serve as the main area 
    for constructing and instansiating 
    the hangar, aircraft, helicopter, and jet classes. 
*/

#include <iostream>
#include "Hangar.h"
#include "Aircraft.h"
#include "Aircraft.cpp"
#include "Jet.h"
#include "Helicopter.h"
using namespace std;

int main()
{
    cout << "Prepare for Liftoff" << endl;
    Aircraft testAircraft;
    testAircraft.Test();
    return 0;
}