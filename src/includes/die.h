#ifndef DIE_H
#define DIE_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class die {
	
		int num_faces, num_rolls;

	public:
		
		die(int faces, int rolls = 1);

		die(string s);

		void roll();
};

#endif
