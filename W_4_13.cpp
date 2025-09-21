#include <iostream>

using namespace std;

int main() {
    int *arr;
    arr = new int[5]; 
    if(!arr) {
        cout << "Allocation error\n";
        return 1;
    }

    int k;
    for(k=0;k<5;k++)
        arr[k] = k+1;

    for(k=0;k<5;k++) {
        cout << "Here is integer at arr[" << k << "]: " << arr[k] << "\n";
    }

    delete [] arr; 
    
    return 0;
}
