/*
    This file is responsible for testing the Jet class
    in order to ensure that all code is covered.
    This file is compiled seperately from the main program. 
*/

#include <iostream>
#include "../Classes_and_Headers/Jet.cpp"
using namespace std;

//Initialization Test
//We use the default constructor and check through all strings to ensure that they are at their default values
//We also use this test to ensure all_details is working ok. 
string test_initialization (){
    Jet sampleJet = Jet();
    if(sampleJet.getName() != "Generic Aircraft"){
        return "Generic Initialization failed while retreiving the jet name.";
    }
    else if (sampleJet.getEngine() != "Generic Engine"){
        return "Generic Initialization failed while retreiving the jet engine.";
    }
    else if (sampleJet.getManufacturer() != "Generic Manufacturer"){
        return "Generic Initialization failed while retreiving the jet manufacturer.";
    }
    else if (sampleJet.getMaxAltitude() !=  10000){
        return "Generic Initialization failed while retreiving the jet service ceiling";
    }
    else if (sampleJet.getNotes() != "Nothing to See here"){
        return "Generic Initialization failed while retreiving the jet notes";
    }
    else if (sampleJet.getWingShape() != "Generic Style"){
        return "Generic Intialization failed while retreiving the jet wingshape";
    } 
    else if (sampleJet.isStealth()){
        return "Generic Intialization failed, it's not possible for a generic jet to be stealthy";
    }
    else{
        return "Generic Initialization Success!\nHere are the jet's properties\n" + sampleJet.all_details() + "\n";
    }
}

//Testing changeShape
string test_getShapeAfterChange(){
    Jet sampleJet = Jet();
    sampleJet.setWingShape("YF-23 Style");
    if(sampleJet.getWingShape() == "YF-23 Style"){
        return "setWingShape() Mission Success, Jet now uses wings in shape of the YF-23. BRING THAT JET BACK TO LIFE PLEASE.";
    }
    else{
        return "setWingShape() Mission Failure, Jet wingshape still generic.";
    }
}

//Testing changeStealth
string test_getStealthAfterChange(){
    Jet sampleJet = Jet();
    sampleJet.changeStealth();
    if(sampleJet.isStealth()){
        return "changeStealth() Mission Success, Jet is now stealthy.";
    }
    else{
        return "changeStealth() Mission Failure, Jet was not set to stealthy.";
    }
}


//Reconducting tests to double check that the inheritance didn't break anything
//Testing changeName
string test_getNameAfterChange(){
    Jet sampleJet = Jet();
    sampleJet.changeName("SR-71");
    if(sampleJet.getName() == "SR-71"){
        return "changeName() Mission Success, Name of Jet is now SR-71.";
    }
    else{
        return "changeName() Mission Failure, Jet still generic.";
    }
}

//Testing changeEngine
string test_getEngineAfterChange(){
    Jet sampleJet = Jet();
    sampleJet.changeEngine("Pratt and Whitney TurboFan");
    if(sampleJet.getEngine() == "Pratt and Whitney TurboFan")
    {
        return "changeEngine() Mission Success, Jet now uses the Pratt and Whitney TurboFan.";
    }
    else{
        return "changeEngine() Mission Failure.";
    }
}

//Testing changeManufacturer
string test_getManufacturerAfterChange(){
    Jet sampleJet = Jet();
    sampleJet.changeManufacturer("Lockheed Martin");
    if(sampleJet.getManufacturer() == "Lockheed Martin")
    {
        return "changeManufacturer Mission Success, Jet is now associated with the manufacturer Lockheed Martin.";
    }
    else{
        return "changeManufacturer Mission Failure.";
    }
}

//Testing setAltitude
string test_getAltitudeAfterChange(){
    Jet sampleJet = Jet();
    sampleJet.setMaxAltitude(80000);
    if(sampleJet.getMaxAltitude() == 80000)
    {
        return "setMaxAltitude Mission Success, Jet service ceiling now determined at 80000 feet.";
    }
    else{
        return "setMaxAltitude Mission Failure.";
    }
}

//Testing setNotes
string test_getNotesAfterChange(){
    Jet sampleJet = Jet();
    sampleJet.setNotes("[DATA EXPUNGED]");
    if(sampleJet.getNotes() == "[DATA EXPUNGED]")
    {
        return "setNotes Mission Success, Jet has notes [DATA EXPUNGED].";
    }
    else{
        return "setNotes Mission Failure";
    }
}

//Running all of the above tests. 
int main(){

    cout << test_initialization() << endl;
    cout << test_getNameAfterChange() << endl;
    cout << test_getEngineAfterChange() << endl;
    cout << test_getManufacturerAfterChange() << endl;
    cout << test_getAltitudeAfterChange() << endl;
    cout << test_getNotesAfterChange() << endl;
    cout << test_getShapeAfterChange() << endl;
    cout << test_getStealthAfterChange() << endl;
    return 0;
}