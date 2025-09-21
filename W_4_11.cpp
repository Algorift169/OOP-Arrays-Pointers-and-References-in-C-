#include <iostream>
#include <cstring>

using namespace std;

class contact {
    char name[30];
    char phone[15];
public:
    void set_info(char *n, char *p) {
        strcpy(name, n);
        strcpy(phone, p);
    }
    void display() {
        cout << "Name: " << name << "\n";
        cout << "Phone: " << phone << "\n";
    }
};

int main() {
    contact *ptr;
    ptr = new contact; // allocate object dynamically
    if(!ptr) {
        cout << "Allocation error\n";
        return 1;
    }

    ptr->set_info("Israfil", "01712345678");
    ptr->display();

    delete ptr; 
    
    return 0;
}
