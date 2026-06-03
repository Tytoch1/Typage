#include <iostream>
using namespace std;
void inputElements(int* &arr, int &n) {
    if (arr != nullptr) {
        delete[] arr;
        arr = nullptr;
    }
    cout << "Enter the Number of Elements (n): ";
    cin >> n;
    arr = new int[n];
    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element [" << i + 1 << "]: ";
        cin >> arr[i];
    }
    cout << "----------------------------------\n\n";
}
void printArray(int arr[], int n) {
    cout << "Current Array: [ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]\n";
}
void bubbleSortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void bubbleSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int* arr = nullptr; 
    int n = 0;         
    int choice;
    cout << "===== Welcome to the Sorting Program =====\n";
    inputElements(arr, n);
    do {
        cout << "================ MENU ================\n";
        cout << "1. Ascending order (Bubble Sort)\n";
        cout << "2. Descending order (Bubble Sort)\n";
        cout << "3. Input new value (Reset array)\n";
        cout << "4. Exit\n";
        cout << "======================================\n";
        cout << "Choose an option (1-4): ";
        cin >> choice;
        switch (choice) {
            case 1:
                if (n == 0) {
                    cout << "Array is empty. Please input data first.\n\n";
                } else {
                    bubbleSortAscending(arr, n);
                    cout << "\nSorted in Ascending Order:\n";
                    printArray(arr, n);
                    cout << endl;
                }
                break;
            case 2:
                if (n == 0) {
                    cout << "Array is empty. Please input data first.\n\n";
                } else {
                    bubbleSortDescending(arr, n);
                    cout << "\nSorted in Descending Order:\n";
                    printArray(arr, n);
                    cout << endl;
                }
                break;
            case 3:
                cout << "\n--- Resetting Array Data ---\n";
                inputElements(arr, n);
                break;
            case 4:
                cout << "\nExiting program. Goodbye!\n";
                break;
            default:
                cout << "\n[Error] Invalid option! Please choose a valid number (1-4).\n\n";
                break;
        }
    } while (choice != 4);
    if (arr != nullptr) {
        delete[] arr;
    }
    return 0;
}