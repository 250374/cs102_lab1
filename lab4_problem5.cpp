//
// Created by Shohrux Pardayev on 25/09/25.
//
#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter the year: ";
    cin >> a;
    if (a%400 == 0) {
        cout << a << " is a leap yer" << endl;
    }
    else {
        cout << a << " is not a leap yer" << endl;
    }
}