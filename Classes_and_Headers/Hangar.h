// This file will define the Hangar class. 

#ifndef HANGAR_H
#define HANGAR_H

#include "Aircraft.h"
#include <string>
using namespace std;

class Hangar{

    //Specified varaibles as stated in the README Objectives
    //Closest to Arraylist is a dynamic Array in this case (hince the Aircraft*)
    //C++ ArrayLists appear to require the namespace System, which is not supported by this particular project setup.
    private:
    string Name;
    Aircraft* AircraftStored;

    //Prototypes of constructors for Hangar
    public:
    Hangar();
    Hangar(string n);
    Hangar(string n, Aircraft* as);

    //Methods that will come in Handy
    string getName();
    void displayAllAircraft();
    void addAircraft(Aircraft A);
    

};

#endif