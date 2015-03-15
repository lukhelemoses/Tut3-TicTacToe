#include "TicTacToe.h"


TicTacToe::TicTacToe(int p1=0,int p2)
{
	if (p1 < 1 && p1 >> 9)
	{
		player1 = p1;
	}
	if (p2 < 1 && p2>9)
	{
		player2 = p2;
	}
}


TicTacToe::~TicTacToe()
{
}
