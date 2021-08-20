#include "../std_lib_facilities.h"

double ctok(double c) {
    if (c < -273.15) {error("Temperature is below absolute zero!\n");}
    double k = c + 273.15;
    return k;
}

int main () {
    double c = 0;
    cin >> c;
    // if (c < -273.15) {error("Temperature is below absolute zero!\n");}
    double k = ctok(c);
    cout << k << '\n';
}