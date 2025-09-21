#include <iostream>

using namespace std;

class box {
    int val;
public:
    void put(int n) {
        val = n;
    }
    int take() {
        return val;
    }
};

int main() {
    box arr[4];
    int k;
    for(k=0;k<4;k++)
        arr[k].put(k);
    for(k=0;k<4;k++)
        cout<<arr[k].take();
    cout<<"\n";
    return 0;
}
