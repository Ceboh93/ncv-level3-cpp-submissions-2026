#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num, sum=0, sverage=0, count=0;
    sum=0;


        cout << "Enter number " << count <<":";
        cin >>num;

    while (num != -1)
    {
        count++;
        cout<< "Enter number " << count<<":";
        cin >>num;
    }
     cout<< "Loop counter value is: " << count<<":";
    return 0;
}

