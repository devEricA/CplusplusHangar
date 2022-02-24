// This file will define the Helicopter class

#ifndef HELICOPTER_H
#define HELICOPTER_H
#include "Aircraft.h"

class Helicopter: public Aircraft{

    private:
    //Specified variable exclusive to this class
    string rotorType;

    //Constructors for Helicopter
    //Nessary due to the additon of the rotorType
    public:
    Helicopter();
    Helicopter(string n);
    Helicopter(string n, string e);
    Helicopter(string n, string e, string m);
    Helicopter(string n, string e, string m, int mA);
    Helicopter(string n, string e, string m, int mA, string nT);
    Helicopter(string n, string e, string m, int mA, string nT, string rt);

    //Prototypes of methods
    string getRotorType();
    void changeRotorType(string newRotors);
    string all_details();
};

#endif