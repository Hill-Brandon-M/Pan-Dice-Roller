#include "die.h"

using namespace std;

die::die(int faces, int rolls) {

	//cout << "Generating die with " << num_faces << " faces and " << num_rolls << "rolls" << endl;	//DEBUG

	num_faces = faces;
	num_rolls = rolls;
}

die::die(string s) {
	int p = s.find('d');
	string f = s.substr(p + 1);
	string r = s.substr(0, p);

	//cout << f << " ; " << r << endl;	//DEBUG
	//cout << stoi(f) << " ; " << stoi(r) << endl;	//DEBUG

	num_faces = stoi(f);
	num_rolls = stoi(r);
}

void die::roll() {

	cout << "Rolling " << num_rolls << "d" << num_faces << "..." << endl;

	for (int i = 0; i < num_rolls; i++) {
		cout << ((rand() % num_faces) + 1);
		if (i < (num_rolls - 1))
			cout << ", ";
	}

	cout << endl << endl;

}