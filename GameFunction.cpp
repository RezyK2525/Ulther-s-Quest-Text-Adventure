#include <iostream>
#include "Header.h"
#include <string>

using namespace std;


void GameFunction()
{
	int choice;
	string Choicess;



	cout << "Enter any key to continue: " << flush;
	cin >> Choicess;
	system("CLS");

	cout << "You find yourself in the middle of Guhn'Brakk. A small town built up around the Stoneheart Mining Company's land. \nThe people here went about their days relatively peaceful until the goblin incursion occurred. \nThe local guards aren't able to clear them out as they are currently occupied with a bandit stronghold nearby." << endl << flush;
	cout << "To the North lies the path towards the mine.\nTo the East sits the local inn, The Red Dragon. \nThere is nothing else noteworthy nearby." << endl << flush;
	cout << "Where would you like to go?" << endl << flush;
	cout << "1) North to the mine.\n2) East to the inn.\n" << flush;


	cin >> choice;

	int path = ErrorDetection2(choice);

	system("CLS");

	if (path == 1)
	{
		cout << "About 20 minutes into your travel along the Northern path out of Guhn'Brakk you hear something rustling around in the bushes near the road." << endl << flush;

		cout << "1) Ignore it and continue on.\n2) Investigate the source of the noise.\n" << flush;

		cin >> choice;

		int path2 = ErrorDetection2(choice);

		system("CLS");

		if (path2 == 1)
		{
			cout << "As you pass by the bushes a small green creature jumps out of the bushes and unleashes a flurry of blows upon you!" << endl << flush;

			cout << "You know this thing to be a goblin. They are foul green skinned creatures that are extremely hostile. Unfortunately for you he successfully pierced your armor and dealt 5 damage!" << endl << flush;


		}
	}
}