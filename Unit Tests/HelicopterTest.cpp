/*
    This file is responsible for testing the Helicopter class
    in order to ensure that all code is covered.
    This file is compiled seperately from the main program. 
*/

#include <iostream>
#include "../Classes_and_Headers/Aircraft.cpp"
using namespace std;

//Initialization Test
//We use the default constructor and check through all strings to ensure that they are at their default values
//We also use this test to ensure all_details is working ok. 
string test_initialization (){
    Helicopter sampleChoppa = Helicopter();
    if(sampleChoppa.getName() != "Generic Aircraft"){
        return "Generic Initialization failed while retreiving the Helicopter name.";
    }
    else if (sampleChoppa.getEngine() != "Generic Engine"){
        return "Generic Initialization failed while retreiving the Helicopter engine.";
    }
    else if (sampleChoppa.getManufacturer() != "Generic Manufacturer"){
        return "Generic Initialization failed while retreiving the Helicopter manufacturer.";
    }
    else if (sampleChoppa.getMaxAltitude() !=  10000){
        return "Generic Initialization failed while retreiving the Helicopter service ceiling";
    }
    else if (sampleChoppa.getNotes() != "Nothing to See here"){
        return "Generic Initialization failed while retreiving the Helicopter notes";
    }
    else if (sampleChoppa.getRotorType() != "Generic Rotors"){
        return "Generic Initialization failed while retreiving the Helicopter Rotors"; 
    }
    else{
        return "Generic Initialization Success!\nHere are the Helicopter's properties\n" + sampleChoppa.all_details() + "\n";
    }
}

//Testing changeRotors
string test_getRotorsAfterChange(){
    Helicopter sampleChoppa = Helicopter();
    sampleChoppa.changeRotorType("Chinook Rotors");
    if(sampleChoppa.getRotorType() == "Chinook Rotors")
    {
        return "changeRotorType Mission Success, Helicopter now configured to use Chinook Rotors.";
    }
    else{
        return "changeRotorType Mission failure, Helicopter still uses Generic Rotors";
    }
}

//Reconducting Aircraft class tests to double check that the inheritance didn't break anything
//Testing changeName
string test_getNameAfterChange(){
    Helicopter sampleChoppa = Helicopter();
    sampleChoppa.changeName("UH-1 Huey");
    if(sampleChoppa.getName() == "UH-1 Huey"){
        return "changeName() Mission Success, Name of Helicopter is now UH-1 Huey.";
    }
    else{
        return "changeName() Mission Failure, Helicopter still generic.";
    }
}

//Testing changeEngine
string test_getEngineAfterChange(){
    Helicopter sampleChoppa = Helicopter();
    sampleChoppa.changeEngine("WhisperStar");
    if(sampleChoppa.getEngine() == "WhisperStar")
    {
        return "changeEngine() Mission Success, Helicopter now uses the WhisperStar.";
    }
    else{
        return "changeEngine() Mission Failure.";
    }
}

//Testing changeManufacturer
string test_getManufacturerAfterChange(){
    Helicopter sampleChoppa = Helicopter();
    sampleChoppa.changeManufacturer("Bell");
    if(sampleChoppa.getManufacturer() == "Bell")
    {
        return "changeManufacturer Mission Success, Helicopter is now associated with the manufacturer Bell.";
    }
    else{
        return "changeManufacturer Mission Failure.";
    }
}

//Testing setAltitude
string test_getAltitudeAfterChange(){
    Helicopter sampleChoppa = Helicopter();
    sampleChoppa.setMaxAltitude(5000);
    if(sampleChoppa.getMaxAltitude() == 5000)
    {
        return "setMaxAltitude Mission Success, Helicopter service ceiling now determined at 5000 feet.";
    }
    else{
        return "setMaxAltitude Mission Failure.";
    }
}

//Testing setNotes
string test_getNotesAfterChange(){
    Helicopter sampleChoppa = Helicopter();
    sampleChoppa.setNotes("[DATA EXPUNGED]");
    if(sampleChoppa.getNotes() == "[DATA EXPUNGED]")
    {
        return "setNotes Mission Success, Helicopter has notes [DATA EXPUNGED].";
    }
    else{
        return "setNotes Mission Failure";
    }
}

//Running all of the above tests
int main()
{
    cout << test_initialization() << endl;
    cout << test_getNameAfterChange() << endl;
    cout << test_getEngineAfterChange() << endl;
    cout << test_getManufacturerAfterChange() << endl;
    cout << test_getAltitudeAfterChange() << endl;
    cout << test_getNotesAfterChange() << endl;
    cout << test_getRotorsAfterChange() << endl;

    return 0;
}