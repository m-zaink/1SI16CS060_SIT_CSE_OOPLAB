#include <iostream>
using namespace std;


class TicTacToeType{
	int iTicTac[3][3];
	int player;
	int gamState[8,2];
	
	void fnShowBoard();
	void fnCheckWinner();
	
	public:
	TicTacToeType();
	
	void fnSetBoard(int);
	
};

TicTacToeType::TicTacToeType()
{
	for(int i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
			iTicTac[i][j]=2;
	}
	player=0;
}

void TicTacToeType::fnShowBoard()
{
	int i,j;
	cout<<"\n";
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;+j)
			cout<<iTicTac[i][j]<<"\t";
		
		cout<<endl;
	}
}

void TicTacToeType::fnSetBoard(int iPosR,int iPosC)
{
	if(player==0)
	{
		if(iTicTac[iPosC][iPosR].iPlayerN==2)
		{
		
			iTicTac[iPosR][iPosC]=player;
			player=1;
		}
	}
	else if(player==1)
	{
		if(iTicTac[iPosC][iPosR].iPlayerN==2)
		{
		
			iTicTac[iPosR][iPosC]=player;
			player=0;
		}
	}
	fnShowBoard();
	
}

int fnCheckWinner()
{
	
}
