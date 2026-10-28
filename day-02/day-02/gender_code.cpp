#include<iostream>
#include<string>

using namespace std;
int main()
{
    char gender_code;
    cout << "Enter gender code: " << endl;
    cin >> gender_code;
    string description;

    switch (gender_code)
    {
        case 'm':
        description = "male";
        break;

        case 'f':
        description = "Female";

        break;

        default:
        cout << "invalid gender input " << endl;
    }
    cout << description << endl;

    return 0;


    /*if ((gender_code == 'F') || (gender_code=='f'))
    {
        cout << "Gender is female " << endl;
    }
    else if((gender_code == 'M') || (gender_code=='m'))
    {
        cout << "Gender is male: " << endl;
    }
    else
    {
        cout << "Invalid gender input " << endl;
    }
    */


}
