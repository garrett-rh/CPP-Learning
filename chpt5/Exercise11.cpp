#include "../std_lib_facilities.h"

int main () {
    int n = 1;
    int m = 2;


    while (n < m) { // Loop finishes once m loops from a positive int to a negative int
        cout << n << '\n';
        int x = n+m;
        n = m;
        m = x;
    }
    cout << "Largest Fibonacci number in an int: " << n << '\n';
}
