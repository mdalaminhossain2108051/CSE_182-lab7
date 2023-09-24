#include <iostream>

int main() {
    int size, element, position;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    if (size <= 0) {
        std::cout << "Invalid array size. Please enter a positive integer." << std::endl;
        return 1;
    }

    int arr[size + 1];

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the element to insert: ";
    std::cin >> element;

    std::cout << "Enter the position to insert (0-based index): ";
    std::cin >> position;
    if (position < 0 || position > size) {
        std::cout << "Invalid position. Please enter a valid position between 0 and " << size << "." << std::endl;
        return 1;
    }
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;

    size++;

    std::cout << "Updated array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
