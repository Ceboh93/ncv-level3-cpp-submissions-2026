#include <iostream>
#include <string>
using namespace std;

int main()
{
int i;
int sum;
int num;
double average;
for ( i= 1; i <= 5; i++)
{
    cout << "Enter number: " << endl;
    cin >> num;
    sum = sum + num;


}
    average=sum/i;
    cout <<"Sum is: " << sum << endl;
    cout <<"average  is: " << average << endl;
return 0;
}
