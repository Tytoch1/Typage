#include <iostream>
using namespace std;
int main(){
    int Value[5];
    for( int i = 0 ; i < 5 ; i++){
        a:
        cout<<"A["<<i+1<<"]:";
        cin>>Value[i];
    
    for( int j = 0 ; j < i ; j++){
        if(Value[i] == Value[j]){
            goto a;
        }
    }
}    
cout<<"Array:";
for( int i = 0 ; i < 5 ; i++){
    cout<<Value[i]<<" ";
}
    return 0;
}
