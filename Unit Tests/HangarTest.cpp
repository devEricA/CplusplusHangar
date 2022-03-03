/*
    This file is responsible for testing the Hangar class
    in order to ensure all code is covered.
    This file is compiled seperately from the main program. 
*/

#include <iostream>
#include "../Classes_and_Headers/Hangar.cpp"
using namespace std;

//Testing the initialization of the Hangar class
string test_initialization(){
    Hangar sampleHangar = Hangar();
    if(sampleHangar.getName() == "Generic Hangar"){
        return "Generic Hangar Initialization Success!";
    }
    else 
        return "Generic Hangar Initialization Failure";
}

//Testing the additon of aircraft to the Hangar
string test_additions(){
    Hangar sampleHangar = Hangar("Aircraft Class Lab");
    Aircraft FlyingTiger = Aircraft("P40", "Allison V1710", "Curtiss-Wright");
    Jet Mriya = Jet("An-225", "Ivchenko Progress D-18T", "Antonov", 50000, "DAMMIT Russia!", "Passenger/Cargo Style", false);
    Helicopter Apache = Helicopter("AH-64", "General Electric T700-701D", "Boeing", 10000, "Purley Pristine", "Twin-Turboshaft");
    sampleHangar.addAircraft(FlyingTiger);
    sampleHangar.addAircraft(Mriya);
    sampleHangar.addAircraft(Apache);
    return sampleHangar.all_Hdetails();
}

//Running the tests
int main()
{
    cout << test_initialization() << endl;
    cout << test_additions() << endl;
    return 0;
}