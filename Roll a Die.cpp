#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class DiceClass
{
public:
	int randNumber();
	void printDice(int x);
};

int main()
{
	DiceClass dc;

	bool replay = true;
	int response;

	cout << " [] Dice Simulator []\n";

	do
	{
		cout << " Type 1 to roll a die, or type -1 to quit: ";
		cin >> response;

		if (response != -1)
		{
			dc.printDice(dc.randNumber());
		}
		else
		{
			cout << "\n Thank you for playing!\n\n";
			replay = false;
		}


	} while (replay);
}

int DiceClass::randNumber()
{
	srand(time(0));
	return (1+(rand() % 6));
}

void DiceClass::printDice(int x)
{
	switch (x)
	{
	case 1:
		cout << " [     ]\n [  O  ]\n [     ]\n You rolled a 1!\n";
		break;
	case 2:
		cout << " [O    ]\n [     ]\n [    O]\n You rolled a 2!\n";
		break;
	case 3:
		cout << " [O    ]\n [  O  ]\n [    O]\n You rolled a 3!\n";
		break;
	case 4:
		cout << " [O   O]\n [     ]\n [O   O]\n You rolled a 4!\n";
		break;
	case 5:
		cout << " [O   O]\n [  O  ]\n [O   O]\n You rolled a 5!\n";
		break;
	case 6:
		cout << " [O   O]\n [O   O]\n [O   O]\n You rolled a 6!\n";
		break;
	}
}

/*
[O O O]
[O O  ]
[O    ]
[     ]
*/