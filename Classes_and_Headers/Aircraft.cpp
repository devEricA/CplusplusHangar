/*
    This file defines the methods and constructors of the Aircraft Class
*/

#include <iostream>
#include "Aircraft.h"
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
string Aircraft::all_details(){
    return "Name :: " + getName() + "\nEngine :: " + getEngine() + "\nManufacturer :: " + getManufacturer() + "\nService Ceiling :: " +   + " ft\n Notes ::" + getNotes() + "\n";
}