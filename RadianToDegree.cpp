#include <iostream>
#include <cmath>
//#include "RadianDegree.h"

using namespace std;
class Radian;
class Degree;

class Radian{
	float rad;
	public:
		Radian():rad(0.0){}
		Radian(float fRad):rad(fRad){}
		Radian(Radian&fRad):rad(fRad.rad){}
		Radian(Degree&);
		
		int returnRad(){return rad;}
		Radian& operator=(const Radian&);
		operator Degree() const;
		Radian operator+(const Radian&)const;
		Radian operator-(const Radian&)const;
		
};

class Degree{
	int deg;
	
	public:
		Degree():deg(0){}
		Degree(int iDeg):deg(iDeg){}
		Degree(Degree&iDeg):deg(iDeg.deg){}
		Degree(Radian&);
		
		int returnDeg(){return deg;}
		Degree& operator=(const Degree&);
		operator Radian() const;
		Degree operator+(const Degree&)const;
		Degree operator-(const Degree&)const;
};


Radian::Radian(Degree& D)
{
	cout<<"Radian To Degree Conversion Constructor";
	rad=D.returnDeg()*M_PI/180;
}

Radian& Radian::operator=(const Radian& R)
{
	rad=R.rad;
	return *this;
}
	
Radian::operator Degree() const
{
	int degree;
	degree=static_cast<int>(round (rad*180/M_PI));
	return Degree a(degree);
}

Radian operator+(const Radian& R)const
{
	Radian rSum;
	rSum=rad+R.rad;
	return rSum;
}

Radian operator-(const Radian&)const{
	Radian rSum;
	rSum=rad-R.rad;
	return rSum;
}

Degree::Degree(Radian& R)
{
	deg=R.rad*M_PI/180;
}
		
Degree& Degree::operator=(const Degree& D)
{
	deg=D.deg;
}
Degree::operator Radian() const
{
	float fRad;
	fRad=deg*180/M_PI;
	
	return Radian(fRad);
}

Degree Degree::operator+(const Degree& D)const
{
	int iSum;
	iSum=deg+D.deg;
	return Degree(iSum) ;
}
Degree Degree::operator-(const Degree&)const
{
	int iSum;
	iSum=deg-D.deg;
	return Degree(iSum) ;
}

