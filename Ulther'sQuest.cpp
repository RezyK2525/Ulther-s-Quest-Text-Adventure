#include<iostream>
#include<vector>
#include<string>
#include<limits>
#include<numeric>
#include<math.h>
using namespace std;

void Header()
{
	cout << "########################################################################################################################" << endl << flush;
	cout << "                                           Welcome to Ulther's Quest                                                             " << endl << flush;
	cout << "########################################################################################################################\n" << endl << flush;
}

void UlthersBackStory()
{
	cout << "You are Ulther Skolsson. A young dwarven mercenary new to the town of Guhn'Brakk. You have recently been employed by theStoneheart Mining Company to clear out a goblin infestation within the local mine. May Moragrim guide your axe true in the upcoming combat brave warrior!" << endl;

}

void CleanScreen()                            //This fuction clears each screen of the game.
{
	string Clean;
	cout << "\n\n\nEnter any key to continue: " << flush;
	cin >> Clean;
	system("CLS");

}

class Goblin {
private: 
	std::string name;

	static int 

public:
	std::string GetName() { return name; }
	void SetName(std::string name) { this->name = name; }


};

int main()
{
	int choice;
	

	Header();
	UlthersBackStory();
	
	CleanScreen();

	cout << "You find yourself in the middle of Guhn'Brakk. A small town built up around the Stoneheart Mining Company's land. \nThe people here went about their days relatively peaceful until the goblin incursion occurred. \nThe local guards aren't able to clear them out as they are currently occupied with a bandit stronghold nearby." << endl << flush;
	
	cout << "To the North lies the path towards the mine.\nTo the East sits the local inn, The Red Dragon. \nThere is nothing else noteworthy nearby." << endl << flush;
	
	cout << "Where would you like to go?" << endl << flush;
	
	cout << "1) North to the mine.\n2) East to the inn.\n" << flush;

	cin >> choice;

	system("CLS");

	if (choice == 1)
	{
		cout << "About 20 minutes into your travel along the Northern path out of Guhn'Brakk you hear something rustling around in the bushes near the road." << endl << flush;

		cout << "1) Ignore it and continue on.\n2) Investigate the source of the noise.\n" << flush;

		cin >> choice;

		system("CLS");

		if (choice == 1)
		{
			cout << "As you pass by the bushes a small green creature jumps out and unleashes a flurry of blows upon you!" << endl << flush;

			cout << "You know this thing to be a goblin. They are foul green skinned creatures that are extremely hostile. Unfortunately for you he successfully pierced your armor and dealt 5 damage!" << endl << flush;


		}
	}

	else if (choice == 2)                     // else if is used for multiple ifs after the first in this section.
	{

		cout << "You enter the Red Dragon Inn.\n\nYou are greeted by the sights and sounds of a lively inn. A red haired dwarven woman gestures you towards her.\n\n";
		
		
		cout << "*You approach the woman at the counter*" << endl << endl;
		
		CleanScreen();

		cout << "Veyla - New in town eyy? The names Veyla, I'm the proprietor of this here inn." << endl;

		CleanScreen();

		cout << "Veyla - So what brings yeh to our town during these troublesome times stranger?" << endl << endl;

		cout << "Ulther - I've been hired by the Stoneheart's to clear their mine of goblins." << endl << endl;

		CleanScreen();

		cout << "Velya - Well aren't you a brave one. Look..." << endl << endl;

		cout << "*Veyla look around cautiously and leans in*" << endl << endl;

		cout << "Velya - you didn't hear this from me, but something seems fishy about these goblins just showing up out of the blue.\nThe local tribes that live in this area aren't known to come this far down South.\nMost of the townsfolk suspect something off about the whole thing." << endl << endl;

		cout << "Velya - Hey, if you're looking for extra coin you could help me find out who or what has these goblins in such an uproar." << endl << endl;

		CleanScreen();

		cout << "1) I'm interested" << endl << endl;

		cout << "2) Sorry but you'll have to find someone else" << endl << endl;

		cin >> choice;

		if (choice == 1)                       //You are on the quest.
		{
			cout << "Veyla - That's great!" << endl << endl;
			
			cout << "Veyla - I'de suggest you get moving then. You can take the road North to get to the mine.\n\nAnd do be careful, reports of goblins along the road have been coming in all week." << endl << endl;

			cout << "*You turn around and head outside towards the Northern path*" << endl;

			CleanScreen();

			cout << "About 20 minutes into your travel along the Northern path you hear something rustling around in the bushes near the road." << endl << endl;



		}

		else if (choice == 2)                 //You are not on the quest.
		{
			cout << "veyla - Alright I guess..." << endl << endl;
			
			cout << "*Veyla turns around and busies herself with something in the backroom*" << endl << endl;

			cout << "*You turn around and head outside towards the Northern path*" << endl;

			CleanScreen();

			cout << "About 20 minutes into your travel along the Northern path you hear something rustling around int he bushes near the road." << endl << endl;









		}

	}





	system("pause");




}