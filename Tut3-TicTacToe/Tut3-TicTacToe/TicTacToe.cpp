#include "TicTacToe.h"
#include<iostream>
using namespace std;

TicTacToe::TicTacToe(int p1,int p2)
{
	matrix[0][0] =' 1';
	matrix[0][1] = '2';
		matrix[0][2] = '3';
		matrix[1][0] = '4';
		matrix[1][1] = '5';
	matrix[1][2] = '6';
	matrix[2][0] = '7';
	matrix[2][1] = '8';
	matrix[2][2] = '9';
	
	player1 = p1;
	player2 = p2;
}


TicTacToe::~TicTacToe()
{
}
void TicTacToe::move(int player1, int player2)
{ 
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (player1 == matrix[i][j])
				matrix[i][j] = 'X';
			else
				if (player2 == matrix[i][j])
					matrix[i][j] = 'O';

		}
	}

	
}
void TicTacToe::print()
{
	cout << matrix[0][0] << "\t" << matrix[0][1] << "\t" << matrix[0][2];
	cout <<"\n"<< matrix[1][0] << "\t" << matrix[1][1] << "\t" << matrix[1][2];
	cout <<"\n" <<matrix[2][0] << "\t" << matrix[2][1] << "\t" << matrix[2][2];

}
bool TicTacToe::isWon()
{
	if (matrix[0][0] == matrix[0][1] && matrix[0][1] == matrix[0][2])
	{
		if (matrix[0][0] == 'X')
			cout << "\nPlayer one has won";
		else
			cout << "\nPlayer two has won";
		return true;
	}
	else
		if (matrix[1][0] == matrix[1][1] && matrix[1][1] == matrix[1][2])
		{

			if (matrix[0][0] == 'X')
				cout << "\nPlayer one has won";
			else
				cout << "\nPlayer two has won";
			return true;
		}
		else
			if (matrix[2][0] == matrix[2][1] && matrix[2][1] == matrix[2][2])
			{

				if (matrix[0][0] == 'X')
					cout << "\nPlayer one has won";
				else
					cout << "\nPlayer two has won";
				return true;
			}
			else
				if (matrix[0][0] == matrix[1][0] && matrix[1][0] == matrix[2][0])
				{

					if (matrix[0][0] == 'X')
						cout << "\nPlayer one has won";
					else
						cout << "\nPlayer two has won";
					return true;
				}
				else
					if (matrix[0][1] == matrix[1][1] && matrix[1][1] == matrix[2][1])
					{

						if (matrix[0][0] == 'X')
							cout << "\nPlayer one has won";
						else
							cout << "\nPlayer two has won";
						return true;
					}
					else
						if (matrix[0][2] == matrix[1][2] && matrix[1][2] == matrix[2][2])
						{

							if (matrix[0][0] == 'X')
								cout << "\nPlayer one has won";
							else
								cout << "\nPlayer two has won";
							return true;
						}

						else
							if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[3][3])
							{

								if (matrix[0][0] == 'X')
									cout << "\nPlayer one has won";
								else
									cout << "\nPlayer two has won";
								return true;
							}
							else
								if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[3][1])
								{

									if (matrix[0][0] == 'X')
										cout << "\nPlayer one has won";
									else
										cout << "\nPlayer two has won";

									return true;
								}

								else
									return 0;

}

void TicTacToe::restart()
{



}