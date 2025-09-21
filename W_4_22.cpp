/*
Problems in the original program:
1. The show() function takes its parameter by value (strtype x).
2. Passing by value creates a copy of the object, which triggers the destructor
   when the function ends. This can lead to double deletion or unnecessary overhead.
3. Dynamically allocated memory inside strtype is copied unnecessarily.
4. Fix: pass the object by reference (preferably const) to avoid copying.
*/

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class strtype {
    char *p;
public:

    strtype(char *s);
    ~strtype() { delete [] p; }
    char* get() { return p; }
};

strtype::strtype(char *s) {
    int l = strlen(s) + 1;
    p = new char[l];
    if(!p) {
        cout << "Allocation error\n";
        exit(1);
    }
    strcpy(p, s);
}

// Pass by reference to avoid copying
void show(const strtype &x) {
    char *s = x.get();
    cout << s << "\n";
}

int main() {
    strtype a("Hello"), b("There");
    show(a);
    show(b);

    return 0;
}
