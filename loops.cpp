#include <iostream>
using namespace std;

int main() {
    cout << "For loop:" << endl;
    for (int i = 1; i <= 5; i++)
        cout << i << " ";



    cout << "While loop:" << endl; //check condition then execute iteration ke liye !
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }

    cout << "Do-While loop:" << endl;  // in do while first they execute they check the condition  Used when the loop must run at least once
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);

    return 0;
}
