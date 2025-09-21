#include <iostream>

using namespace std;

void neg_ptr(int *n) {
    *n = -*n;
}

void neg_ref(int &n) {
    n = -n;
}

int main() {
    int a = 10, b = -25;

    cout << "Original a: " << a << ", b: " << b << "\n";

    neg_ptr(&a);
    cout << "After neg_ptr, a: " << a << "\n";

    neg_ref(b);
    cout << "After neg_ref, b: " << b << "\n";

    return 0;
}
