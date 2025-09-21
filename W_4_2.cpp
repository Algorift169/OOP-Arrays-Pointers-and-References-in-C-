#include <iostream>
using namespace std;

class cell {
    int v;
    
public:
    
    cell(int n) { v=n; }
    int pull() { return v; }
};

int main() {
    cell mat[4][2]={ 11,12,
                     13,14,
                     15,16,
                     17,18 };
    
    int r;
    
    for(r=0;r<4;r++) {
        cout<<mat[r][0].pull()<<' ';
        cout<<mat[r][1].pull()<<"\n";
    }
    cout<<"\n";
    
    return 0;
}
