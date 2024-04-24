//check if the number is divisible by 3 or by 5

#include<iostream>
using namespace std;
int main(){
    int num;
cout<<"Enter the num: ";
cin>>num;
if((num%3==0) || (num%5==0)){
    cout<<"divisible";
}
else {
    cout<<"its not divisible by any of them";
}

    return 0;
}