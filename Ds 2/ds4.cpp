#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30}; 
    int currentSize = 3; 
    int maxSize = 10;
    int newValue;
    while (currentSize < maxSize) {
        std::cout << "Current array: ";
        for (int i = 0; i < currentSize; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\nChoose value to add: ";
        std::cin >> newValue;
        arr[currentSize] = newValue;
        currentSize++;
        std::cout << "Successfully added! ";
    }
    std::cout << "\nArray is now full (10 elements). Exiting program..." << std::endl;

    return 0;
}

