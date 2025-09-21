#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *ptr;
    ptr = new char[100];

    if(!ptr) {
        cout << "Allocation error\n";
        return 1;
    }

    strcpy(ptr, "This is a test");
    cout << ptr << "\n";

    delete [] ptr;
    
    return 0;
}
