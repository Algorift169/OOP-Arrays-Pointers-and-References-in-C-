#include <iostream>

using namespace std;

class pairnum {
    int x,y;
public:
    pairnum(int a,int b) { x=a; y=b; }
    int product() { return x*y; }
};

int main() {
    pairnum *ptr;
    ptr = new pairnum(7,6); // allocate object with initialization
    if(!ptr) {
        cout << "Allocation error\n";
        return 1;
    }
    cout << "Product is: " << ptr->product() << "\n";
    delete ptr; 
    
    return 0;
}
