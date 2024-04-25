//reverse the numbers
#include<iostream>
using namespace std;
int main(){
int n,lastdigit;
int rev=0;
cin>>n;

while(n>0){
    lastdigit=n%10;
    rev=rev*10+lastdigit;
    n=n/10;
}
cout<<"reversed no = "<< rev;

    return 0;
}