#include <iostream>
#include <unordered_map>
#include <vector>

void findDuplicates(const std::vector<int>& arr) {
    std::unordered_map<int, int> freq; // Element -> Count

    // Count frequency of each element
    for (int num : arr) {
        freq[num]++;
    }

    // Print elements having count > 1 (duplicates)
    std::cout << "Duplicates: ";
    for (const auto& pair : freq) {
        if (pair.second > 1) {
            std::cout << pair.first << " ";
        }
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 2, 3, 6, 7, 3}; // Example array
    findDuplicates(arr);
    return 0;
}

