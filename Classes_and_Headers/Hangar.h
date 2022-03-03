// This file will define the Hangar class. 

#ifndef HANGAR_H
#define HANGAR_H

#include "Aircraft.h"
#include <string>
#include <vector>
using namespace std;

class Hangar{

    //Specified varaibles as stated in the README Objectives
    //Closest to Arraylist is a vector. 
    private:
    string Name;
    vector<Aircraft> AircraftStored;

    //Prototypes of constructors for Hangar
    public:
    Hangar();
    Hangar(string n);
    Hangar(string n, vector<Aircraft> as);

    //Methods that will come in Handy
    string getName();
    void printAircraftDetails(Aircraft A);
    void displayAllAircraft();
    void addAircraft(Aircraft A);
    string concatenateDetails(string s, Aircraft A);
    string all_Hdetails();
    

};

#endif