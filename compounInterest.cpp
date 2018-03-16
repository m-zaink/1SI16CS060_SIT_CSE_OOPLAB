#include <iostream>
#include <cmath>

using namespace std;

double fnCalcInterest(double P,double r, int n)
{
	double V;
	r=r/100;
	V=P*pow(1+r,n);
}

int main()
{
	double P, r;
	int n;
	cout<<"Enter principle amount:";
	cin>>P;
	cout<<"Enter rate of interest:";
	cin>>r;
	cout<<"Enter number of years:";
	cin>>n;
	cout<<"Total amount received at the end of "<<n<<" years for a principal of "<<P<<" at the rate of "<<r
		<<" is "<<fnCalcInterest(P,r,n)<<endl;
	return 0;
}
