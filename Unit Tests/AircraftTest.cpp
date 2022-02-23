/*
    This file is responsible for testing the Aircraft class
    in order to ensure that all code is covered.
    This file is compiled seperately from the main program. 
*/

#include <iostream>
#include "../Classes_and_Headers/Aircraft.cpp"
using namespace std;

// No tests needed for get methods, they are already covered in the change method tests.
// This is due to the fac that we make the get calls within the tests. 

//Testing changeName
string test_getNameAfterChange(){
    Aircraft sampleAircraft = Aircraft();
    sampleAircraft.changeName("SR-71");
    if(sampleAircraft.getName() == "SR-71"){
        return "changeName() Mission Success, Name of Aircraft is now SR-71.";
    }
    else{
        return "changeName() Mission Failure, Aircraft still generic.";
    }
}

//Testing changeEngine
string test_getEngineAfterChange(){
    Aircraft sampleAircraft = Aircraft();
    sampleAircraft.changeEngine("Pratt and Whitney TurboFan");
    if(sampleAircraft.getEngine() == "Pratt and Whitney TurboFan")
    {
        return "changeEngine() Mission Success, Aircraft now uses the Pratt and Whitney TurboFan.";
    }
    else{
        return "changeEngine() Mission Failure.";
    }
}

//Testing changeManufacturer
string test_getManufacturerAfterChange(){
    Aircraft sampleAircraft = Aircraft();
    sampleAircraft.changeManufacturer("Lockheed Martin");
    if(sampleAircraft.getManufacturer() == "Lockheed Martin")
    {
        return "changeManufacturer Mission Success, Aircraft is now associated with the manufacturer Lockheed Martin.";
    }
    else{
        return "changeManufacturer Mission Failure.";
    }
}

//Testing setAltitude
string test_getAltitudeAfterChange(){
    Aircraft sampleAircraft = Aircraft();
    sampleAircraft.setMaxAltitude(80000);
    if(sampleAircraft.getMaxAltitude() == 80000)
    {
        return "setMaxAltitude Mission Success, Aircraft service ceiling now determined at 80000 feet.";
    }
    else{
        return "setMaxAltitude Mission Failure.";
    }
}

//Testing setNotes
string test_getNotesAfterChange(){
    Aircraft sampleAircraft = Aircraft();
    sampleAircraft.setNotes("[DATA EXPUNGED]");
    if(sampleAircraft.getNotes() == "[DATA EXPUNGED]")
    {
        return "setNotes Mission Success, Aircraft has notes [DATA EXPUNGED].";
    }
    else{
        return "setNotes Mission Failure";
    }

}

//Running all of the above tests
int main()
{
    cout << test_getNameAfterChange() << endl;
    cout << test_getEngineAfterChange() << endl;
    cout << test_getManufacturerAfterChange() << endl;
    cout << test_getAltitudeAfterChange() << endl;
    cout << test_getNotesAfterChange() << endl;

    return 0;
}