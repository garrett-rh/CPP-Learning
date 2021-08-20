#include "../std_lib_facilities.h"

int main () {
    int square;
    int rice_grains=1;
    //How many squares until you get to 1,000, 1,000,000, and 1,000,000,000
    for (int square = 0; square < 64; ++square) {
        cout << "int square = " << square << "\n";
        cout << "int rice_grains = " << rice_grains << "\n";
        rice_grains *= 2;
    }
}