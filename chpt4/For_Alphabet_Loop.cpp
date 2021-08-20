//Looping through the alphabet

#include "../std_lib_facilities.h"

int main () {

    for ( char letter = 'a'; int{letter} < 123; ++letter) {
                cout << letter << "\t" << int{letter} << "\n";
    }
}