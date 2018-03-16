#include <iostream>

using namespace std;

int main()
{
	int *ptr=new int[10];
	for(int i=0;i<3;++i)
		ptr[i]=i;
	cout<<*ptr[0]<<endl;
}

