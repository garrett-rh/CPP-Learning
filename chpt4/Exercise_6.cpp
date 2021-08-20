//Exercise 6

#include "../std_lib_facilities.h"

int main () {
    vector <string> string_numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector <int> int_numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    //int temp;
    string temp;

    cout << "Enter a number zero-nine: ";
    cin >> temp;
    //Part 1
    //cout << string_numbers[temp] << "\n";
    if ( temp == string_numbers[0] ) {
        cout << int_numbers[0];
    } else if ( temp == string_numbers[1] ) {
        cout << int_numbers[1];
    } else if ( temp == string_numbers[2] ) {
        cout << int_numbers[2];
    } else if ( temp == string_numbers[3] ) {
        cout << int_numbers[3];
    } else if ( temp == string_numbers[4] ) {
        cout << int_numbers[4];
    } else if ( temp == string_numbers[5] ) {
        cout << int_numbers[5];
    } else if ( temp == string_numbers[6] ) {
        cout << int_numbers[6];
    } else if ( temp == string_numbers[7] ) {
        cout << int_numbers[7];
    } else if ( temp == string_numbers[8] ) {
        cout << int_numbers[8];
    } else if ( temp == string_numbers[9] ) {
        cout << int_numbers[9];
    } else { cout << "IDK what you want from me";}





    cout << "\n";
    
}