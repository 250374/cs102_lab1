//
// Created by Shohrux Pardayev on 25/09/25.
//
#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "Enter the numbers: " ;
    cin >> a >> b >> c;
    int d;
    d = b*b - 4*a*c;
    float x1, x2;
    x1 = (-b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);
    if (d < 0 || a == 0) {
        cout << "x1 and x2 do not exist" << endl;
    }
    else if (d == 0) {
        cout << "x1 = x2 = " << x1 << endl;
    }
    else {
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    }
}