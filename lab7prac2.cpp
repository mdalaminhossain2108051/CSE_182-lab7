#include <iostream>

void findSecondLargest(int arr[], int size) {
    if (size < 2) {
        std::cout << "Array size should be at least 2 to find the second largest element." << std::endl;
        return;
    }
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    std::cout << "The second largest element is: " << arr[1] << std::endl;
}

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    findSecondLargest(arr, size);

    return 0;
}



