//Ask for name & age and prints to screen

#include "../std_lib_facilities.h"

int main () {
    //Prompt for name & age
    cout << "What is your name and age?\n";

    //Initialize name & age
    string name;
    double age ;

    //Push user input into name & age variables
    cin >> name >> age;

    //Print out name & age (in years/months)
    cout << "Hello, " << name << " " << "(age " << age * 12 << " months)\n";
}