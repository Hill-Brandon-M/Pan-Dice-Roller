/*
 * drng.cpp
 *
 * Generates random integers corresponding to inputs
 */

#include "includes/die.h"

using namespace std;

int main(int argc, char** argv) {

	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			string command = string(argv[i]);
			die d = die(command);
			d.roll();
		}
		return 0;
	}


	cout <<
		"Welcome to the Dice Random Number Generator!" << endl <<
		"For t dice rolls for an n-sided die, please enter a command in the follwing format: <t>d<n>" << endl <<
		"Otherwise, enter \"exit\" to close the program." << endl << endl;

	string c = "0";
	while (c != "exit") {
		if (c != "0") {
			die d = die(c);
			d.roll();
		}

		cin >> c;
	}

    return 0;
}
