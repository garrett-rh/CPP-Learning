//Drill - Will output success if the error has been fixed
#include "../std_lib_facilities.h"

int main () {
    try {
        //Start of my code
        //End of my code
        return 0;

    }
    catch (exception& e) { //pass by reference (ignore meaning until later in book)
        cerr << "error: " << e.what() << '\n';
        return 1;
    }
    catch (...) {
        cerr << "Oops: unknown exception!\n";
        return 2;
    }
}