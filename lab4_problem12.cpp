#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n; 
    cout << "Enter a three digit number: " ;
    cin >> n ;
    if (n >= 100 && n<= 999){
        if(n/100 == n%10){
            cout << n << " is a polyndrome" ;
        }
        else {
           cout << n << " is not a polyndrome" ;
        }
    }
    else {
        cout << "Enter a valid three digit number!" ;
    }
    return 0;
}
