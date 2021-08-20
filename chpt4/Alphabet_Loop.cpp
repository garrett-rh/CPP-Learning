//Looping through the alphabet

#include "../std_lib_facilities.h"

int main () {
    char letter = 'a';

    while ( int{letter} < 123 ) {
        cout << letter << "\t" << int{letter} << "\n";
        ++letter;
    }
}