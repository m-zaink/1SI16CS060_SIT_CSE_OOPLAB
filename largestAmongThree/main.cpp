#include <iostream>

using namespace std;

void largest(int a,int b,int c)
{
    int largest=a;
    if(b>c&&b>a) largest=b;
    else if(c>b&&c>a)   largest=c;
    cout<<"Largest="<<largest;
}


int main()
{
    int a=40,b=30,c=20;
    cout << "Hello world!" << endl;
    largest(a,b,c);
}
