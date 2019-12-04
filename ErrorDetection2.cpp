
#include <iostream>
#include "Header.h"

using namespace std;


int ErrorDetection2(int choice)
{

	while (true)
	{
		while (choice != 1 && choice != 2)
		{
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Sorry please enter a valid option: " << endl;
				cin >> choice;

			}
			if (choice == 1 || choice == 2)
			{
				break;
			}
			cout << "Please enter a valid choice 1 or 2: ";
			cin >> choice;
		}
		if (!cin.fail())
			break;
	}


	return choice;
}