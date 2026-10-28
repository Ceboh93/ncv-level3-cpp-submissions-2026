#include <iostream>
#include <string>

using namespace std;
int main()
{
    int num1;
    int num2;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;

    if((num1 % 2 == 0) && (num2 % 2 == 0) )
    {
        cout<<"input is an even number"<< endl;

         }
    else
    {
        cout<<"input contains odd numbers"<< endl;
    }
}
