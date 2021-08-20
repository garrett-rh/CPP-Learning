//Unsafe conversions and narrowing

#include "../std_lib_facilities.h"

int main () {

    //First, the unsafe conversion
    int a = 20000;
    char c = a;

    //What happens to char c, use variable b to check it out
    int b = c;
    if (a != b) {
        cout << "oops!: " << a << "!=" << b << "\n";
    }
    else {
        cout << "Wow! We have large characters\n";
    }
}