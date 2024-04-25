//simple arthmetic calculator (+,-,*,/)
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char sign;
    cout << "Enter two values: ";
    cin >>a>>b;
    cout << "Enter an operator";
    cin >> sign;
    switch (sign)
    {
    case '+' :
        cout << a + b;
        break;

         case '-' :
        cout << a - b;
        break;

         case '*' :
        cout << a * b;
        break;

         case '/' :
        cout << a / b;
        break;

        default:
        cout<<"invalid operator";
    }

    return 0;
}