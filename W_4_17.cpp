#include <iostream>

using namespace std;

void swapargs(int *x, int *y);

int main() {
    int a,b;
    a = 10;
    b = 19;

    cout << "a: " << a << ", ";
    cout << "b: " << b << "\n";

    swapargs(&a, &b);

    cout << "After swapping: ";
    cout << "a: " << a << ", ";
    cout << "b: " << b << "\n";

    return 0;
}

void swapargs(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
