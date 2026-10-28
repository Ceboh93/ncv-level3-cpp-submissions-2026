#include <iostream>
#include <string>


using namespace std;
int main()
{
    int time;
    int hours;
    int min;

    cout << "Enter time in minutes: " << endl;
    cin >> time;

    hours = time / 60;
    min = time % 60;

    cout << "The hours is:  " << hours << "hours" << endl;
    cout << "The minutes is:  " << min << "min" << endl;

    return 0;
}
