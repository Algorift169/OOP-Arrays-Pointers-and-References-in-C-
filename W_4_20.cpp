/*
Problems in the original program:
1. Function triple() expects a reference (double &num).
2. In main(), triple(&d) passes the address of d, which is a pointer.
3. References should be passed by variable directly, not by using &.
4. Using &d causes a type mismatch and compilation error.
*/

#include <iostream>

using namespace std;

void triple(double &num) {
    num = 3 * num;
}

int main() {
    double d = 7.0;
    triple(d);
    cout << d << "\n";

    return 0;
}
