#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;

int main()
{
	int n,a[6];
	int iChoice;
	cout<<"Enter the number of voters in the ward:";
	cin>>n;
	for(int i=0;i<6;++i)
		a[i]=0;
	for(int i=0;i<n;++i)
	{
		cout<<"Enter your choice  (1\t2\t3\t4\t5):";
		cin>>iChoice;
		
		switch(iChoice)
		{
			case 1:a[0]++;break;
			case 2:a[1]++;break;
			case 3:a[2]++;break;
			case 4:a[3]++;break;
			case 5:a[4]++;break;
			default:a[5]++;
		}	
	}
	int win=0;
	for(int i=1;i<5;++i)
	{
		if(a[win]<a[i])
			win=i;
	}
	cout<<"\n\nBallot count is as follows:"<<endl;
	cout<<"Ballot 1:"<<a[0]<<endl;
	cout<<"Ballot 2:"<<a[1]<<endl;
	cout<<"Ballot 3:"<<a[2]<<endl;
	cout<<"Ballot 4:"<<a[3]<<endl;
	cout<<"Ballot 5:"<<a[4]<<endl;
	cout<<"Spoilt Ballot:"<<a[5]<<endl;
	
	cout<<"**********Winner Is**********";
	cout<<"\n*************"<<win+1<<"***********"<<endl;
	
	return 0;
}
