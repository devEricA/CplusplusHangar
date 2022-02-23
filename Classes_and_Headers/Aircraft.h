// This file defines the structure of the aircraft class

#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <string>
using namespace std;

class Aircraft{
    //Specified variables as stated in the README Objective section
    //Defined private so only methods associated with this class can alter them.
    private:
    string Name;
    string Engine;
    string Manufacturer;
    int maxAltitude;
    string Notes;

    public:
    //Prototypes of constructors based on defined variables
    Aircraft();
    Aircraft(string n); 
    Aircraft(string n, string e);
    Aircraft(string n, string e, string m);
    Aircraft(string n, string e, string m, int mA);
    Aircraft(string n, string e, string m, int mA, string nT);

    //Protypes of methods
    void Test();
    string getName();
    string getEngine();
    string getManufacturer();
    int getMaxAltitude();
    string getNotes();
    void changeName(string newName);
    void changeEngine(string newEngine);
    void changeManufacturer(string newManufacturer);
    void setMaxAltitude(int newMaxAltitude);
    void setNotes(string newNotes);
    string all_details();
};
#endif