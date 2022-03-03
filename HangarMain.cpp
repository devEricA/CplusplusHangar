/*
    This will serve as the main area 
    for constructing and instansiating 
    the hangar, aircraft, helicopter, and jet classes. 
*/

#include <iostream>
#include "Classes_and_Headers/Hangar.cpp"
using namespace std;

int main()
{
    //Greeting the user
    cout << "Welcome to Eric A's Hangars and Aircraft!" << endl;

    //Defining one Hangar with one Jet
    cout << "1st Hangar" << endl;
    Hangar AnMemorial = Hangar("Memorial of the An-225");
    Jet Mriya = Jet("An-225", "Ivchenko Progress D-18T", "Antonov", 50000, "Sadly destroyed by Russia. But it shall live on in this program.", "Passenger/Cargo Style", false);
    AnMemorial.addAircraft(Mriya);
    cout << AnMemorial.all_Hdetails();


    //Defining another Hangar with a Jet and Aircraft
    cout << "2nd Hangar" << endl;
    Hangar standardHangar = Hangar();
    Aircraft standardAircraftA = Aircraft();
    Jet standardJet = Jet();
    standardHangar.addAircraft(standardAircraftA);
    standardHangar.addAircraft(standardJet);
    cout << standardHangar.all_Hdetails();

    //Defining another Hangar with a Jet and Helicopter
    cout << "3rd Hangar" << endl;
    Hangar mixedHangar = Hangar("Jets n Choppers");
    Jet Fenrir = Jet("XFA-33", "Classified", "Leasath", 70000, "The ultimate fighter that remains in the realm of fiction.", "Polyhedral Delta", true);
    Helicopter Chinook = Helicopter("CH-47", "Lycoming T55-L-5", "Boeing", 20000, "One of the heaviest lifting choppers.", "Tandem Rotors");
    mixedHangar.addAircraft(Fenrir);
    mixedHangar.addAircraft(Chinook);
    cout << mixedHangar.all_Hdetails(); 
}