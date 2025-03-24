#include <iostream>
using namespace std;

int main() {
    int num = 10;      // Normal variable
    int *ptr = &num;   // Pointer jo num ka address store karega

    // Ek array lete hain
    int arr[] = {10, 20, 30};
    int *p = arr;  // Array ka first element ka address store karega

    cout << "arr ki value: " << *p << endl;
    cout << *(p + 1) << endl; 
    cout << *(p + 2) << endl; 

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer ptr is storing address: " << ptr << endl;
    cout << "Value at pointer ptr: " << *ptr << endl; // Dereferencing

    return 0;
}

