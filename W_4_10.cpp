#include <iostream>

using namespace std;

int main() {
    float *fptr;
    long *lptr;
    char *cptr;

    // allocate memory dynamically
    fptr = new float;
    lptr = new long;
    cptr = new char;

    if(!fptr || !lptr || !cptr) {
        cout << "Allocation error\n";
        return 1;
    }

    // assign values
    *fptr = 12.5;
    *lptr = 123456;
    *cptr = 'Z';

    // display values
    cout << "Float value: " << *fptr << "\n";
    cout << "Long value: " << *lptr << "\n";
    cout << "Char value: " << *cptr << "\n";

    // release memory
    delete fptr;
    delete lptr;
    delete cptr;

    return 0;
}
