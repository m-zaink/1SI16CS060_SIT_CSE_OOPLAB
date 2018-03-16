#include <iostream>

using namespace std;

void swapTemp(int *a,int *b)
{
    int *temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

void swap2(int *a,int *b)
{
    *a=*a * *b;
    *b=*a/(*b);
    *a=*a/(*b);
}
void swap3(int *a,int *b)
{
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}
int main()
{
    int a=20,b=10;
    cout<<"a="<<a<<" b="<<b;
    swapTemp(&a,&b);
    cout<<"\nAfter swap using temp: a="<<a<<" b="<<b<<endl;
    swap(&a,&b);
    cout<<"After swap without temp 1: a="<<a<<" b="<<b;
    swap2(&a,&b);
    cout<<"\nAfter swap without temp 2: a="<<a<<" b="<<b;
    swap3(&a,&b);
    cout<<"\nAfter swap without temp 3: a="<<a<<" b="<<b;
}
