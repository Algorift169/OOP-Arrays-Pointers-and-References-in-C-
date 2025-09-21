#include <iostream>

using namespace std;

class pairnum {
    
    int x,y;
    
public:
    void set_vals(int a,int b) { x=a; y=b; }
    int product() { return x*y; }
};

int main() {
    pairnum *ptr;
    int k;
    ptr = new pairnum[10]; 
    if(!ptr) {
        cout << "Allocation error\n";
        return 1;
    }

    for(k=0;k<10;k++)
        ptr[k].set_vals(k+1,k+2); 

    for(k=0;k<10;k++) {
        cout << "Product [" << k << "] is: " << ptr[k].product() << "\n";
    }

    delete [] ptr;
    
    return 0;
}
