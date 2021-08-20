#include "../std_lib_facilities.h"

int square (int n) {
    
    int original_number = n;

    for ( int i = 0; i < original_number - 1; i++ ) {
        n+=original_number;
    }
    return n;
}

int main () {
    int squaree;
    cout << "Enter a number to be squared: ";
    cin >> squaree;
    cout << square(squaree) << "\n";

}