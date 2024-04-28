// wap to print all the prime numbers present between a and b.
#include <iostream>
using namespace std;

bool isPrime(int n){
    for (int i=2;i<(n-1);i++){
        if (n%i==0){
            return false;
        }
    }
            return true;

}

int main(){
    int a,b;
   cin>>a;
   cin>>b;
   for(int i=a;i<=b;i++){
       if (isPrime(i)){
           cout<<i<<endl;
       }
   }
    

return 0;
}