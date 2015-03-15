#include<iostream>
#include"TicTacToe.h"

using namespace std;

int main(){

	int matrix[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (int i = 0; i < 3; i++)
	{
		cout << matrix[i][0] <<"\t"<< matrix[i][1] <<"\t"<< matrix[i][2] << endl;
	}




	system("pause");
	return 0;
}