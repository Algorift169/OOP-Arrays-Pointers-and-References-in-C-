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
    ptr = new pairnum;
    
    if(!ptr) {
        cout << "Allocation error\n";
        return 1;
    }
    
    ptr->set_vals(6,7);
    cout << "Product is: " << ptr->product() << "\n";
    delete ptr; 
    
    return 0;
}
