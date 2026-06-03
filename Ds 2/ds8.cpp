#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "\n\nRemoved Element: " << s.top() << endl;
    s.pop();
    int x;
    cout << "Input 3 elements\n";
    for (int i = 1; i <= 3; i++) {
        cout << "Enter element " << i << ": ";
        cin >> x;
        s.push(x);
    }
    cout << "\n Element Top: " << s.top() << endl;
    cout << "Size of Stack: " << s.size() << endl;
    cout << "\nAll Elements in Stack:\n";
    stack<int> temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << "\n\nRemoving 4 elements:\n";
    for (int i = 1; i <= 4; i++) {
        if (!s.empty()) {
            cout << "Removed: " << s.top() << endl;
            s.pop();
        } else {
            cout << "Stack is empty, cannot remove more elements.\n";
            break;
        }
    }
    cout << "\nAfter removals: " << s.top() << endl;
    return 0;
}
