#include <iostream>

using namespace std;

// define constants before main function; they're capital strings.
const int COL_SIZE = 5;
const int ROW_SIZE = 10;

int main() {
	// level 1
	bool good = 1;
	char ch = 'a';
	if (good) {
		// level 2
		cout << "good" << endl;
		switch (ch) {
			// level 3
			case 'a':
				// level 4
				cout << "it is apple" << endl;
				break;
			case 'p':
				cout << "it is pear" << endl;
				break;
			default:
				cout << "nothing" << endl;
		}// end of level 3
	} else {
		// level 2, because logically, "else" is matched with "if", they're at the same level
		cout << "bad" << endl;
		int loop = 5;
		while (loop >= 0) {
			// level 3
			cout << loop << endl;
			for (int i = 0; i < 10; i++) {
				// level 4
				int j = 0;
				do {
					// level 5
					cout << "column " << j << " ";
				} while(j < 5);
				cout << "line " << i << endl;
			}
			loop--;
		}
	}
	return 1;
 }
