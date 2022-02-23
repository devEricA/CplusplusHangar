# C++Hangar
A simple project demonstrating my experience with C++. This is a work in progress.

# Problem
C++ is one of the most sought after languages in the job market. While I have coded in C++ before, none of my public projects are programmed in C++, and thus, recruiters cannot make a good judgement on how strong my C++ is. 

# Objective
Use C++ to create a program that displays aircraft stored in hangars. 
The specifications for the hangar and aircraft are as follows. 
- Hangar 
    - String Name
    - Array of Aircraft

- Aircraft
    - String Name
    - String Engine
    - String Manufacturer
    - Integer MaxAltitude
    - String Notes

- Jet
    - Extension of Aircraft
    - String WingShape
    - Boolean isStealth

- Helicopter
    - Extension of Aircraft
    - String rotorType 

# Definition of done
At least two hangars must be defined. One hangar must have an Aircraft and a Jet stored in it. Another hangar must have a Helicopter and a Jet stored in it. 

When the program runs, The name of the hangar must be displayed first, followed by all of the aircraft and its info. Rinse and repeat for all other hangars.

# Instructions for Deployment
_These instructions are intended for Linux & Mac Users. It should be done within the terminal_

_Windows users should install [WSL](https://docs.microsoft.com/en-us/windows/wsl/install) and conduct the deployment of this application within the terminal of that system._

1. Ensure g++ is installed.
- This is usually done by typing <code> g++ --version </code> in the terminal prompt. 
- Linux users should have it installed by default. 
- If not installed, visit one of these bulletins for installation
    - [MacOS](http://www.edparrish.net/common/macgpp.php)
    - [Linux & Windows WSL Users](https://linuxhint.com/install-g-compiler-on-ubuntu/)   
        - Commands that use <code>sudo apt</code> may differ depending on what distribution and package manager you are using. 
2. Type <code>g++ HangarMain.cpp</code>, then hit Enter. 
3. Type <code>a.out</code>, then hit Enter. 
4. You should then see output that displays the hangars and all aircraft that are within each one. 

# Additional Information
Compiled in a Linux Mint environment utilizing g++ version 9.3.0
Developed via Visual Studio Code. 

Suggestions and issues should be created in the [issues](https://github.com/devEricA/theCplusplusHangar/issues) tab of this repo. 
