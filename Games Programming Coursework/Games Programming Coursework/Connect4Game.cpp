

#include <iostream>
#include <random>

using namespace std;
// initial variables
int numberPress; //used to detect the number key
int row[5] = { 4,4,4,4,4 }; //helps identify position on grid
int column[5] = { 0,1,2,3,4 }; //helps identify position on grid
bool isYellow = true; //used to check which colours turn it is
char winnerIs;


void main()
{
	cout << "\t CONNECT 4 \n\n\n";
	int roundNo = 1; //used to determine the turn
	char gameGrid[5][5] = { { ' ',' ',' ',' ',' '},
							{ ' ',' ',' ',' ',' '},
							{ ' ',' ',' ',' ',' '},
							{ ' ',' ',' ',' ',' '},
							{ ' ',' ',' ',' ',' '} };

	//system("PAUSE");

	for (int i = 1; i <= 25; i++) //play the game 25 (5x5) times maximum, redrawing the board each time, changing turns and detecting possible winners in eac cycle
	{
		cout << roundNo && "\n\n";

		//edit/create the grid
		cout << "     1   2   3   4   5" << endl;
		cout << "   ---------------------" << endl;

		cout << " 1" << " | " << gameGrid[0][0] << " | " << gameGrid[0][1]
			<< " | " << gameGrid[0][2] << " | " << gameGrid[0][3] << " | " << gameGrid[0][4] << " | " << endl;
		cout << "   ---------------------" << endl;

		cout << " 2" << " | " << gameGrid[1][0] << " | " << gameGrid[1][1] << " | "
			<< gameGrid[1][2] << " | " << gameGrid[1][3] << " | " << gameGrid[1][4] << " | " << endl;
		cout << "   ---------------------" << endl;

		cout << " 3" << " | " << gameGrid[2][0] << " | " << gameGrid[2][1] << " | "
			<< gameGrid[2][2] << " | " << gameGrid[2][3] << " | " << gameGrid[2][4] << " | " << endl;
		cout << "   ---------------------" << endl;

		cout << " 4" << " | " << gameGrid[3][0] << " | " << gameGrid[3][1] << " | "
			<< gameGrid[3][2] << " | " << gameGrid[3][3] << " | " << gameGrid[3][4] << " | " << endl;
		cout << "   ---------------------" << endl;

		cout << " 5" << " | " << gameGrid[4][0] << " | " << gameGrid[4][1] << " | "
			<< gameGrid[4][2] << " | " << gameGrid[4][3] << " | " << gameGrid[4][4] << " | " << endl;
		cout << "   ---------------------" << endl;

		//instructs the player
		cout << "\n Press 1-5 \n\n\n";
		cin >> numberPress;

		//check round number to determine which colour will be used
		if (roundNo % 2 == 0)
		{
			isYellow = false;
		}
		else
		{
			isYellow = true;
		}

		//decide which column/row to put token in, places them at the bottem and then continues on
		if (numberPress == 1)
		{
			if (row[0] > -1)
			{
				if (isYellow) //checks to see if the turn is yellow/red
				{
					gameGrid[row[0]][column[0]] = 'Y'; //places the appropriate symbol
					row[0]--; //changes the row for next time

				}

				if (!isYellow)
				{
					gameGrid[row[0]][column[0]] = 'R';
					row[0]--;
				}
			}
			else
			{
				i--;
				roundNo--;
				cout << "\n Row Full \n";
			}
		}
		else if (numberPress == 2)
		{
			if (row[1] > -1)
			{
				if (isYellow)
				{
					gameGrid[row[1]][column[1]] = 'Y';
					row[1]--;

				}

				if (!isYellow)
				{
					gameGrid[row[1]][column[1]] = 'R';
					row[1]--;
				}
			}
			else
			{
				i--;
				roundNo--;
				cout << "\n Row Full \n";
			}
		}
		else if (numberPress == 3)
		{
			if (row[2] > -1)
			{
				if (isYellow)
				{
					gameGrid[row[2]][column[2]] = 'Y';
					row[2]--;

				}

				if (!isYellow)
				{
					gameGrid[row[2]][column[2]] = 'R';
					row[2]--;
				}
			}
			else
			{
				i--;
				roundNo--;
				cout << "\n Row Full \n";
			}
		}
		else if (numberPress == 4)
		{
			if (row[3] > -1)
			{
				if (isYellow)
				{
					gameGrid[row[3]][column[3]] = 'Y';
					row[3]--;

				}

				if (!isYellow)
				{
					gameGrid[row[3]][column[3]] = 'R';
					row[3]--;
				}
			}
			else
			{
				i--;
				roundNo--;
				cout << "\n Row Full \n";
			}
		}
		else if (numberPress == 5)
		{
			if (row[4] > -1)
			{
				if (isYellow)
				{
					gameGrid[row[4]][column[4]] = 'Y';
					row[4]--;

				}

				if (!isYellow)
				{
					gameGrid[row[4]][column[4]] = 'R';
					row[4]--;
				}
			}
			else
			{
				i--;
				roundNo--;
				cout << "\n Row Full \n";
			}
		}
		else
		{
			//ensures the loop stays at the same round and on the same itteration while asking the player to pick an appropriate input
			i--;
			roundNo--;
			cout << "\n Pick again \n";
		}

		roundNo++;



		//determines win conditions then leaves first for loop
		//detecting matches in both horizontal/vertical
		for (int j = 0; j < 5; j++)
		{
			if (gameGrid[j][1] == 'Y' && gameGrid[j][2] == 'Y' && gameGrid[j][3] == 'Y' && (gameGrid[j][0] == 'Y' || gameGrid[j][4] == 'Y')) //if 4 in a row of the 5x5 grid are alligned - win for Y/R player
			{
				winnerIs = 'Y';
				i = 25;
			}
			if (gameGrid[j][1] == 'R' && gameGrid[j][2] == 'R' && gameGrid[j][3] == 'R' && (gameGrid[j][0] == 'R' || gameGrid[j][4] == 'R'))
			{
				winnerIs = 'R';
				i = 25;
			}
			if (gameGrid[1][j] == 'Y' && gameGrid[2][j] == 'Y' && gameGrid[3][j] == 'Y' && (gameGrid[0][j] == 'Y' || gameGrid[4][j] == 'Y'))
			{
				winnerIs = 'Y';
				i = 25;
			}
			if (gameGrid[1][j] == 'R' && gameGrid[2][j] == 'R' && gameGrid[3][j] == 'R' && (gameGrid[0][j] == 'R' || gameGrid[4][j] == 'R'))
			{
				winnerIs = 'R';
				i = 25;
			}

		}
		//Detect Matches in Diagonals:
		if (gameGrid[1][1] == 'Y'&&gameGrid[2][2] == 'Y'&&gameGrid[3][3] == 'Y' && (gameGrid[0][0] == 'Y' || gameGrid[4][4] == 'Y'))
		{
			winnerIs = 'Y';
			i = 25;
		}
		if (gameGrid[1][1] == 'R'&&gameGrid[2][2] == 'R'&&gameGrid[3][3] == 'R' && (gameGrid[0][0] == 'R' || gameGrid[4][4] == 'R'))
		{
			winnerIs = 'R';
			i = 25;
		}
		if ((gameGrid[0][1] == 'Y'&& gameGrid[1][2] == 'Y'&&gameGrid[2][3] == 'Y'&&gameGrid[3][4] == 'Y') || (gameGrid[1][0] == 'Y'&& gameGrid[2][1] == 'Y'&&gameGrid[3][2] == 'Y'&&gameGrid[4][3] == 'Y'))
		{
			winnerIs = 'Y';
			i = 25;
		}
		if ((gameGrid[0][1] == 'R'&& gameGrid[1][2] == 'R'&&gameGrid[2][3] == 'R'&&gameGrid[3][4] == 'R') || (gameGrid[1][0] == 'R'&& gameGrid[2][1] == 'R'&&gameGrid[3][2] == 'R'&&gameGrid[4][3] == 'R'))
		{
			winnerIs = 'R';
			i = 25;
		}
		if (gameGrid[1][3] == 'Y'&&gameGrid[2][2] == 'Y'&&gameGrid[3][1] == 'Y' && (gameGrid[0][4] == 'Y' || gameGrid[4][0] == 'Y'))
		{
			winnerIs = 'Y';
			i = 25;
		}
		if (gameGrid[1][3] == 'R'&&gameGrid[2][2] == 'R'&&gameGrid[3][1] == 'R' && (gameGrid[0][4] == 'R' || gameGrid[4][0] == 'R'))
		{
			winnerIs = 'R';
			i = 25;
		}
		if ((gameGrid[0][3] == 'Y'&& gameGrid[1][2] == 'Y'&&gameGrid[2][1] == 'Y'&&gameGrid[3][0] == 'Y') || (gameGrid[4][1] == 'Y'&& gameGrid[3][2] == 'Y'&&gameGrid[2][3] == 'Y'&&gameGrid[1][4] == 'Y'))
		{
			winnerIs = 'Y';
			i = 25;
		}
		if ((gameGrid[0][3] == 'R'&& gameGrid[1][2] == 'R'&&gameGrid[2][1] == 'R'&&gameGrid[3][0] == 'R') || (gameGrid[4][1] == 'R'&& gameGrid[3][2] == 'R'&&gameGrid[2][3] == 'R'&&gameGrid[1][4] == 'R'))
		{
			winnerIs = 'R';
			i = 25;
		}
	}




	//shows final state of the grid
	cout << "     1   2   3   4   5" << endl;
	cout << "   ---------------------" << endl;

	cout << " 1" << " | " << gameGrid[0][0] << " | " << gameGrid[0][1]
		<< " | " << gameGrid[0][2] << " | " << gameGrid[0][3] << " | " << gameGrid[0][4] << " | " << endl;
	cout << "   ---------------------" << endl;

	cout << " 2" << " | " << gameGrid[1][0] << " | " << gameGrid[1][1] << " | "
		<< gameGrid[1][2] << " | " << gameGrid[1][3] << " | " << gameGrid[1][4] << " | " << endl;
	cout << "   ---------------------" << endl;

	cout << " 3" << " | " << gameGrid[2][0] << " | " << gameGrid[2][1] << " | "
		<< gameGrid[2][2] << " | " << gameGrid[2][3] << " | " << gameGrid[2][4] << " | " << endl;
	cout << "   ---------------------" << endl;

	cout << " 4" << " | " << gameGrid[3][0] << " | " << gameGrid[3][1] << " | "
		<< gameGrid[3][2] << " | " << gameGrid[3][3] << " | " << gameGrid[3][4] << " | " << endl;
	cout << "   ---------------------" << endl;

	cout << " 5" << " | " << gameGrid[4][0] << " | " << gameGrid[4][1] << " | "
		<< gameGrid[4][2] << " | " << gameGrid[4][3] << " | " << gameGrid[4][4] << " | " << endl;
	cout << "   ---------------------" << endl;

	//Name winner or if it is a tie
	if(winnerIs=='Y')
	{
		cout << "Yellow Wins!";
	}
	else if (winnerIs == 'R')
	{
	cout << "Red Wins!";
	}
	else
	{
		cout << "Tie!";
	}
			cout << "\n !END! \n"; //shows that the game has ended
		system("PAUSE");
}
