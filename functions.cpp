/*function is a block of reusable code that performs a specific task. 
It helps in code organization, reusability, and modular programming.*/

#include <iostream>
#include <cmath> 
using namespace std;

// User-defined function in c++
int square(int num) {
    return num * num;
}

int main() {
    int result = square(5); 
    cout << "Square of 5: " << result << endl;
    
    //libray function in c++
    double num = 25.0;

    cout << "Square root of 25: " << sqrt(num) << endl;
    cout << "Power of 2^3: " << pow(2, 3) << endl;
    cout << "Absolute value of -10: " << abs(-10) << endl;

    return 0;
    
    
    
}

