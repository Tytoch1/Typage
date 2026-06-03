#include <iostream>
#include <stack>
using namespace std;

int main() {
    int  n;
    int a[n]={};
    int top = -1;
    int value;
    cout<<"Enter value: ";
    cin>>value;     
    while (value)
    {
        // cout<<value%2<<endl;
        cout<<a[++top]=value%2;
        value = value /2;
    }
    for (int i=0; i<top; i++){
        cout<<a[top--];
    }
    
    return 0;
}