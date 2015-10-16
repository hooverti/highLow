// highLow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "std_lib_facilities.h"


int main()
{
	bool stop(false);
	string player_name;
	char accept_game;
	int guess;

	srand(time(NULL));
	int secret_number = rand() % 20 + 1;

	//begin game
	cout << "Hello, I am Hal. What is your name?\n";
	cin >> player_name;
	cout << "Nice to meet you " << player_name << ". Would you like to play a game?\n";
	while (!stop) {
		cout << "Press y for yes, n for no.\n";
		cin >> accept_game;

		//user input options for beginning game
		switch (accept_game)
		{
		case 'y': cout << "Excellent! I'm thinking of a number from 1 to 20...\n";
			system("pause");
			system("cls");
			cout << "Okay got it.  Try to guess my number and I'll tell you if you're too high or too low.\n";
			//loops to let user continue guessing. need to figure out how to limit guess number to 3.
			while (!stop) {
				cin >> guess;
				if (guess < secret_number) {
					cout << "Oops, number is too low. Try again.\n";
				}
				if (guess > secret_number) {
					cout << "Oops, number is too high. Try again.\n";
				}
				if (guess == secret_number) {
					cout << "Got it!\n";
					stop = true;
				}
			}
			stop = true;
			break;
		//exits game
		case 'n': cout << "Very well. Goodbye.\n";
			stop = true;
			break;
		//loops back to user either accepting or rejecting offer to play
		default: cout << player_name << ", that wasn't an option. Let's try this again.\n";
			break;
		}
	}

	system("pause");
	return 0;
}