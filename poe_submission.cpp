#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

int calcSum(int num1,int num2)
{
    return num1+num2;
}
int calcDiff(int n1,int n2)
{
    return n1-n2;
}
int calcProd(int fn,int sn)
{
    return fn*sn;
}
int calcQout(int q1,int q2)
{
    return q1/q2;
}
void generateValues(int &val1,int &val2)
{
    val1=rand()%50+1; //value between 1 and 50
    val2=rand()%50+1;

    char oper;
    cout<<"Enter operator "<< endl;
    cin>>oper;

    switch (oper)
    {
    case '+':
        cout<<val1<<" + "<<val2<<"="<<calcSum(val1,val2)<<endl;
        break;

    case '-':
        cout<<val1<<" - "<<val2<<"="<<calcDiff(val1,val2)<<endl;
        break;

    case '*':
         cout<<val1<<" * "<<val2<<"="<<calcProd(val1,val2)<<endl;
         break;
    case '/':
        cout<<val1<<" / "<<val2<<"="<<calcQout(val1,val2)<<endl;
        break;

    default:
    cout<<"invalid operstor"<<endl;
   }
}



int main()
{
    int v1=0;
    int v2=0;
    generateValues(v1,v2);



    return 0;
}
