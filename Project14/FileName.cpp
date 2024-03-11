#include <iostream>

using namespace std;

int main() {
    const int size = 10;
    int multiplicationTable[size][size];

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            multiplicationTable[i][j] = (i + 1) * (j + 1);
        }
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << multiplicationTable[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}