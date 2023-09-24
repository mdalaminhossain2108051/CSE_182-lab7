#include <iostream>
#include <map>
#include <vector>

int main() {
    std::map<int, int> frequencyMap;
    std::vector<int> arr = {1, 2, 3, 2, 1, 3, 4, 5, 4};
    for (int num : arr) {
        if (frequencyMap.find(num) != frequencyMap.end()) {
            frequencyMap[num]++;
        } else {
            frequencyMap[num] = 1;
        }
    }
    std::cout << "Element frequencies:\n";
    for (const auto& pair : frequencyMap) {
        std::cout << pair.first << ": " << pair.second << " times\n";
    }

    return 0;
}




