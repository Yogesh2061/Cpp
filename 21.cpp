//square of first 5 natural number

#include<iostream>
using namespace std;
int square(int n){
    return n*n;
}
int main(){
    for(int i=1;i<=5;i++){
        cout<<square(i)<<" ";
    }
    return 0;
}

