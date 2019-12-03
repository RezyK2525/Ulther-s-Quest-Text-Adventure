#include<iostream>
#include<vector>
#include<string>
#include<limits>

using namespace std;

void Header()
{
	cout << "########################################################################################################################" << endl << flush;
	cout << "                                           Welcome to Ulther's Quest                                                             " << endl << flush;
	cout << "########################################################################################################################" << endl << flush;
}

void UlthersBackStory()
{
	cout << "You are Ulther Skolsson. A young dwarven mercenary living in the town of Guhn'Brakk. You have recently been employed by the Stoneheart Mining Company to clear out a goblin infestation within the local mine. May Moragrim guide your axe true in the upcoming combat brave warrior!" << endl;

}

int ErrorDetection(int choice)
{
	cin >> choice;
	while (1)
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "You have entered wrong input" << endl;
			cin >> choice;
		}
		if (!cin.fail())
			break;
	}


	return choice;
}

int main()
{
	int choice;
	string Choicess;
	string Choices;

	Header();
	UlthersBackStory();

	cout << "Type any key to continue: " << flush;
	cin >> Choicess;
	system("CLS");

	cout << "You find yourself in the middle of Guhn'Brakk. A small town built up around the Stoneheart Mining Company's land. \nThe people here went about their days relatively peaceful until the goblin incursion occurred. \nThe local guards aren't able to clear them out as they are currently occupied with a bandit stronghold nearby." << endl << flush;
	cout << "To the North lies the path towards the mine.\nTo the East sits the local inn, The Red Dragon. \nThere is nothing else noteworthy nearby." << endl << flush;
	cout << "Where would you like to go?" << endl << flush;
	cout << "1) North to the mine.\n2) East to the inn.\n" << flush;


	ErrorDetection(choice);

	if (choice == 1)
	{
		cout << "Hi" << endl;
	}







	system("pause");




}