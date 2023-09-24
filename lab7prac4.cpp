#include <iostream>
#include <set>

int main() {
    int arr[] = {5, 2, 7, 2, 8, 5, 1, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::set<int> uniqueElements;
    for (int i = 0; i < n; i++) {
        uniqueElements.insert(arr[i]);
    }
    std::cout << "Unique elements in the array are: ";
    for (int uniqueElement : uniqueElements) {
        std::cout << uniqueElement << " ";
    }
    std::cout << std::endl;

    return 0;
}


