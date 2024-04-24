#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "enter the marks: ";
    cin >> marks;
    marks >= 32 ? cout << "passed" : cout << "failed";
    return 0;
}