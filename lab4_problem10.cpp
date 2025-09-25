#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x, y;
    cout << "Enter the x and y coordinates: " ;
    cin >> x >> y ;
    float distance ;
    distance = sqrt(x*x + y*y) ;
    if (distance <= 10){
        cout << "The point is inside of circle" ;
    }
    else {
        cout << "The point is not inside of circle" ;
    }
    return 0; 
}
