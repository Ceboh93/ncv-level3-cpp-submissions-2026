#include<iostream>

using namespace std;

void getValues(int &num1, int &num2)
{
    cout<<"Enter two numbers: "<<endl;
    cin >> num1>>num2;
}
void calcSum(int num1,int num2)
{

    int sum=num1+num2;
    cout<<num1<<" + "<<num2<<"="<<sum<<endl;
}
void calcDiff(int n1,int n2)
{
    int diff=n1-n2;
    cout<<n1<<" - "<<n2<<"="<<diff<<endl;
}
void calcProd(int fn,int sn)
{
    int prod= fn*sn;
    cout<<fn<<" * "<<sn<<"="<<prod<<endl;
}
void calcQout(int q1,int q2)
{
    int quot=q1/q2;
    cout<<q1<<" / "<<q2<<"="<<quot<<endl;
}
int main()
{
    int v1=0;
    int v2=0;

    getValues(v1,v2);
    calcSum(v1,v2);
    calcDiff(v1,v2);
    calcProd(v1,v2);
    calcQout(v1,v2);

    return 0;
}
