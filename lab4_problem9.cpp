#include <iostream>
using namespace std;
int main() {
    int speed;
    cout << "Enter the speed: " ;
    cin >> speed ;
    if (speed >= 0){
        if (speed <= 20){
            cout << "Too slow" ;
        }
        else if (speed >= 80){
            cout << "Too fast" ;
        }
        else {
            cout << "Just right" ;
        }
    }
    else {
        cout << "Speed can't be less than zero!" ;
    }
    return 0; 
}
