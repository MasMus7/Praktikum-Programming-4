#include"Board.h"
#include"Player.h"
#include<iostream>
Boards a;
int Player::players()
{
	int player = 1, i, choice;
	char mark;
	do
	{
		a.Board();
		player = (player % 2) ? 1 : 2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

		mark = (player == 1) ? 'X' : 'O';

		if (choice == 1 && a.square[1] == '1')
			a.square[1] = mark;
		else if (choice == 2 && a.square[2] == '2')

			a.square[2] = mark;
		else if (choice == 3 && a.square[3] == '3')

			a.square[3] = mark;
		else if (choice == 4 && a.square[4] == '4')

			a.square[4] = mark;
		else if (choice == 5 && a.square[5] == '5')

			a.square[5] = mark;
		else if (choice == 6 && a.square[6] == '6')

			a.square[6] = mark;
		else if (choice == 7 && a.square[7] == '7')

			a.square[7] = mark;
		else if (choice == 8 && a.square[8] == '8')

			a.square[8] = mark;
		else if (choice == 9 && a.square[9] == '9')

			a.square[9] = mark;
		else
		{
			cout << "Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
		i = a.CheckWin();

		player++;
	} while (i == -1);
	Boards();
	if (i == 1)

		cout << "==>\aPlayer " << --player << " win ";
	else
		cout << "==>\aGame draw";

	cin.ignore();
	cin.get();
	return 0;
}