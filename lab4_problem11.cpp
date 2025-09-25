#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float w1, p1, w2, p2;
    cout << "Enter the weight and price for the 1st package of rice: " ;
    cin >> w1 >> p1 ;
    cout << "Enter the weight and price for the 2nd package of rice: " ;
    cin >> w2 >> p2;
    float ratio1, ratio2;
    ratio1 = w1/p1;
    ratio2 = w2/p2;
    if (ratio1 > ratio2){
        cout << "Package 1 has better price";
    }
    else if (ratio2 > ratio1){
        cout << "Package 2 has better price";
    }
    else{
        cout << "Both packages have the same price";
    }
    return 0;
}
