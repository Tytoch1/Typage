 #include <iostream>
using namespace std;

const int MAX = 5;

bool isDuplicate(int arr[], int n, int value, int ignoreIndex = -1) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value && i != ignoreIndex) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[MAX];
    int n = 0;
    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Add\n2. Insert\n3. Update\n4. Delete\n5. Display\n6. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch (choice) {

        case 1: { 
            if (n == MAX) {
                cout << "Array is full!\n";
                break;
            }

            int value;
            do {
                cout << "Enter value: ";
                cin >> value;
                if (isDuplicate(arr, n, value)) {
                    cout << "Duplicate! Try again.\n";
                }
            } while (isDuplicate(arr, n, value));

            arr[n++] = value;
            break;
        }

        case 2: { 
            if (n == MAX) {
                cout << "Array is full!\n";
                break;
            }

            int index;
            cout << "Enter index (0 to " << n << "): ";
            cin >> index;

            if (index < 0 || index > n) {
                cout << "Invalid index!\n";
                break;
            }

            int value;
            do {
                cout << "Enter value: ";
                cin >> value;
                if (isDuplicate(arr, n, value)) {
                    cout << "Duplicate! Try again.\n";
                }
            } while (isDuplicate(arr, n, value));

            for (int i = n; i > index; i--) {
                arr[i] = arr[i - 1];
            }

            arr[index] = value;
            n++;
            break;
        }

        case 3: { 
            if (n == 0) {
                cout << "Array is empty!\n";
                break;
            }

            int option;
            cout << "Update by: 1.Index 2.Value : ";
            cin >> option;

            int index = -1;

            if (option == 1) {
                cout << "Enter index: ";
                cin >> index;
                if (index < 0 || index >= n) {
                    cout << "Invalid index!\n";
                    break;
                }
            } else if (option == 2) {
                int value;
                cout << "Enter value to find: ";
                cin >> value;

                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        index = i;
                        break;
                    }
                }

                if (index == -1) {
                    cout << "Value not found!\n";
                    break;
                }
            } else {
                cout << "Invalid option!\n";
                break;
            }

            int newValue;
            do {
                cout << "Enter new value: ";
                cin >> newValue;
                if (isDuplicate(arr, n, newValue, index)) {
                    cout << "Duplicate! Try again.\n";
                }
            } while (isDuplicate(arr, n, newValue, index));

            arr[index] = newValue;
            break;
        }

        case 4: { 
            if (n == 0) {
                cout << "Array is empty!\n";
                break;
            }

            int option;
            cout << "Delete by: 1.Index  2.Value : ";
            cin >> option;

            int index = -1;

            if (option == 1) {
                cout << "Enter index: ";
                cin >> index;
                if (index < 0 || index >= n) {
                    cout << "Invalid index!\n";
                    break;
                }
            } else if (option == 2) {
                int value;
                cout << "Enter value to delete: ";
                cin >> value;


                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                     index = i;
                        break;
                    }
                }

                if (index == -1) {
                    cout << "Value not found!\n";
                    break;
                }
            } else {
                cout << "Invalid option!\n";
                break;
            }

            for (int i = index; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }

            n--;
            break;
        }

        case 5: {
            if (n == 0) {
                cout << "Array is empty!\n";
            } else {
                cout << "Array: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            break;
        }

        case 6:
            cout << "Exit program.\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 6);

    return 0;
}

