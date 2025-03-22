// A technique where function call itself 

#include <iostream>
using namespace std;

void reverseString(string &s, int start, int end) {
    if (start >= end)  // Base Case
        return;
    swap(s[start], s[end]);  // Swap characters
    reverseString(s, start + 1, end - 1);  // Recursive Call
}

int main() {
    string str = "hello";
    reverseString(str, 0, str.length() - 1);
    cout << "Reversed String: " << str;
    return 0;
}

