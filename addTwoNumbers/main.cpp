#include <iostream>

using namespace std;
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    cout <<"Enter the two numbers:\n";
    cin>>a>>b;
    cout<<a<<"+"<<b<<"="<<add(a,b);
}
