/*
    This file defines the methods and constructors for All aircraft
*/

#include <iostream>
#include "Aircraft.h"
#include "Jet.h"
#include "Helicopter.h"
using namespace std;

// Default constructor gives specified properties defined values when nothing is passed
Aircraft::Aircraft()
{
    Name = "Generic Aircraft";
    Engine = "Generic Engine";
    Manufacturer = "Generic Manufacturer";
    maxAltitude = 10000;
    Notes = "Nothing to See here";
}

// Constructor with a name supplied
Aircraft::Aircraft(string n){
    Name = n;
    Engine = "Generic Engine";
    Manufacturer = "Generic Manufacturer";
    maxAltitude = 10000;
    Notes = "Nothing to See here";
}

// Constructor with a name and engine supplied
Aircraft::Aircraft(string n, string e){
    Name = n;
    Engine = e;
    Manufacturer = "Generic Manufacturer";
    maxAltitude = 10000;
    Notes = "Nothing to See here";
}

// Constructor with a name, engine, and manufacturer supplied
Aircraft::Aircraft(string n, string e, string m){
    Name = n;
    Engine = e;
    Manufacturer = m;
    maxAltitude = 10000;
    Notes = "Nothing to See here";
}

// Constructor with a name, engine, manufacturer, and max altitude supplied
Aircraft::Aircraft(string n, string e, string m, int mA){
    Name = n;
    Engine = e;
    Manufacturer = m;
    maxAltitude = mA;
    Notes = "Nothing to See here";
}

// Constructor with a name, engine, manufacturer, altitude, and notes
Aircraft::Aircraft(string n, string e, string m, int mA, string nT){
    Name = n;
    Engine = e;
    Manufacturer = m;
    maxAltitude = mA;
    Notes = nT;
}

//Test Method used in order to check the linkage between this file and the main program file. 
void Aircraft::Test(){
    cout << "Firing up the afterburners" << endl;
}

//Method to get the aircraft's name
string Aircraft::getName(){
    return Name;
}

//Method to get the aircraft's engine
string Aircraft::getEngine(){
    return Engine;
}

//Method to get the aircraft's manufacturer
string Aircraft::getManufacturer(){
    return Manufacturer;
}

//Method to get the aircraft's altitude
int Aircraft::getMaxAltitude(){
    return maxAltitude;
}

//Method to get the aircraft's notes
string Aircraft::getNotes(){
    return Notes;
}

//Method to change the aircraft's name
void Aircraft::changeName(string newName){
    Name = newName;
}

//Method to change the aircraft's engine
void Aircraft::changeEngine(string newEngine){
    Engine = newEngine;
}

//Method to change the aircraft's manufacturer
void Aircraft:: changeManufacturer(string newManufacturer){
    Manufacturer = newManufacturer;
}

//Method to change the aircraft's max altitude
void Aircraft::setMaxAltitude(int newMaxAltitude){
    maxAltitude = newMaxAltitude;
}

//Method to change the aircraft's notes
void Aircraft::setNotes(string newNotes){
    Notes = newNotes;
}

//Method to print all details of the aircraft 
//Needed because C++ does not have the cleanest ability to conduct custom 'toString()' methods 
//Each custom 'toString() 'that i've seen requires the use of streams. 
string Aircraft::all_details(){
    return "Name :: " + getName() + "\nEngine :: " + getEngine() + "\nManufacturer :: " + getManufacturer() + "\nService Ceiling :: " + to_string(getMaxAltitude()) + " ft\nNotes :: " + getNotes() + "\n";
}

/* JET DEFINITION */

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
    return Aircraft::all_details() + " ft\nWingshape :: " + getWingShape() + "\nStealth :: " + to_string(isStealth()) +"\nNotes :: " + getNotes() + "\n";
}

/* HELICOPTER DEFINITION */

//Default constructor
//As stated in the Jet class, no need to redefine Aircraft class variables,
//since we invoke a call to the Aircraft constructor within this one. 
Helicopter::Helicopter():Aircraft(){
    rotorType = "Generic Rotors";
}

// Constructor with the name supplied
Helicopter::Helicopter(string n):Aircraft(n){
    rotorType = "Generic Rotors";
}

// Constructor with a name and engine supplied
Helicopter::Helicopter(string n, string e):Aircraft(n, e){
    rotorType = "Generic Rotors";
}

// Constructor with a name, engine, and manufacturer supplied
Helicopter::Helicopter(string n, string e, string m):Aircraft(n, e, m){
    rotorType = "Generic Rotors";
}

// Constructor with a name, engine, manufacturer, and max altitude supplied
Helicopter::Helicopter(string n, string e, string m, int mA):Aircraft(n, e, m, mA){
    rotorType = "Generic Rotors";
}

// Constructor with a name, engine, manufacturer, altitude, and notes
Helicopter::Helicopter(string n, string e, string m, int mA, string nT):Aircraft(n, e, m, mA, nT){
    rotorType = "Generic Rotors";
}

// Constructor with a name, engine, manufacturer, altitude, notes, and rotorType
// rotorType gets changed within this constructor since it is exclusive to Helicopter
Helicopter::Helicopter(string n, string e, string m, int mA, string nT, string rt):Aircraft(n, e, m, mA, nT){
    rotorType = rt;
}

//Retrieves the Helicopter rotors
string Helicopter::getRotorType(){
    return rotorType;
}

//Changes the Helicopter rotors
void Helicopter::changeRotorType(string newRotors){
    rotorType = newRotors;
}

// All details method
string Helicopter::all_details(){
    return Aircraft::all_details() + "\nRotors :: " + getRotorType() +"\nNotes :: " + getNotes() + "\n";
}