#include <iostream>
#include "Panic.h"
#include "TryAgain.h"

using namespace std;

void InputY() {
	string isIgnored;
	string worked;
	cout << "Have you tried ignoring the problem? (y or n)" << endl;
	cin >> isIgnored;
	if (isIgnored == "n") {
		cout << endl << "Try it and come back later." << endl;
	}
	else if (isIgnored == "y") {
		cout << "Did it work? (y or n)" << endl;
		cin >> worked;
		if (worked == "y") {
			cout << endl << "Good. Now leave me alone." << endl;
		}
		else if (worked == "n") {
			Panic();
		}
		else {
			TryAgain();
		}
	}
	else {
		TryAgain();
	}
}