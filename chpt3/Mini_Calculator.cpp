//Mini calculator

#include "../std_lib_facilities.h"

int main () {
    //Define variables
    char operation;
    double d1, d2;

    //Get user input & place in variables
    cout << "Write an operatin (+,-,*,/) and the two numbers you wish to do that operation on : ";
    cin >> operation >> d1 >> d2;

    if ( operation == '+' ) {
        cout << d1 + d2;
    } else if ( operation == '-') {
        cout << d1 - d2;
    } else if ( operation == '*' ) {
        cout << d1 * d2;
    } else if ( operation == '/' ) {
        cout << d1 / d2;
    }
    cout << "\n";
}