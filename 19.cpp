//Wap to print all odd numbers between two numbers.
#include <iostream>
using namespace std;
 void odds (int from,int to){
     for (int i=from;i<=to;i++){
        if (i%2!=0){
            cout<<i;
        }
        cout<<endl;
    }
    
 }
 
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
     odds (a,b);

return 0;
}