#pragma once
class TicTacToe
{
public:
	TicTacToe(int,int);
	~TicTacToe();
	void restart(int);
	void move(int);
	void print();
	void isWon(int);
private:
	int player1;
	int player2;

};

