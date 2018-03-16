#include <iostream>
#include <math.h>

using namespace std;

void roots(int a,int b,int c)
{
    if(a==0)
        cout<<"Invalid";
    else
    {
        cout<<"Roots of:";
        cout<<a<<"x^2+"<<b<<"x+"<<c<<endl;
        int d=b*b-4*a*c;
        float dqrt;
        if(d<0)
        {
            d=-d;
            dqrt=sqrt(d);
            cout<<"x1="<<-b/2<<"+"<<dqrt/2<<"i"<<endl;
            cout<<"x2="<<-b/2<<"-"<<dqrt/2<<"i"<<endl;
        }
        else
        {
            dqrt=sqrt(d);
            int x1=(-b+dqrt)/2;
            int x2=(-b-dqrt)/2;
            cout<<"x1="<<x1;
            cout<<"\nx2="<<x2;
        }
    }
}

int main()
{
    int a,b,c;
    cout<<"Enter a,b,c";
    cin>>a>>b>>c;
    roots(a,b,c);
}
