#include <iostream>
using namespace std;

// Encapsulation (Wrapping data & methods inside a class)
class Animal {
protected:  
    string name;  // Data is hidden (Abstraction)

public:
    void setName(string n) { name = n; }  
    string getName() { return name; }  
};

// Inheritance (Dog inherits from Animal)
class Dog : public Animal {
public:
    void speak() { cout << name << " says Woof!" << endl; }  // Polymorphism (Different behavior)
};

int main() {
    Dog d;
    d.setName("Buddy");  // Using Encapsulation
    cout << "Animal Name: " << d.getName() << endl;  // Abstraction
    d.speak();  // Polymorphism (Method Overriding)
    return 0;
}

