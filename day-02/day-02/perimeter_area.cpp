#include <iostream>
#include <string>


using namespace std;
int main()
{
    int length;
    int breadth;
    int area;
    int perimeter;

    cout << "Enter length: " << endl;
    cin >> length;
    cout << "Enter breadth: " << endl;
    cin >> breadth;

    perimeter = 2*(length + breadth);
    area = length * breadth;

    cout << "The perimeter is:  " << perimeter <<  endl;
    cout << "The area is:  " << area << endl;

    return 0;
}
