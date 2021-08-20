//Drill for Chapter 4

#include "../std_lib_facilities.h"

int main () {
    double double1, double2;
    vector <double> doubles;
    cout << "Enter two doubles or a '|' to exit: ";
    while ( cin >> double1 >> double2 ) {

        if ( double1 == double2 ) {
            cout << "The numbers are equal \n";
        }
        else {
            if ( abs(double1 - double2) <= .01 ) {
                cout << "The numbers are almost equal \n";
            }
            doubles.push_back(double1);
            doubles.push_back(double2);
            sort(doubles);
            cout << "Smaller value is: " << doubles[0] << "\n";
            cout << "Larger value is : " << doubles[1] << "\n";
            doubles.clear();
        }
    }
    
}