// This file will define the jet class

#ifndef JET_H
#define JET_H
#include "Aircraft.h"

class Jet : public Aircraft {

    private:
    //Specified variables exclusive to this class
    string wingshape;
    bool Stealth;

    //Specified constructors for Jet
    //Necessary due to the addition of wingshape and isstealth parameters
    public:
    Jet();
    Jet(string n);
    Jet(string n, string e);
    Jet(string n, string e, string m);
    Jet(string n, string e, string m, int mA);
    Jet(string n, string e, string m, int mA, string nT);
    Jet(string n, string e, string m, int mA, string nT, string ws);
    Jet(string n, string e, string m, int mA, string nT, string ws, bool isStealth);

    //Prototypes of methods to alter wingshape and stealth. 
    string getWingShape();
    bool isStealth();
    void setWingShape(string ns);
    void changeStealth();
    string all_details();


};

#endif