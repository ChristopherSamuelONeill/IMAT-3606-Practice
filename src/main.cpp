#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int iNumbOfGuess = 0;
	int iRandNumb;
	bool bPlayerWon = false;
	int iNumAllowedGuess = 7;


	//create random number 0 - 100
	srand(time(NULL));
	iRandNumb = rand() % 100 + 0;

	system("CLS");
	while (iNumbOfGuess < iNumAllowedGuess && bPlayerWon == false)
	{
		cout << "Number of guess's remaining " << 7 - iNumbOfGuess << endl;
		cout << "Guess a number between 0 - 100 : ";
		int iUserGuess;
		cin >> iUserGuess;
		if (iUserGuess > iRandNumb)
		{
			cout << "Guess lower" << endl;
		}
		if (iUserGuess < iRandNumb)
		{
			cout << "Guess higher" << endl;
		}
		if (iUserGuess == iRandNumb)
		{
			bPlayerWon = true;
		}
		if (iNumbOfGuess == iNumAllowedGuess)
		{
			bPlayerWon = false;
		}

		cout << endl << endl;
		iNumbOfGuess++;
	}

	if (bPlayerWon) 
	{
		system("cls");
		cout << "Congratulations you guessed the right number " << iRandNumb << endl;

	}
	else
	{
		system("cls");
		cout << "Unfortunately the correct number was " << iRandNumb << endl;
	}
	system("pause");
	return 0;
}

