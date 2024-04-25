//sum of digits in a given numbers
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0;
int n,lastdigit;
while(n>0){
    lastdigit=n%10;
   sum=sum+lastdigit;
    n=n/10;
}
cout<<"the sum is = "<<sum;

    return 0;
}