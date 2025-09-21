#include <iostream>

using namespace std;

class SafeArray {
    int data[2][3];

public:

    void set(int row, int col, int value) {
        if(row >= 0 && row < 2 && col >= 0 && col < 3)
            data[row][col] = value;
        else
            cout << "Index out of bounds\n";
    }

    int get(int row, int col) {
        if(row >= 0 && row < 2 && col >= 0 && col < 3)
            return data[row][col];
        else {
            cout << "Index out of bounds\n";
            return -1;
        }
    }
};

int main() {
    SafeArray arr;

    // Initialize the array
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            arr.set(i, j, i*3 + j + 1);

    // Display the array
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++)
            cout << arr.get(i, j) << " ";
        cout << "\n";
    }

    return 0;
}
