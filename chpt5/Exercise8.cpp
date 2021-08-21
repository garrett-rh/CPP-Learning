#include "../std_lib_facilities.h"

int main () {
    vector<int> whole_numbers;
    int total_integers;
    
    cout << "Enter the number of values you want to sum: ";
    cin >> total_integers;
    if (!total_integers) error("Not an integer!\n");

    cout << "Enter integers seperated by a space (Ctrl+D to stop): ";

    int temp;
    while (cin >> temp) {
        if (!temp) error("Integers only!\n");
        whole_numbers.push_back(temp);
    }

    if (total_integers - 1 != whole_numbers.size()) cout << "Too many numbers entered...attempting to proceed\n";

    int sum = 0;
    for (int i=0; i < total_integers; ++i ) {
        sum += whole_numbers[i];
    }

    cout << "Sum of the first " << total_integers << " numbers: " << sum << '\n';
}
