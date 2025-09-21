#include <iostream>

using namespace std;

class pairnum {
    int x,y;

public:

    pairnum(int p,int q) { x=p; y=q; }
    int get_x() { return x; }
    int get_y() { return y; }
};

int main() {
    pairnum tab[4][2]={
        pairnum(21,22), pairnum(23,24),
        pairnum(25,26), pairnum(27,28),
        pairnum(29,30), pairnum(31,32),
        pairnum(33,34), pairnum(35,36)
    };

    int k;

    for(k=0;k<4;k++) {
        cout<<tab[k][0].get_x()<<' ';
        cout<<tab[k][0].get_y()<<"\n";
        cout<<tab[k][1].get_x()<<' ';
        cout<<tab[k][1].get_y()<<"\n";
    }
    cout<<"\n";

    return 0;
}
