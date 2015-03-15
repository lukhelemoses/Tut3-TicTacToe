#include<iostream>

class TicTacToe
{
public:
	int i, j;
	int matrix[3][3];
	TicTacToe(int,int);
	~TicTacToe();
	void restart();
	void move(int,int);
	void print();
	int isWon();
private:
	int player1;
	int player2;

};

