/*
    This file defines the methods and constructors of the Jet class
*/

#include <iostream>
#include "Jet.h"
#include "Aircraft.cpp"
using namespace std;

// Default Constructor for Jet
// Because Jet inherits Aircraft's properties, 
// the only variables we need to change are wingshape and stealth
// because those variables are exclusive to the Jet class. 
Jet::Jet():Aircraft(){
    wingshape = "Generic Style";
    Stealth = false;
};

// Constructor with the name supplied
// Already defined in the Aircraft class, so we reuse it
// and set default variables for wingshape and stealth
Jet::Jet(string n):Aircraft(n){
    wingshape = "Generic Style";
    Stealth = false;
};

// Constructor with a name and engine supplied
Jet::Jet(string n, string e):Aircraft(n, e){
    wingshape = "Generic Style";
    Stealth = false;
};

// Constructor with a name, engine, and manufacturer supplied
Jet::Jet(string n, string e, string m):Aircraft(n, e, m){
    wingshape = "Generic Style";
    Stealth = false;
};

// Constructor with a name, engine, manufacturer, and max altitude supplied
Jet::Jet(string n, string e, string m, int mA):Aircraft(n, e, m, mA){
    wingshape = "Generic Style";
    Stealth = false;
};

// Constructor with a name, engine, manufacturer, altitude, and notes
Jet::Jet(string n, string e, string m, int mA, string nT):Aircraft(n, e, m, mA, nT){
    wingshape = "Generic Style";
    Stealth = false;
};

// Constructor with a name, engine, manufacturer, altitude, notes, and wingshape
// Wingshape is exclusive to the Jet class, thus it needs to be set within the constructor
// The Aircraft constructor with name, engine, manufacturer, maxAltitude, and notes is resued. 
Jet::Jet(string n, string e, string m, int mA, string nT, string ws):Aircraft(n, e, m, mA, nT){
    wingshape = ws;
    Stealth = false;
};

// Constructor with a name, engine, manufacturer, altitude, notes, wingshape, and whether its stealth. 
Jet::Jet(string n, string e, string m, int mA, string nT, string ws, bool is):Aircraft(n, e, m, mA, nT){
    wingshape = ws;
    Stealth = is;
};

//Gets the wingshape of the jet
string Jet::getWingShape(){
    return wingshape;
}

//Checks whether or not the jet has stealth properties
bool Jet::isStealth(){
    return Stealth;
}

//Changes wingshape
void Jet::setWingShape(string ns){
    wingshape = ns;
}

/*
    No need to redefine methods like getName, getEngine, etc....
    since they are already defined in the Aircraft class. 
*/

//Changes the stealth property of the jet
//No need to pass anything since there are only two values for boolean
void Jet::changeStealth(){
    Stealth = !Stealth;
}

//Overriding the all_details method so we can include the properties exclusive to Jet
string Jet::all_details(){
    return "Name :: " + getName() + "\nEngine :: " + getEngine() + "\nManufacturer :: " + getManufacturer() + "\nService Ceiling :: " + to_string(getMaxAltitude()) + " ft\nWingshape :: " + getWingShape() + "\nStealth :: " + to_string(isStealth()) +"\nNotes :: " + getNotes() + "\n";
}