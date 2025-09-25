//
// Created by Shohrux Pardayev on 25/09/25.
//
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    if (a%b == 0 && b!= 0) {
        cout << a <<" is divisible by " << b << endl;
    }
    else {
        cout << a <<" is not divisible by " << b << endl;
    }
}