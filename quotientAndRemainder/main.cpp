#include <iostream>

using namespace std;

int quotient(int dividend,int divisor)
{
    return dividend/divisor;
}
int remainder(int dividend,int divisor)
{
    return dividend%divisor;
}

int main()
{
    cout <<"Enter the two numbers:\n";
    int a,b;
    cin>>a>>b;
    cout<<a<<"/"<<b<<" gives quotient:"<<quotient(a,b)<<" and remainder:"<<remainder(a,b);
}
