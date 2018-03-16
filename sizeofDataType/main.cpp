#include <iostream>

using namespace std;


int main()
{
    cout<<"Find the size of:1.char\t2.int\t3.float\t4.double\n";
    cout<<"Enter your choice:";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<sizeof(char)<<" byte";break;
        case 2:cout<<sizeof(int)<<" byte";break;
        case 3:cout<<sizeof(float)<<" byte";break;
        case 4:cout<<sizeof(double)<<" byte";break;
        default:cout<<"Wrong choice";
    }
}
