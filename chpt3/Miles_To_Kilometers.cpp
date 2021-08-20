//Take miles and converts them into kilometers

#include "../std_lib_facilities.h"

int main () {

    //Get the number of miles from the user and save into a variable
    cout << "Enter the number of miles: ";
    double distance;
    cin >> distance;

    //Convert the miles into kilometers and print it out
    cout << distance <<" miles is equal to " << distance * 1.609 << " kilometers.\n";

}