#include<iostream>

class TicTacToe
{
public:
	int i, j;
	char matrix[3][3];

	TicTacToe(int,int);
	~TicTacToe();
	void restart();
	void move(int,int);
	void print();
	bool isWon();
private:
	int player1;
	int player2;

};

