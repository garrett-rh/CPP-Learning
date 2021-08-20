//Quadratic Equation solver
#include "../std_lib_facilities.h"

int main() {
    int a,b,c;
    cout << "Enter the values of a, b, and c separated by spaces: ";
    cin >> a >> b >> c;
    int under_sqrt = sqrt(pow(b, 2) - (4*a*c));
    if (under_sqrt < 0) {
        error("No real roots");
    }
    int positive_numerator = -b + under_sqrt;
    int negative_numerator = -b - under_sqrt;
    
    int denominator = 2 * a;

    int x1 = positive_numerator/denominator;
    int x2 = negative_numerator/denominator;
    cout << "The roots are: " << x1 << " and " << x2 << '\n';
    
}