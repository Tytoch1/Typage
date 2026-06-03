#include <iostream>
#include <stack>
using namespace std;

int main(){
	// stack<int> number;
	// number.push(10);
	// number.push(20);
	// number.push(30);
	// number.push(40);
	// if(number.empty()){
	// 	cout<<"stack's can't remove element."<<endl;
	// }else {
    //     cout<<"Top "<,number.top()<<endl;
    // }

    // stack<int> number1, number2;
    // number1.emplace(10);
    // number1.emplace(20);
    // number1.emplace(30);
    // number2.push(40);
    // number1.swap(number1);
    // cout<<"size"<<number1.size()<<endl;

//     stack<int> number;
//     int a[5] ={}, index=-1;
//     number.push(10);
//     a[++index] = 10;
//     for (int i = 0; i < 5; i++)
//     if (index == 4)
//     {
//         cout<<"stack's overflow can't add element."<<endl;  
//         break;
//     } else {
//     cout<<"Enter: ";
//     cin>>a[++index];
//     number.push(a[index]);
// }
// if (number.empty()) {
//     cout<<"stack's overflow can't add element."<<endl;  
// }else {

// }
stack<int> number;
int value;
for (int i = 0; i < 5; i++)
{
    cout<<"Enter: ";
    cin>>value;
}
if (number.empty)
{
    cout<<"stack's empty! can't add element."<<endl;
}


	return 0;
}