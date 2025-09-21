#include <iostream>
#include <cmath>

using namespace std;

void round_num(double &num) {
    double frac, val;
    // decompose num into whole and fractional parts
    frac = modf(num, &val);
    if(frac < 0.5)
        num = val;
    else
        num = val + 1.0;
}

int main() {
    double x = 100.4;
    cout << x << " rounded is ";
    round_num(x);
    cout << x << "\n";

    x = 10.9;
    cout << x << " rounded is ";
    round_num(x);
    cout << x << "\n";

    x = 25.5; // additional example
    cout << x << " rounded is ";
    round_num(x);
    cout << x << "\n";

    return 0;
}
