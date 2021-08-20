//Prompt user for three integers and sorts them from least to greatest

#include "../std_lib_facilities.h"

int main () {
    //Get the three integers
    cout << "Enter three integers, seperated by spaces: ";
    int i1, i2, i3;
    int smallest = 0, middle = 0, largest = 0;
    cin >> i1 >> i2 >> i3;
    
    //Compare the first to the second and third
    if ( i1 <= i2 && i1 <= i3) {
        smallest = i1;
        if ( i2 <= i3 ) {
            middle = i2;
            largest = i3;
        } else {
            middle = i2; 
            largest = i3;
        }
    } else if ( i2 <= i1 && i2 <= i3 ) {
        smallest = i2;
        if ( i1 <= i3 ) {
            middle = i1;
            largest = i3;
        } else {
            middle = i3;
            largest = i1;
        }
    } else {
        smallest = i3;
        if ( i1 <= i2 ) {
            middle = i1;
            largest = i2;
        }
        else {
            middle = i2;
            largest = i1;
        }
    }
    cout << smallest << ", " << middle << ", " << largest << "\n";
}