/*
    This file defines the methods and constructors of the Hangar class
*/

#include <iostream>
#include "Hangar.h"
#include "Jet.cpp"
#include "Helicopter.cpp"
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

//Prints the details of an aircraft
//Used as a helper for the displayAllAircraft function below this one
void Hangar::printAircraftDetails(Aircraft A){
    cout << A.all_details() << endl;
}

//Displays all of the details stored in the Aircraft hangar
void Hangar::displayAllAircraft(){
    for(Aircraft aiv: AircraftStored)
    {
        cout << aiv.all_details() << endl;
    }

}

//Adds an Aircraft to the hangar
void Hangar::addAircraft(Aircraft A){
    AircraftStored.push_back(A);
}


//Gets all of the details of the Hangar
string Hangar::all_Hdetails(){
    string allPossibleDetails = "Hangar Name:: " + getName() + "\nAircraft Stored\n";
    for(Aircraft aiv: AircraftStored)
    {
        allPossibleDetails += aiv.all_details() + "\n";
    }
    return allPossibleDetails;
}



