#include <iostream>
using namespace std;
int n=5, a[n]= {3, 8, 2, 4};
int current, index;

for(int i=0; i <n-1; i++){
    current = a[i];
    index = i;
    for (int j=0; j<n; j++){
        if(current > a[j]){
            current = a[j]
        }
    }
}