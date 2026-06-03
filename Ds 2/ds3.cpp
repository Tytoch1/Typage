#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int valueToDelete;
    int foundIndex;
    while (true) {
        std::cout << "Current array: ";
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\nEnter value to delete: ";
        std::cin >> valueToDelete;

        foundIndex = -1;
        for (int i = 0; i < size; i++) {
            if (arr[i] == valueToDelete) {
                foundIndex = i;
                break; 
            }
        }
        if (foundIndex != -1) {
            break; 
        } else {
            std::cout << "Value not found in array. Please try again.\n";
        }
    }
    for (int i = foundIndex; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    std::cout << "Final array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

