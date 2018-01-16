/*Calculate the average rainfall in a region based on the number of months the user enters. Along
with this, find variance and standard deviation.*/

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

double fnMean(double,int);
double fnVariance(double,int,double);

int main()
{
	int iNMonths;
	float fRand,fSum=0, fSqrSum, fMean, fVar,fSD;
	srand(time(NULL));
	cout<<"\nEnter the number of months:";
	cin>>iNMonths;
	for(int i=0;i<iNMonths;++i)
	{	
		fRand=(rand()%2001+2000)/100;
		fSum+=fRand;
		fSqrSum+=(fRand*fRand);
	}

	fMean=fnMean(fSum,iNMonths);
	fVar=fnVariance(fSqrSum,iNMonths,fMean);
	fSD=sqrt(fVar);
	cout<<"\nMean of the rainfall across "<<iNMonths<<" is:"<<fMean;
	cout<<"\nVariance of the rainfall across "<<iNMonths<<" is:"<<fVar;
	cout<<"\nStandard Deviation of the rainfall across "<<iNMonths<<" is:"<<fSD;
}

double fnMean(double dSum,int iNMonths){
	return dSum/iNMonths;
}

double fnVariance(double dSqrSum,int iNMonths,double fnMean){
	return	((dSqrSum/iNMonths)-fnMean*fnMean);
}