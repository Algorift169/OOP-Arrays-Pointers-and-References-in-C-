#include <iostream>

using namespace std;

class myclass {
    int a,b;
    
public:
    
    myclass(int n,int m) {
        this->a = n; this->b = m;
    }
    int add() {
        return this->a + this->b;
    }
    void show();
};

void myclass::show() {
    int t;
    t = this->add(); // call member function using this pointer
    cout << t << "\n";
}

int main() {
    myclass obj(10,14);
    obj.show();
    
    return 0;
}
