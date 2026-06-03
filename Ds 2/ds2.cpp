#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int index;
    while (true) {
        std::cout << "Current array: ";
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }      
        std::cout << "\nEnter index to delete (0 to " << size - 1 << "): ";
        std::cin >> index;
        if (index >= 0 && index < size) {
            break; 
        } else {
            std::cout << "Invalid index! Please try again.\n";
        }
    }
    for (int i = index; i < size - 1; i++) {
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

