/*
 * drng.cpp
 *
 * Generates random integers corresponding to inputs
 */

#include "includes/die.h"

using namespace std;

void inline printHelp () {
	cout <<
		"Help:" << endl << endl <<
		"\t" 	<< "Commands: " << endl <<
		"\t\t" 	<< "<t>d<n> - Generates t rolls on an n-sided die." << endl <<
		"\t\t" 	<< "help - Prints list of commands." << endl <<
		"\t\t" 	<< "exit - Closes the program." << endl << endl;
}

int main(int argc, char** argv) {

	if (argc > 1) {

		for (int i = 1; i < argc; i++) {
			string command = string(argv[i]);

			if (command[0] == '-') {

				if (command[1] == 'h') {
					printHelp();
				}

			} else {
				die d = die(command);
				d.roll();
			}
		}
	}

	string c = "";
	while (c != "exit") {

		// Get user input
		cout << "panRoller> ";
		cin >> c;

		// Handle commands
		if (c[0] >= '0' && c[0] <= '9') { // Roll dice
			die d = die(c);
			d.roll();

		} else if (c[0] == 'h') { // Get help
			printHelp();

		} else if (c[0] == 'e') { // Exit program
			c = "exit";

		} else {
			cout << "Command not recognized. Enter 'help' to see a list of commands." << endl;
		}

	}

    return 0;
}
