#include "TicTacToe.h"
#include<iostream>
using namespace std;

TicTacToe::TicTacToe(int p1=0,int p2=0)
{
	int  matrix[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (int i = 0; i < 3; i++)
		cout << matrix[i][0] << "\t" << matrix[i][1] << "\t" << matrix[i][2] << endl;

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
void TicTacToe::move(int player1, int player2)
{
	for (int i = 0; i < 3;i++)
		{
			for (int j = 0; j < 3;j++)
			{
				
				if (matrix[i][j] = player1)
				{
					matrix[i][j] = 'X';
					
				}
				else
					if (matrix[i][j] = player2)
					{
						matrix[i][j] = 'W';
					
					}
		}
	}
	
}
void TicTacToe::print()
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << "\t" << matrix[i][j] << "\t" << matrix[i][j] << endl;
		}
	}

}
int TicTacToe::isWon()
{
	if (matrix[0][0] == matrix[0][1] && matrix[0][1] == matrix[0][2])
	{
		if (matrix[0][0] == 'X')
			cout << "\nPlayer one has won";
		else
			cout << "\nPlayer two has won";

	}
	else
		if (matrix[1][0] == matrix[1][1] && matrix[1][1] == matrix[1][2])
		{

			if (matrix[0][0] == 'X')
				cout << "\nPlayer one has won";
			else
				cout << "\nPlayer two has won";
		}
		else
			if (matrix[2][0] == matrix[2][1] && matrix[2][1] == matrix[2][2])
			{

				if (matrix[0][0] == 'X')
					cout << "\nPlayer one has won";
				else
					cout << "\nPlayer two has won";

			}
			else
				if (matrix[0][0] == matrix[1][0] && matrix[1][0] == matrix[2][0])
				{

					if (matrix[0][0] == 'X')
						cout << "\nPlayer one has won";
					else
						cout << "\nPlayer two has won";

				}
				else
					if (matrix[0][1] == matrix[1][1] && matrix[1][1] == matrix[2][1])
					{

						if (matrix[0][0] == 'X')
							cout << "\nPlayer one has won";
						else
							cout << "\nPlayer two has won";

					}
					else
						if (matrix[0][2] == matrix[1][2] && matrix[1][2] == matrix[2][2])
						{

							if (matrix[0][0] == 'X')
								cout << "\nPlayer one has won";
							else
								cout << "\nPlayer two has won";

						}

						else
							if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[3][3])
							{

								if (matrix[0][0] == 'X')
									cout << "\nPlayer one has won";
								else
									cout << "\nPlayer two has won";

							}
							else
								if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[3][1])
								{

									if (matrix[0][0] == 'X')
										cout << "\nPlayer one has won";
									else
										cout << "\nPlayer two has won";


								}
								else
									return 0;

}

void TicTacToe::restart()
{
int matrix[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };


}