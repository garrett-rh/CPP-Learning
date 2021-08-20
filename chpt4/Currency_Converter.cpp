//Converts USD into yen, kroner, and pounds

#include "../std_lib_facilities.h"
int main () {
    
    constexpr double pound = .72;
    constexpr double kroner = 8.93;
    constexpr double yen = 110.26;
    double amount = 0.0;
    char currency = '0';

    cout << "Enter an amount followed by the currency (p, k, or y):\n";
    cin >> amount >> currency;
    cout << amount << " usd == ";
    if (currency == 'p') {
        cout << amount * pound << " pounds\n";
    }
    else if ( currency == 'k') {
        cout << amount * kroner << " kroner\n";
    }
    else if ( currency == 'y' ) {
        cout << amount * yen << " yen\n";
    }
    else {
        cout << "Unknown\n";
        cout << "I cannot convert the currency " << currency << "\n";
    }
}
