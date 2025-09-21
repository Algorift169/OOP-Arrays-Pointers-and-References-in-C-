#include <iostream>

using namespace std;

int main() {
    int *ptr;
    ptr = new int; 
    
    if(!ptr) {
        cout << "Allocation failed\n";
        return 1;
    }
    *ptr = 150;
    
    cout << "Integer stored at ptr: " << *ptr << "\n";
    delete ptr; // free memory
    
    return 0;
}
