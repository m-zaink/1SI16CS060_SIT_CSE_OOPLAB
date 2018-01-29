/*
**Program to calculate compound interest and display the interest calculated for the
**said number of years and also the amount to be returned at the end of said years.
*/

#include <iostream>
#include <cmath>
using namespace std;

class CompoundInterest{
      double dPrincipal, dInterest, dReturnAmt,dReturnInt;
      // dPrincipal stores principal Amount
      // dInterest stores interest rate
      //dReturnInt stores the interest on maturity
      //dReturnAmt stores the total amount(interest+principal) on maturity
      int iYears;
      //iYears stores the number of years for maturity

      void fnCalcInterest();
public:
      void fnDispReturnAmount();
      void fnReadDetails();
};

void CompoundInterest::fnReadDetails()
{
      //Function to read dPrincipal, dInterest and iYears
      cout<<"\nEnter the principal: ";
      cin>>dPrincipal;
      cout<<"\nEnter the interest (in %): ";
      cin>>dInterest;
      dInterest/=100;
      cout<<"\nEnter the number of years: ";
      cin>>iYears;
      cout<<endl;
}

void CompoundInterest::fnCalcInterest()
{
      //Function to calculate the dReturnAmt and dReturnInt
      dReturnAmt=dPrincipal*(pow(1+dInterest,iYears));
      dReturnInt=dReturnAmt-dPrincipal;
}

void CompoundInterest::fnDispReturnAmount()
{
      //Function to display all the fields.
      fnCalcInterest();
      cout<<"\nTransaction Details:"<<endl;
      cout<<"\nPrincipal: "<<dPrincipal;
      cout<<"\nInterest: "<<dInterest*100<<" %";
      cout<<"\nYears: "<<iYears<<endl;
      cout<<"\nInterest on maturity: "<<dReturnInt;
      cout<<"\nTotal Amount on maturity: "<<dReturnAmt;
      cout<<endl;
}

int main()
{
      CompoundInterest ci;
      
      ci.fnReadDetails();
      ci.fnDispReturnAmount();

      return 0;
}
