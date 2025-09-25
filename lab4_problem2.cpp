//
// Created by Shohrux Pardayev on 25/09/25.
//
#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter your number: ";
    cin >> a;
    if (a<0) {
        cout << "Negative number!" << endl;
    }
    else {
        cout << "Positive number!" << endl;
    }
    if (a%2==0) {
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }
}