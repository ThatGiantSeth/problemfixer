#include <string>
#include <random>
#include <iostream>
using namespace std;

void Panic() {
	string txt;
	string notDone = "y";
	int factNum = 0;
	cout << endl << "Now it\'s time to panic!" << endl << endl << "Here is a random thing to distract you." << endl;
	while (notDone == "y") {
		factNum++;
		if (notDone == "y") {
			int randNum = rand() % 9;
			int sixNine = rand() % 351 + 69;
			cout << endl << "-" << endl << "-" << endl << "-" << endl << endl;
			switch (randNum) {
			case 0:
				txt = "Tired of getting rich only to find your diamonds have decreased in value?\nWant a new currency whose value is about to shoot up?\nStay ahead of the curve with Iridium Coins by Large Cube Inc.\nIridium Coins are not a scam, and they will never give you up or let you down.\nThey are the most useful currency you can buy.";
				break;
			case 1:
				txt = "This is a random number between 69 and 420: " + to_string(sixNine);
				break;
			case 2:
				txt = "You just lost the game.";
				break;
			case 3:
				txt = "This was written in a few hours. You can probably find an easy way to break it!";
				break;
			case 4:
				txt = "https://media.tenor.com/MYZgsN2TDJAAAAAC/this-is.gif";
				break;
			case 5:
				txt = "Genji mains can suck my nuts.";
				break;
			case 6:
				txt = "Hey, at least you didn't get hit by a chair.";
				break;
			case 7:
				txt = "FUCK YOU BALTIMORE! IF YOU'RE DUMB ENOUGH TO BUY A NEW CAR THIS WEEKEND, YOU'RE A DUMB ENOUGH SHMUCK TO BIG BILL HELL'S CARS! BAD DEALS, CARS THAT BREAK DOWN, THIEVES! IF YOU THINK YOU'RE GOING TO FIND A BARGAIN AT BIG BILL'S, YOU CAN KISS MY ASS! IT'S OUR BELIEF THAT YOU'RE SUCH A STUPID MOTHERFUCKER, YOU'LL FALL FOR THIS BULLSHIT -- GUARANTEED!";
				break;
			case 8:
				txt = "This is supposed to be random but it seems to show some phrases more than others.";
				break;
			case 9:
				txt = "Vaporeon is objectively the best Pokemon for... reasons.";
				break;
			}
			cout << txt << endl << endl << "(Times Used: " << factNum << ")" << endl;
			cout << endl << "Would you like another? (y or n)" << endl;
			cin >> notDone;
		}
		if (notDone == "n") {
			cout << "Ok. Bye." << endl;

		}
	}

}