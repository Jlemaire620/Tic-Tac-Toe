#include <iostream>
char gameBoard[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'O';

void onBoardPossition()
{
	int input;
	std::cout << "Enter the number where you'd like to place your piece." << std::endl;
	std::cin >> input;
	if (input == 1)
	{
		gameBoard[0][0] = player;
	}
	else if (input == 2)
	{
		gameBoard[0][1] = player;
	}
	else if (input == 3)
	{
		gameBoard[0][2] = player;
	}
	else if (input == 4)
	{
		gameBoard[1][0] = player;
	}
	else if (input == 5)
	{
		gameBoard[1][1] = player;
	}
	else if (input == 6)
	{
		gameBoard[1][2] = player;
	}
	else if (input == 7)
	{
		gameBoard[2][0] = player;
	}
	else if (input == 8)
	{
		gameBoard[2][1] = player;
	}
	else if (input == 9)
	{
		gameBoard[2][2] = player;
	}
}
void WhichPlayer()
{
	if (player == 'X')
	{
		player = 'X';
	}
	else
	{
        player = 'O';
	}
		
}
char Victory()
{
	if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O')
	{
       return 'O';
	}
	if (gameBoard[0][0] == 'O' && gameBoard[1][0] == 'O' && gameBoard[2][0] == 'O')
	{
		return 'O';
	}
}

int main()
{
	std::cout << "Let's play Tic Tac Toe!" << std::endl;
	system("pause");
}