//swapping values of two vaiables
#include<iostream>
using namespace std;
int main(){
int a,b,temp;
cout<<"enter the value of a\n";

cin>>a;

cout<<"enter the value of a\n";
cin>>b;

temp=b;
b=a;
a=temp;
cout<<"a=" <<a <<endl;
cout<<"b=" <<b <<endl;


    return 0;
}