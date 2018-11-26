

#include <iostream>
#include <random>

using namespace std;

int numberPress;
int row[5] = { 4,4,4,4,4 };
int column[5] = { 0,1,2,3,4 };
bool isYellow = true;

char cKeypressed;


void main()
{
	int roundNo = 1;
	char gameGrid[5][5] = { { ' ',' ',' ',' ',' '}, 
							{ ' ',' ',' ',' ',' '}, 
							{ ' ',' ',' ',' ',' '}, 
							{ ' ',' ',' ',' ',' '}, 
							{ ' ',' ',' ',' ',' '} };

	//system("PAUSE");
	
	for(int i=1; i<=25; i++)
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
		cout << "\n Press 1-5 \n";
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
			if (row[0] <= 4) 
			{
				if (isYellow)
				{
					gameGrid[row[0]][column[0]] = 'Y';
					row[0]--;

				}
				
				if (!isYellow)
				{
					gameGrid[row[0]][column[0]] = 'R';
					row[0]--;
				}
			}
		}
		else if (numberPress == 2)
		{
			if (row[1] <= 4)
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
		}
		else if (numberPress == 3)
		{
			if (row[2] <= 4)
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
		}
		else if (numberPress == 4)
		{
			if (row[3] <= 4)
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
		}
		else if (numberPress == 5)
		{
			if (row[4] <= 4)
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
		}
		else
		{
			//ensures the loop stays at the same round and on the same itteration while asking the player to pick an appropriate input
			i--;
			roundNo--;
			cout << "\n Pick again \n";
		}

		roundNo++;
	


		//if win condition met, leave for loop


	} 
			cout << "\n !END! \n";
		system("PAUSE");
}
