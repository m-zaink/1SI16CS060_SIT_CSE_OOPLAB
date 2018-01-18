#include <iostream>

using namespace std;

class Big{
		int x,y;
	public:
		void fnReadNumbers();
		void fnDispBiggest();
};

void Big::fnReadNumbers()
{
	cout<<"Enter the first number:";
	cin>>x;
	cout<<"\nEnter the second number:";
	cin>>y;
	cout<<endl;
}

void Big::fnDispBiggest()
{
	cout<<"\nAmong "<<x<<" and "<<y<<", the biggest number is ";
	if(x>y)
		cout<<x;
	else
		cout<<y;
	cout<<endl;
}
int main()
{
	Big numbers;
	numbers.fnReadNumbers();
	numbers.fnDispBiggest();
	cout<<endl;
	return 0;
}