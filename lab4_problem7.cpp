//
// Created by Shohrux Pardayev on 25/09/25.
//
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the values of triangle anles: ";
    cin >> a >> b >> c;
    if ( a + b + c == 180) {
        cout << "Triangle is valid" << endl;
    }
    else {
        cout << "Triangle is not valid" << endl;
    }
}