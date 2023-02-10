#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono_literals;

void Trolo() {
	//i apologize to everyone reading this
	string dareBack;
	cout << "What was that, punk? Say that again. I dare you.\n\noptions: \"you are the problem\" or \"sorry i did not mean it\"" << endl;
	//gets input (with spaces)
	cin.ignore();
	getline(cin, dareBack);
	//ends program if user apologizes
	if (dareBack == "sorry i did not mean it") {
		cout << "Apology accepted." << endl;
	}
	//this looks weird but it's just outputting scary messages with a delay in between each
	//also it it slowly adds ... to each action
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
		//makes trolololololololol... at the end
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
	//if user does not select either true option
	else {
		cout << "whatever man." << endl;
	}
}