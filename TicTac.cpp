#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

class TicTacToe
{
	int iBoard[3][3];
	int iPlyr;
public:
	void fnIntialise();
	
	void fnSetBoard(int i,int j);
	void fnShowBoard();
	int fnCheckWinner();
};
void TicTacToe::fnIntialise()
{
	iPlyr=0;
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
			iBoard[i][j]=2;
	}
}
void TicTacToe::fnShowBoard()
{
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{	
			if(iBoard[i][j]==2)
				cout<<"*\t";
			else
				cout<<iBoard[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void TicTacToe::fnSetBoard(int i,int j)
{
	if(i>2&&j>2)
		return;
	if(iPlyr==0)
	{
		if(iBoard[i][j]==2)
			iBoard[i][j]=0;
		iPlyr=1;
	}
	else if(iPlyr==1)
	{
		if(iBoard[i][j]==2)
			iBoard[i][j]=1;
		iPlyr=0;
	}
	
	fnShowBoard();
	
	switch(fnCheckWinner())
	{
		case 0:
			cout<<"\nPlayer 1 WINS!!!!"<<endl;
			exit(0);
			break;
		case 1:
			cout<<"\nPlayer 1 WINS!!!!"<<endl;
			exit(0);
			break;
		case 3:
			cout<<"\nIt's a draw players!"<<endl;
			exit(0);
			break;
		default:
			cout<<"\nLet's move ahead!'"<<endl;			
	}
	
}

int TicTacToe::fnCheckWinner()
{
	if(iBoard[0][0]==1 && iBoard[0][1]==1 && iBoard[0][2]==1)		return 1;
	else if(iBoard[1][0]==1 && iBoard[1][1]==1 && iBoard[1][2]==1)	return 1;
	else if(iBoard[2][0]==1 && iBoard[2][1]==1 && iBoard[2][2]==1)	return 1;
	else if(iBoard[0][0]==1 && iBoard[1][0]==1 && iBoard[2][0]==1)	return 1;
	else if(iBoard[0][1]==1 && iBoard[1][1]==1 && iBoard[2][1]==1)	return 1;
	else if(iBoard[0][2]==1 && iBoard[1][2]==1 && iBoard[2][2]==1)	return 1;
	else if(iBoard[0][0]==1 && iBoard[1][1]==1 && iBoard[2][2]==1)	return 1;
	else if(iBoard[2][0]==1 && iBoard[2][1]==1 && iBoard[2][0]==1)	return 1;
	
	if(iBoard[0][0]==0 && iBoard[0][1]==0 && iBoard[0][2]==0)		return 0;
	else if(iBoard[1][0]==0 && iBoard[1][1]==0 && iBoard[1][2]==0)	return 0;
	else if(iBoard[2][0]==0 && iBoard[2][1]==0 && iBoard[2][2]==0)	return 0;
	else if(iBoard[0][0]==0 && iBoard[1][0]==0 && iBoard[2][0]==0)	return 0;
	else if(iBoard[0][1]==0 && iBoard[1][1]==0 && iBoard[2][1]==0)	return 0;
	else if(iBoard[0][2]==0 && iBoard[1][2]==0 && iBoard[2][2]==0)	return 0;
	else if(iBoard[0][0]==0 && iBoard[1][1]==0 && iBoard[2][2]==0)	return 0;
	else if(iBoard[2][0]==0 && iBoard[2][1]==0 && iBoard[2][0]==0)	return 0;
	
	int flag=0	;
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{	if(iBoard[i][j]==2)
				flag=1;
		}
	}
	
	if(!flag)
		return 3;
	return 2;
}

int main()
{
	TicTacToe t;
	int i,j;
	t.fnIntialise();
	t.fnShowBoard();
	
	while(1)
	{
		cout<<"\nEnter the Row:";	cin>>i;
		cout<<"\nEnter the Coloumn:";	cin>>j;
		t.fnSetBoard(i,j);
	}
	return 0;
}
