#include <iostream>
#include <unordered_map>

int main() {
    int arr[] = {5, 2, 7, 2, 8, 5, 1, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::unordered_map<int, int> frequencyMap;
    for (int i = 0; i < n; i++) {
        frequencyMap[arr[i]]++;
    }

    int totalDuplicates = 0;
    for (const auto& pair : frequencyMap) {
        if (pair.second > 1) {
            totalDuplicates += pair.second - 1;
        }
    }

    std::cout << "Total number of duplicate elements in the array: " << totalDuplicates << std::endl;

    return 0;
}




