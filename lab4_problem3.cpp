//
// Created by Shohrux Pardayev on 25/09/25.
//
#include <iostream>
using namespace std;
int main() {
    int x, y, z;
    int biggest;
    cout << "Enter 3 numbers: ";
    cin >> x >> y >> z;
    if (x >= y && x >= z) {
        biggest = x;
    }
    else if (y >= x && y >= z) {
        biggest = y;
    }
    else if (z >= x && z >= y) {
        biggest = z;
    }
    cout << biggest << endl;
}