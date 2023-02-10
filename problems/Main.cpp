#include <iostream>
#include "Panic.h"
#include "Trolo.h"
#include "TryAgain.h"
#include "Iridium.h"
#include "InputY.h"

int main() {
	string probInput;
	cout << "Problem troubleshooter!!" << endl << endl;
	cout << "Do you have a problem? (y or n)" << endl;
	cin >> probInput;
	//simple else if chain to test which input was given
	if (probInput == "y") {
		InputY();
	}
	else if (probInput == "n") {
		// too lazy to give this a function of its own
		cout << endl << "Why tf are you here then?!" << endl;
	}
	else if (probInput == "you") {
		Trolo();
	}
	else if (probInput == "coins") {
		Iridium();
	}
	else {
		TryAgain();
	}
	system("pause");
}