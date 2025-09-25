//
// Created by Shohrux Pardayev on 25/09/25.
//
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= "A" && ch <= "Z") {
        cout << ch << " is a capital letter" << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is not a capital letter" << endl;
    }
    else {
        cout << ch << " is not in the alphabet" << endl;
    }
    return 0;
}