/*
    This file defines the methods and constructors of the helicopter class
*/

#include <iostream>
#include "Helicopter.h"
#include "Aircraft.cpp"
using namespace std;

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