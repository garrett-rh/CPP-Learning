//Testing how conversions are handled

#include "../std_lib_facilities.h"

int main () {
    double d = 0;
    while (cin >> d) {  //loop over below statements
        int i = d;  //push a double into an int
        char c = i; //push into into char
        int i2 = c; //push char into int
        cout << "d==" << d  //print value of d
        << " i==" << i  //print value of i
        << " i2==" << i2    // print value of i2
        << " char(" << c << ")\n";  //print vlaue of c
    }
}