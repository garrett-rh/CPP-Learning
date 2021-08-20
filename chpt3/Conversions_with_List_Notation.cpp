//Using the list notation to convert types - helps avoid unsafe conversions.

int main () {
    double x {2.7};
    //int y {x}; // will error out about narrowing
    int a {1000};
    //char b {a}; // will error about narrowing
}