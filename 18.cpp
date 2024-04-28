//write a function to print area and circumference of circle.
#include <iostream>
using namespace std;
 double area(int r){
    double area= 3.14*r*r;
     return area;
 }
 double circ (int r){
     double circ=2*3.14*r;
     return circ;
 }
 
int main(){
    int r;
    cin>>r;
 cout<<"The area of the circle is: "<<area(r)<<endl;
  cout<<"The circumference of the circle is: "<<circ(r);


return 0;
}