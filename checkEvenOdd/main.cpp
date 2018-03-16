#include <iostream>

using namespace std;

void check(int a)
{
    if(a%2==0)
        cout<<"Even";
    else
        cout<<"Odd";
}

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<n<<" is ";
    check(n);
}
