#include <fstream>
#include <iostream>
#include <cstdio> // for remove()
using namespace std;

int main() {
    const char* filename = "example.txt"; // ?? Use const char* instead of string

    // **1. Write to File**
    ofstream writeFile(filename); 
    writeFile << "Hello, this is a file handling example.";
    writeFile.close();
    cout << "Data written to file.\n";

    // **2. Read from File**
    ifstream readFile(filename);
    string content;
    getline(readFile, content);
    readFile.close();
    cout << "Read from file: " << content << endl;

    // **3. Read & Write Both**
    fstream readWriteFile(filename, ios::in | ios::out | ios::app);
    readWriteFile << "\nAppending new line!";
    readWriteFile.seekg(0); // Move pointer to start
    while (getline(readWriteFile, content)) {
        cout << content << endl;
    }
    readWriteFile.close();

    // **4. Delete the File**
    if (remove(filename) == 0)
        cout << "File deleted successfully.\n";
    else
        cout << "Error deleting file.\n";

    return 0;
}

