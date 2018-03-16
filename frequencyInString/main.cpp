#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void freq(char a[])
{
    int ac,ec,ic,oc,uc;
    ac=ec=ic=oc=uc=0;
    for(int i=0;a[i]!='\0';++i)
    {
        switch(a[i])
        {
            case 'a':
            case 'A':++ac;break;
            case 'e':
            case 'E':++ec;break;
            case 'i':
            case 'I':++ic;break;
            case 'o':
            case 'O':++oc;break;
            case 'u':
            case 'U':++uc;break;
        }
    }
    cout<<"Counts are\n";
    cout<<"a\te\ti\to\tu";
    cout<<"\n"<<ac<<"\t"<<ec<<"\t"<<ic<<"\t"<<oc<<"\t"<<uc<<"\t";
}
int main()
{
    char a[20];
    gets(a);
    freq(a);
}
