//The Standard Template Library (STL) in C++ is a collection of generic classes and functions that provide 
//common data structures and algorithms. It helps in writing efficient and reusable code.


//diff component used : cantainer :store collection of objects like vector, set,maps etc.

//vector

//Algorithms :sort(), find(), binary_search(), count(), reverse(), accumulate(), etc.
//
//Iterators : begin(), end(), rbegin(), rend(), etc.
#include <iostream>
#include <vector>
#include <algorithm> 
int main() {
    std::vector<int> vec; 


    vec.push_back(20);
    vec.push_back(40);
    vec.push_back(30);
    vec.push_back(10);

 sort(vec.begin(), vec.end()); 
    for (size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
  
    return 0;
}




