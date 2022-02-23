// This file defines the structure of the aircraft class

#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <string>
using namespace std;

class Aircraft{

    public:

    //Specified variables as stated in the README Objective section
    string Name;
    string Engine;
    string Manufacturer;
    int maxAltitude;
    string Notes;

    //Prototypes of constructors based on defined variables
    Aircraft();
    Aircraft(string n); 
    Aircraft(string n, string e);
    Aircraft(string n, string e, string m);
    Aircraft(string n, string e, string m, int mA);
    Aircraft(string n, string e, string m, int mA, string nT);

    //Protypes of methods
    void Test();

};
#endif