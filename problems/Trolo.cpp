#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono_literals;

void Trolo() {
	string dareBack;
	cout << "What was that, punk? Say that again. I dare you.\n\noptions: \"you are the problem\" or \"sorry i did not mean it\"" << endl;
	cin.ignore();
	getline(cin, dareBack);
	if (dareBack == "sorry i did not mean it") {
		cout << "Apology accepted." << endl;
	}
	else if (dareBack == "you are the problem") {
		cout << "You are going to regret saying that.";
		sleep_for(1s);
		cout << ".";
		sleep_for(1s);
		cout << ".";
		sleep_for(1s);
		cout << endl << endl << "Sending your nudes to your friends.";
		sleep_for(1s);
		cout << ".";
		sleep_for(1s);
		cout << ".";
		sleep_for(1s);
		cout << endl << "Done!";
		sleep_for(1s);
		cout << endl << endl << "Draining bank account.";
		sleep_for(1s);
		cout << ".";
		sleep_for(1s);
		cout << ".";
		sleep_for(1s);
		cout << endl << "Done!";
		sleep_for(1s);
		cout << endl << endl << "Deleting \\Windows\\System32.";
		sleep_for(1s);
		cout << ".";
		sleep_for(1s);
		cout << ".";
		sleep_for(1s);
		cout << endl << "Done!";
		sleep_for(1s);
		cout << endl << endl << endl << "B";
		sleep_for(0.2s);
		cout << "y";
		sleep_for(0.2s);
		cout << "e";
		sleep_for(0.2s);
		cout << "-";
		sleep_for(0.2s);
		cout << "B";
		sleep_for(0.2s);
		cout << "y";
		sleep_for(0.2s);
		cout << "e";
		sleep_for(0.2s);
		cout << "!";
		sleep_for(5s);
		cout << endl << "trol";
		int i;
		int end = 100;
		for (i = 0; i <= end; i++) {
			cout << "o";
			sleep_for(0.1s);
			cout << "l";
			sleep_for(0.1s);
		}
	}
	else {
		cout << "whatever man." << endl;
	}
}