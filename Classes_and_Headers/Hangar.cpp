/*
    This file defines the methods and constructors of the Hangar class
*/

#include <iostream>
#include "Hangar.h"
#include "Aircraft.cpp"
using namespace std;

//Default constructor
Hangar::Hangar()
{
    Name = "Generic Hangar";
    AircraftStored = {};
}

//Constructor with a name supplied
Hangar::Hangar(string n)
{
    Name = n;
    AircraftStored = {};
}

//Constructor with a name and vector of aircraft supplied.
Hangar::Hangar(string n, vector<Aircraft> as)
{
    Name = n;
    AircraftStored = as;
}

//Returns the name of the aircraft
string Hangar::getName(){
    return Name;
}

//Adds an Aircraft to the hangar
void Hangar::addAircraft(Aircraft A){
    AircraftStored.push_back(A);
}


//Gets all of the details of the Hangar
string Hangar::all_Hdetails(){
    string allPossibleDetails = "Hangar Name:: " + getName() + "\nAircraft Stored\n";
    for(int x = 0; x<AircraftStored.size(); x++)
    {
        allPossibleDetails += AircraftStored[x].all_details() + "\n";
    }
    return allPossibleDetails;
}



