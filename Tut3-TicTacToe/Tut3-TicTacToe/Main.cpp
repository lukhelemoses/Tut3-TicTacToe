#include<iostream>
#include"TicTacToe.h"

using namespace std;

int main(){
	

	TicTacToe a;
	int p1, p2;
	for (;;)
	{
		cout << "Play" << endl;
		cin >>p1;
		a.move(p1,0);
		cout << "player2 Make your move";
		cin >> p2;
		a.move(0, p2);



	}

	system("pause");
	return 0;
}