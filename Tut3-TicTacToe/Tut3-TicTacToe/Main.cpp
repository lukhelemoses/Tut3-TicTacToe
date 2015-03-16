#include<iostream>
#include"TicTacToe.h"

using namespace std;

int main(){
	

	TicTacToe a;
	char p1, p2;
	int n=1;
	a.print();
	while (true)
	{   
		
		cout << "\nPlayer1 play:\n";
		cin >> p1;
		a.move(p1, 0);
		a.print();
		a.isWon();
		if (a.isWon() == 1)
		{
			a.isWon();
			cout << "\n\nGAME OVER";
			break;
		}
		cout << "\nplayer2 play:\n";
		cin >> p2;
		a.move(0,p2);
		a.print();
		a.isWon();
		
	}
	system("pause");
	return 0;
}